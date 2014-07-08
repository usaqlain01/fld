<?php

$plugin = array(
  'label' => t('Delicious'),
  'url' => 'http://feeds.delicious.com/v2/json/urlinfo/data?url=<encoded-url>',
  'handler' => array(
    'class' => 'DeliciousAnalyticsService',
  ),
  'max_age' => 86400,
);

class DeliciousAnalyticsService extends ServiceLinksAnalyticsService {
  function result() {
    if ($this->data) {
      return $this->data[0]['total_posts'];
    }
    return 0;
  }
}
