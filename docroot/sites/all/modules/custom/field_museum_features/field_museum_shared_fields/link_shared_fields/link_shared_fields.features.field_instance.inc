<?php
/**
 * @file
 * link_shared_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function link_shared_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-department_division_page-field_description_link'
  $field_instances['node-department_division_page-field_description_link'] = array(
    'bundle' => 'department_division_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This link will display after the black Description box. It can be a link to any URL inside or outside the museum\'s website, with the label using the text in the Title field. Leave these fields blank if you don\'t want to use this.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description_link',
    'label' => 'Post Description Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-dept_div_collections_landing-field_description_link'
  $field_instances['node-dept_div_collections_landing-field_description_link'] = array(
    'bundle' => 'dept_div_collections_landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description_link',
    'label' => 'Department/Division Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-dept_div_collections_landing-field_link'
  $field_instances['node-dept_div_collections_landing-field_link'] = array(
    'bundle' => 'dept_div_collections_landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Include links to custom search forms',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Collection Searches',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-explore_our_collections-field_link'
  $field_instances['node-explore_our_collections-field_link'] = array(
    'bundle' => 'explore_our_collections',
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
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Featured Links',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'class' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel' => '',
      'target' => 'default',
      'title' => 'optional',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-individual_collection-field_description_link'
  $field_instances['node-individual_collection-field_description_link'] = array(
    'bundle' => 'individual_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This link will display after the black Description box. It can be a link to any URL inside or outside the museum\'s website, with the label using the text in the Title field. Leave these fields blank if you don\'t want to use this.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description_link',
    'label' => 'Post Description Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'class' => '',
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 1,
      'rel' => '',
      'target' => 'default',
      'title' => 'required',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-individual_collection-field_link'
  $field_instances['node-individual_collection-field_link'] = array(
    'bundle' => 'individual_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 1,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Collection Search',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'class' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel' => '',
      'target' => 'default',
      'title' => 'optional',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-promotion_widget-field_link'
  $field_instances['node-promotion_widget-field_link'] = array(
    'bundle' => 'promotion_widget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Link Title: The text that the user should click on. This text will appear immediately below the promo image. 
Link URL: When a user clicks on the Link Title, it should take them to this link. This link is cab be a link to anywhere, including sites external to fieldmuseum.org',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'class' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel' => '',
      'target' => 'default',
      'title' => 'optional',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-secondary_section_front-field_link'
  $field_instances['node-secondary_section_front-field_link'] = array(
    'bundle' => 'secondary_section_front',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Featured Links',
    'required' => 0,
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
      'title' => 'optional',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-subsection_homepage-field_link'
  $field_instances['node-subsection_homepage-field_link'] = array(
    'bundle' => 'subsection_homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-widget-field_link'
  $field_instances['node-widget-field_link'] = array(
    'bundle' => 'widget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'custom_collapsible' => 0,
          'custom_collapsible_collapsed' => 0,
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 0,
      'title' => 'optional',
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Collection Search');
  t('Collection Searches');
  t('Department/Division Link');
  t('Featured Links');
  t('Include links to custom search forms');
  t('Link');
  t('Link Title: The text that the user should click on. This text will appear immediately below the promo image. 
Link URL: When a user clicks on the Link Title, it should take them to this link. This link is cab be a link to anywhere, including sites external to fieldmuseum.org');
  t('Links');
  t('Post Description Link');
  t('This link will display after the black Description box. It can be a link to any URL inside or outside the museum\'s website, with the label using the text in the Title field. Leave these fields blank if you don\'t want to use this.');

  return $field_instances;
}
