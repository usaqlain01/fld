<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<?php print render($title_prefix); ?>
<h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
<?php print render($title_suffix); ?>

<?php if ($unpublished): ?>
  <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
<?php endif; ?>

<?php
$items = field_get_items('node', $node, 'field_image');
if ($items) {
  foreach ((array) $items as $item) {
    $element = field_view_value('node', $node, 'field_image', $item, array('type' => 'file_rendered_image', 'settings' => array(
      'file_view_mode' => 'default',
      'image_style' => 'thumbnail',
      'image_link' => 'file',
    )));
    $element['file']['#path']['options']['attributes']['class'][] = 'float--rightPadded';
    print render($element);
  }
}
hide($content['field_image']);
?>
<?php hide($content['field_summary']); ?>

<?php print render($content['body']); ?>

<?php
// We hide the comments and links now so that we can render them later.
hide($content['comments']);
hide($content['links']);
print render($content);
?>

<?php print render($content['links']); ?>

<?php print render($content['comments']); ?>
