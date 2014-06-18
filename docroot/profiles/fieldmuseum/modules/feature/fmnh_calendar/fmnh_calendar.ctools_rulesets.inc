<?php
/**
 * @file
 * fmnh_calendar.ctools_rulesets.inc
 */

/**
 * Implements hook_default_ctools_access_ruleset().
 */
function fmnh_calendar_default_ctools_access_ruleset() {
  $export = array();

  $ruleset = new stdClass();
  $ruleset->disabled = FALSE; /* Edit this to true to make a default ruleset disabled initially */
  $ruleset->api_version = 1;
  $ruleset->name = 'events_ending_soon';
  $ruleset->admin_title = 'Events ending soon';
  $ruleset->admin_description = '';
  $ruleset->requiredcontexts = array();
  $ruleset->contexts = array(
    0 => array(
      'identifier' => 'List: Events ending soon',
      'keyword' => 'list',
      'name' => 'entitylist:events_ending_soon',
      'use_pager' => FALSE,
      'pager_id' => NULL,
      'range' => array(
        'offset' => 0,
        'limit' => 10,
      ),
      'id' => 1,
    ),
  );
  $ruleset->relationships = array();
  $ruleset->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'entitylist_with_results',
        'settings' => NULL,
        'context' => 'context_entitylist:events_ending_soon_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $export['events_ending_soon'] = $ruleset;

  $ruleset = new stdClass();
  $ruleset->disabled = FALSE; /* Edit this to true to make a default ruleset disabled initially */
  $ruleset->api_version = 1;
  $ruleset->name = 'events_starting_soon';
  $ruleset->admin_title = 'Events starting soon';
  $ruleset->admin_description = '';
  $ruleset->requiredcontexts = array();
  $ruleset->contexts = array(
    0 => array(
      'identifier' => 'List: Events starting soon',
      'keyword' => 'list',
      'name' => 'entitylist:events_starting_soon',
      'use_pager' => FALSE,
      'pager_id' => NULL,
      'range' => array(
        'offset' => 0,
        'limit' => 10,
      ),
      'id' => 1,
    ),
  );
  $ruleset->relationships = array();
  $ruleset->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'entitylist_with_results',
        'settings' => NULL,
        'context' => 'context_entitylist:events_starting_soon_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $export['events_starting_soon'] = $ruleset;

  $ruleset = new stdClass();
  $ruleset->disabled = FALSE; /* Edit this to true to make a default ruleset disabled initially */
  $ruleset->api_version = 1;
  $ruleset->name = 'manage_events';
  $ruleset->admin_title = 'Manage events';
  $ruleset->admin_description = 'Check permissions for user to edit, delete or create events.';
  $ruleset->requiredcontexts = array();
  $ruleset->contexts = array();
  $ruleset->relationships = array();
  $ruleset->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create event content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit own event content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit any event content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'delete own event content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      4 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'delete any event content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $export['manage_events'] = $ruleset;

  return $export;
}
