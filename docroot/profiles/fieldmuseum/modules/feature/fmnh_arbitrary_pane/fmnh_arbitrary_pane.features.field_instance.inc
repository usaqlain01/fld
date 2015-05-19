<?php
/**
 * @file
 * fmnh_arbitrary_pane.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fmnh_arbitrary_pane_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'fieldable_panels_pane-markup_styles_scripts-field_css'
  $field_instances['fieldable_panels_pane-markup_styles_scripts-field_css'] = array(
    'bundle' => 'markup_styles_scripts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_css',
    'label' => 'CSS',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'filtered_wysiwyg' => 0,
          'full_html' => 0,
          'full_wysiwyg' => 0,
          'markdown' => 0,
          'plain_text' => 0,
          'unfiltered' => 'unfiltered',
          'unfiltered_phrase_html' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'filtered_wysiwyg' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'full_wysiwyg' => array(
              'weight' => -8,
            ),
            'markdown' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -3,
            ),
            'unfiltered' => array(
              'weight' => -4,
            ),
            'unfiltered_phrase_html' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-markup_styles_scripts-field_js'
  $field_instances['fieldable_panels_pane-markup_styles_scripts-field_js'] = array(
    'bundle' => 'markup_styles_scripts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_js',
    'label' => 'JS',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'filtered_wysiwyg' => 0,
          'full_html' => 0,
          'full_wysiwyg' => 0,
          'markdown' => 0,
          'plain_text' => 0,
          'unfiltered' => 'unfiltered',
          'unfiltered_phrase_html' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'filtered_wysiwyg' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'full_wysiwyg' => array(
              'weight' => -8,
            ),
            'markdown' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -3,
            ),
            'unfiltered' => array(
              'weight' => -4,
            ),
            'unfiltered_phrase_html' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-markup_styles_scripts-field_markup'
  $field_instances['fieldable_panels_pane-markup_styles_scripts-field_markup'] = array(
    'bundle' => 'markup_styles_scripts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_markup',
    'label' => 'Markup',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'filtered_wysiwyg' => 0,
          'full_html' => 0,
          'full_wysiwyg' => 0,
          'markdown' => 0,
          'plain_text' => 0,
          'unfiltered' => 'unfiltered',
          'unfiltered_phrase_html' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'filtered_wysiwyg' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'full_wysiwyg' => array(
              'weight' => -8,
            ),
            'markdown' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -3,
            ),
            'unfiltered' => array(
              'weight' => -4,
            ),
            'unfiltered_phrase_html' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-markup_styles_scripts-field_target_link'
  $field_instances['fieldable_panels_pane-markup_styles_scripts-field_target_link'] = array(
    'bundle' => 'markup_styles_scripts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_target_link',
    'label' => 'Target link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CSS');
  t('JS');
  t('Markup');
  t('Target link');

  return $field_instances;
}
