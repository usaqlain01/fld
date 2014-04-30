<?php

class TermToNodeMigration extends DrupalMigration
{
  /**
   * The source and destination content types (bundles) we're dealing with.
   */
  protected $destinationType;

  /**
   * Default language to apply to the node and it's body field.
   *
   * @var string
   */
  protected $defaultLanguage = LANGUAGE_NONE;

  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->sourceVocabulary = $arguments['source_vocabulary'];
    $this->destinationType = $arguments['destination_type'];
    $this->sourceFields += $this->version->getSourceFields(
      'taxonomy_term', $this->sourceVocabulary);
    if ($this->moduleExists('path')) {
      $this->sourceFields['path'] = t('Path alias');
    }
    if (!empty($arguments['default_language'])) {
      $this->defaultLanguage = $arguments['default_language'];
    }

    // Create our three main objects - source, destination, and map
    $this->source = new MigrateSourceSQL($this->query(), $this->sourceFields,
      NULL, $this->sourceOptions);

    $this->destination = new MigrateDestinationNode($this->destinationType);

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'tid' => array('type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Source term ID',
          'alias' => 'td',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('language', 'language')
      ->defaultValue($this->defaultLanguage);

    $this->addFieldMapping('title', 'name');

    if (field_info_instance('node', 'body', $this->destinationType)) {
      $this->addFieldMapping('body', 'description');
      $this->addFieldMapping('body:format', 'description:format')
        ->callbacks(array($this, 'mapFormat'));
    }
    else {
      $this->addUnmigratedSources(array('body:summary', 'body:format'));
    }

    if ($this->moduleExists('path')) {
      $this->addFieldMapping('path', 'path')
        ->description('Handled in prepareRow');
    }

    if (module_exists('pathauto')) {
      $this->addFieldMapping('pathauto')
        ->description('By default, disable in favor of migrated paths')
        ->defaultValue(0);
    }

    $this->addFieldMapping('format', 'format')
      ->callbacks(array($this, 'mapFormat'));
  }

  /**
   * The base source query for this migration.
   *
   * @return QueryConditionInterface
   */
  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('taxonomy_term_data', 'td')
      ->fields('td', array('tid', 'name', 'description', 'weight', 'format'))
      ->orderBy('th.parent')
      ->distinct();
    $query->leftJoin('taxonomy_term_hierarchy', 'th', 'td.tid=th.tid');
    $query->fields('th', array('parent'));
    $query->innerJoin('taxonomy_vocabulary', 'v', 'td.vid=v.vid');
    $query->condition('v.machine_name', array($this->sourceVocabulary), 'IN');
    return $query;
  }
}