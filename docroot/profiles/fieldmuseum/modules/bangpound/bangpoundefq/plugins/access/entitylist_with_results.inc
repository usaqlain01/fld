<?php

$plugin = array(
  'title' => t("Entitylist with results"),
  'description' => t('Control access by if entitylist has results.'),
  'callback' => 'bangpoundefq_entitylist_with_results_access_check',
  'default' => array(
  ),
  'summary' => 'bangpoundefq_entitylist_with_results_access_summary',
  'required context' => new ctools_context_required(t('Entitylist'), 'entitylist'),
);

/**
 * Check for access.
 */
function bangpoundefq_entitylist_with_results_access_check($conf, $context, $plugin) {
  /** @var \Entitylist $list */
  $list = entitylist_list_load_from_context($context);
  $list->buildQuery();
  return ($list->count() > 0);
}

/**
 * Provide a summary description based upon the selected sunrise and sunset times.
 */
function bangpoundefq_entitylist_with_results_access_summary($conf, $context, $plugin) {
  return !empty($conf['description']) ? check_plain($conf['description']) : t('No description');
}