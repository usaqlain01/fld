<?php

$plugin = array(
  'label' => t('StumbleUpon'),
  'url' => 'http://www.stumbleupon.com/services/1.01/badge.getinfo?url=<encoded-url>',
  'handler' => array(
    'class' => 'StumbleuponAnalyticsService',
  ),
  'max_age' => 86400,
);

class StumbleuponAnalyticsService extends ServiceLinksAnalyticsService {
  function result() {
    if ($this->data) {
      if ($this->data['result']['in_index']) {
        return $this->data['result']['views'];
      }
    }
  }
}
