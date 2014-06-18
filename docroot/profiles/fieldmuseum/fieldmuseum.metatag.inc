<?php

/**
 * Implements hook_metatag_info().
 */
function fieldmuseum_metatag_info() {
  $info['tags']['distribution'] = array(
    'label' => t('Distribution'),
    'description' => t("The level or degree of distribution of your web-page and how it should be classified in relation to methods of distribution on the world wide web."),
    'class' => 'DrupalTextMetaTag',
    'header' => "distribution",
    'context' => array('global'),
    'group' => 'advanced',
  );
  return $info;
}
