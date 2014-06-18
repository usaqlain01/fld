<?php

use Symfony\Component\Yaml\Yaml;

class EntityListHandlerApachesolrMLT extends EntityListHandlerApachesolr {

  public function __construct(Array $config = array()) {
    parent::__construct($config);
    $defaults = array(
      'settings' => array(),
    );
    $this->config = array_merge($defaults, $config);
  }

  public function requiredArguments() {
    return array(
      'entity' => array(
        'label' => 'Entity',
        'required' => TRUE,
      ),
    );
  }

  protected function searchArguments() {
    if (empty($this->searchArguments)) {
      $arguments = $this->getArguments();
      $node = $arguments[0]->data;

      // Search keywords and filters.
      $params = $this->config['settings'];
      $params['num_results'] = $this->range['limit'];
      $this->searchArguments = array(
        $params,
        apachesolr_document_id($node->nid),
        $this->searchEnvironment(),
      );
    }
    return $this->searchArguments;
  }

  public function execute() {
    try {
      $entity_type = $this->entityType();
      // Get our specific environment for the MLT block
      $results = call_user_func_array('apachesolr_search_mlt_suggestions', $this->searchArguments());
      $ids = array();
      foreach ($results as $result) {
        $ids[] = $result->entity_id;
      }
      if (!empty($ids)) {
        return entity_load($entity_type, $ids);
      }
    }
    catch (Exception $e) {
      watchdog_exception('entitylist', $e);
    }
    return array();
  }

  public function validateForm($element, &$form_state) {
    if (!empty($element['#value'])) {
      $value = Yaml::parse($element['#value']);
      form_set_value($element, $value, $form_state);
      //form_error($element, t('The "!name" option must contain a valid value. You may either leave the text field empty or enter a string like "512" (bytes), "80 KB" (kilobytes) or "50 MB" (megabytes).', array('!name' => t($element['title']))));
    }
  }

  public function configForm(&$form_state) {
    $form = parent::configForm($form_state);
    $form['settings'] = array(
      '#type' => 'textarea',
      '#title' => t('Settings'),
      '#default_value' => Yaml::dump($this->config['settings']),
      '#element_validate' => array(
        array($this, 'validateForm'),
      ),
    );
    return $form;
  }
}
