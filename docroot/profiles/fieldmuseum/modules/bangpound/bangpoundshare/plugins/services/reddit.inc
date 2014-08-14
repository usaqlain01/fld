<?php

$plugin = array(
  'label' => t('Reddit'),
  'url' => 'http://www.reddit.com/api/info.json?url=<encoded-url>',
  'handler' => array(
    'class' => 'RedditAnalyticsService',
  ),
  'max_age' => 86400,
);

class RedditAnalyticsService extends ServiceLinksAnalyticsService {
  function result() {
    if ($this->data) {
      $value = 0;
      foreach ($this->data['data']['children'] as $child) {
        $value += $child['data']['score'];
      }
      return $value;
    }
  }
}
