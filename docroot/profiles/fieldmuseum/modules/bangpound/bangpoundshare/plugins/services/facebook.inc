<?php

$plugin = array(
  'label' => t('Facebook'),
  'url' => 'http://api.ak.facebook.com/restserver.php?v=1.0&method=links.getStats&urls=<encoded-url>&format=json',
  'metrics' => array('count', 'like_count', 'share_count', 'comment_count'),
  'handler' => array(
    'class' => 'FacebookAnalyticsService',
  ),
);

class FacebookAnalyticsService extends ServiceLinksAnalyticsService {

  function result() {
    if ($this->data) {
      return array(
        'count' => $this->data[0]['total_count'],
        'like_count' => $this->data[0]['like_count'],
        'share_count' => $this->data[0]['share_count'],
        'comment_count' => $this->data[0]['comment_count'],
      );
    }
  }
}
