<?php

/**
 * @file
 * Plugin to provide access control based upon node (un)published status.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("User: active"),
  'description' => t('Control access by the user\'s status.'),
  'callback' => 'fieldmuseum_user_status_ctools_access_check',
  'summary' => 'fieldmuseum_user_status_ctools_access_summary',
  'required context' => new ctools_context_required(t('User'), 'user'),
);

/**
 * Check for access.
 */
function fieldmuseum_user_status_ctools_access_check($conf, $context) {
  return (!empty($context->data) && $context->data->status);
}

/**
 * Provide a summary description based upon the checked node_statuss.
 */
function fieldmuseum_user_status_ctools_access_summary($conf, $context) {
  return t('Returns true if the user\'s status is "active".');
}

