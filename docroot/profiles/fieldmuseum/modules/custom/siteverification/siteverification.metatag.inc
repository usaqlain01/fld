<?php

/**
 * Implements hook_metatag_info().
 */
function siteverification_metatag_info() {
  $info['groups']['site-verification'] = array(
    'label' => t('Site verification'),
    'form' => array(
      '#weight' => 90,
    ),
  );

  $info['tags']['google_webmaster_verification_legacy'] = array(
    'label' => t('Google Webmaster (legacy)'),
    'class' => 'DrupalTextMetaTag',
    'name' => 'verify-v1',
    'context' => array('global'),
    'group' => 'site-verification',
    'description' => t('Google Webmaster site verification (legacy)'),
  );

  $info['tags']['google_webmaster_verification'] = array(
    'label' => t('Google Webmaster'),
    'class' => 'DrupalTextMetaTag',
    'name' => 'google-site-verification',
    'context' => array('global'),
    'group' => 'site-verification',
    'description' => t('Google Webmaster site verification'),
  );

  $info['tags']['bing_webmaster_verification'] = array(
    'label' => t('Bing Webmaster'),
    'class' => 'DrupalTextMetaTag',
    'name' => 'msvalidate.01',
    'context' => array('global'),
    'group' => 'site-verification',
    'description' => t('Bing Webmaster site verification'),
  );

  $info['tags']['yahoo_webmaster_verification'] = array(
    'label' => t('Yahoo Webmaster'),
    'class' => 'DrupalTextMetaTag',
    'name' => 'y_key',
    'context' => array('global'),
    'group' => 'site-verification',
    'description' => t('Yahoo Webmaster site verification'),
  );

  $info['tags']['alexa_webmaster_verification'] = array(
    'label' => t('Alexa Webmaster'),
    'class' => 'DrupalTextMetaTag',
    'name' => 'alexaVerifyID',
    'context' => array('global'),
    'group' => 'site-verification',
    'description' => t('Alexa Webmaster site verification'),
  );

  $info['tags']['yandex_webmaster_verification'] = array(
    'label' => t('Yandex Webmaster'),
    'class' => 'DrupalTextMetaTag',
    'name' => 'yandex-verification',
    'context' => array('global'),
    'group' => 'site-verification',
    'description' => t('Yandex Webmaster site verification'),
  );

  return $info;
}
