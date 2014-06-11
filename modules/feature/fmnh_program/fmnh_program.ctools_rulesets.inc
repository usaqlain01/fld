<?php
/**
 * @file
 * fmnh_program.ctools_rulesets.inc
 */

/**
 * Implements hook_default_ctools_access_ruleset().
 */
function fmnh_program_default_ctools_access_ruleset() {
  $export = array();

  $ruleset = new stdClass();
  $ruleset->disabled = FALSE; /* Edit this to true to make a default ruleset disabled initially */
  $ruleset->api_version = 1;
  $ruleset->name = 'programs_for_audience';
  $ruleset->admin_title = 'Programs for audience';
  $ruleset->admin_description = '';
  $ruleset->requiredcontexts = array(
    0 => array(
      'identifier' => 'Taxonomy term',
      'keyword' => 'taxonomy_term',
      'name' => 'entity:taxonomy_term',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $ruleset->contexts = array();
  $ruleset->relationships = array(
    0 => array(
      'identifier' => 'List: Programs by audience',
      'keyword' => 'list',
      'name' => 'entitylist_relationship:programs_by_audience',
      'use_pager' => FALSE,
      'pager_id' => NULL,
      'range' => array(
        'offset' => 0,
        'limit' => 10,
      ),
      'context' => array(
        0 => 'requiredcontext_entity:taxonomy_term_1',
      ),
      'id' => 1,
    ),
  );
  $ruleset->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entitylist_with_results',
        'settings' => NULL,
        'context' => 'relationship_entitylist_relationship:programs_by_audience_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $export['programs_for_audience'] = $ruleset;

  return $export;
}
