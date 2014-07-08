<?php

class ServiceLinksAnalyticsService {

  protected $plugin;
  protected $response;
  protected $data;

  function init($plugin) {
    $this->plugin = $plugin;
  }

  function request($url) {
    $tag = array(
      'encoded-url' => '<encoded-url>',
    );
    $subst = array(
      'encoded-url' => $url,
    );
    $analytics_url = str_replace($tag, $subst, $this->plugin['url']);
    $this->response = drupal_http_request($analytics_url);
  }

  function parse() {
    if ($this->response->code == 200) {

      // JSON responses.
      $this->data = drupal_json_decode($this->response->data);

      // JSONP responses.
      if (!$this->data) {
        $this->data = drupal_json_decode(preg_replace('/.+?({.+}).+/', '$1', $this->response->data));
      }
    }
  }

  function result() {
    if (isset($this->data) && isset($this->data['count'])) {
      return $this->data['count'];
    }
  }
}
