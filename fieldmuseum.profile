<?php
/**
 * @file
 * Code for the Field Museum install profile.
 */

include_once 'fieldmuseum.features.inc';

/**
 * Implements hook_menu
 */
function fieldmuseum_menu() {
  $items = array();
  $items['node/%node/migrate'] = array(
    'title' => 'Migrate',
    'page callback' => 'fieldmuseum_node_migrate',
    'page arguments' => array(1),
    'access callback' => 'node_access',
    'access arguments' => array('view', 1),
    'type' => MENU_LOCAL_TASK,
  );
  return $items;
}

/**
 * @param $node
 */
function fieldmuseum_node_migrate($node) {
  $source_migrations = array(
    'ArticleNode',
    'BlogNode',
    'CollectionNode',
    'DepartmentNode',
    'EducationalResourceArticleNode',
    'ExhibitNode',
    'FaqNode',
    'ItineraryArticleNode',
    'NewsForGeneralAudiencesArticleNode',
    'NewsletterNode',
    'PhotoGalleryNode',
    'PodcastNode',
    'PressMaterialsArticleNode',
    'ProgramArticleNode',
    'PublicationArticleNode',
    'ResearchScienceArticleNode',
    'VideoNode',
    'WebformNode',
  );

  foreach ($source_migrations as $source_migration) {
    /** @var \Migration $migration */
    $migration = Migration::getInstance($source_migration);
    if ($sourceids = $migration->getMap()->lookupSourceID(array($node->nid))) {
      if (!empty($sourceids['sourceid1'])) {
        drupal_goto('http://fieldmuseum.org/node/'. $sourceids['sourceid1'], array(), 303);
      }
    }
  }
}

/**
 * Implements hook_system_info_alter().
 *
 * Force this profile to be visible.
 */
function fieldmuseum_system_info_alter(&$info, $file, $type) {
  if ($type == 'module' && $file->name == 'fieldmuseum') {
    $info['hidden'] = FALSE;
  }
}

/**
 * @param $links
 * @param $pane
 * @param $content_type
 * @see ctools_custom_content_get_pane_links_alter
 */
function fieldmuseum_get_pane_links_alter(&$links, $pane, $content_type) {
  if ($pane->type == 'custom' && isset($links['top']['edit_custom_content'])) {
    unset($links['top']['edit_custom_content']);
  }
}

/**
 * Implements hook_module_implements_alter().
 *
 * @param $implementations
 * @param $hook
 * @see https://api.drupal.org/api/drupal/modules%21system%21system.api.php/function/hook_module_implements_alter/7
 */
function fieldmuseum_module_implements_alter(&$implementations, $hook) {
  // Force this profile's implementation of get_pane_links_alter to run last.
  if ($hook == 'get_pane_links_alter') {
    $group = $implementations['fieldmuseum'];
    unset($implementations['fieldmuseum']);
    $implementations['fieldmuseum'] = $group;
  }

  // Remove the hook implementations for these modules so their image styles can be
  // exported by this profile.
  if ($hook == 'image_default_styles') {
    unset($implementations['image']);
    unset($implementations['media']);
    unset($implementations['media_gallery']);
  }

  // Disable image and media module implementations of default image styles hook so
  // this profile can override them and export them with the same name.
  if ($hook == 'file_default_displays') {
    unset($implementations['file_entity']);
  }
}

/**
 * Implementation of hook_ctools_plugin_directory() to let the system know
 * we implement task and task_handler plugins.
 */
function fieldmuseum_ctools_plugin_directory($module, $plugin) {
  // Most of this module is implemented as an export ui plugin, and the
  // rest is in ctools/includes/ctools_access_ruleset.inc
  if ($module == 'ctools' && $plugin == 'access') {
    return 'plugins/' . $plugin;
  }
}

/**
 * Image effect callback: Crop the image based on the image style.
 *
 * Wraps around original imagecrop effect callback to provide a default crop area using
 * smartcrop.
 */
function fieldmuseum_imagecrop_effect(&$image, $data) {
  $fid = db_select('file_managed')
    ->fields('file_managed', array('fid'))
    ->condition('uri', $image->source)
    ->execute()->fetchField();

  if (isset($GLOBALS['imagecrop_style'])) {
    $style_name = $GLOBALS['imagecrop_style'];
  }
  // and if not, then get the id from list of all presets
  else {
    $style_name = imagecrop_get_style_name_from_url();
  }

  if ($fid && $style_name) {
    $settings = db_select('image_crop_settings')
      ->fields('image_crop_settings')
      ->condition('fid', $fid)
      ->condition('style_name', $style_name)
      ->execute()->fetchObject();

    // Load settings
    if (!$settings) {
      list($cx, $cy) = image_focus_get_focal_point($image);
      $info = $image->info;
      $scale = max($data['width'] / $info['width'], $data['height'] / $info['height']);
      $info['width'] = $info['width'] * $scale;
      $info['height'] = $info['height'] * $scale;
      $xoffset = max(0, min($info['width']  - $data['width'],  $cx * $scale - $data['width']  / 2));
      $yoffset = max(0, min($info['height'] - $data['height'], $cy * $scale - $data['height'] / 2));
      $scale_width = ceil(($image->info['width'] + 2) * $scale);

      $row = array(
        'fid' => $fid,
        'style_name' => $style_name,
        'xoffset' => $xoffset,
        'yoffset' => $yoffset,
        'width' => $data['width'],
        'height' => $data['height'],
        'scale' => $scale_width,
        'rotation' => 0,
      );
      drupal_write_record('image_crop_settings', $row);
    }
  }

  return imagecrop_effect($image, $data);
}
