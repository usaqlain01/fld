<?php
/**
 * @file
 * homepage_quicktabs_block_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function homepage_quicktabs_block_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_quicktabs_block_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'home_page' => 'home_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-homepage_quicktabs' => array(
          'module' => 'quicktabs',
          'delta' => 'homepage_quicktabs',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage_quicktabs_block_context'] = $context;

  return $export;
}
