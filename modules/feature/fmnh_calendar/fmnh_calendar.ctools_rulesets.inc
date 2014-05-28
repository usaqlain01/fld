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
