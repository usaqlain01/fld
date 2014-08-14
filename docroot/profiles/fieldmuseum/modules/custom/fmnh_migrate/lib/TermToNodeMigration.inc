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

    $this->addFieldMapping('metatag_title')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_description')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_abstract')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_keywords')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_robots')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_news_keywords')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_standout')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_generator')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_copyright')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_image_src')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_canonical')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_shortlink')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_publisher')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_author')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_original-source')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_revisit-after')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.title')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.creator')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.subject')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.description')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.publisher')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.contributor')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.date')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.type')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.format')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.identifier')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.source')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.language')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.relation')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.coverage')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_dcterms.rights')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_fb:admins')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_fb:app_id')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:site_name')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:title')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:description')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:type')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:image')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:image:secure_url')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:url')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:latitude')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:longitude')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:street-address')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:locality')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:region')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:postal-code')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:country-name')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:email')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:phone_number')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:fax_number')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:locale')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video:secure_url')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video:width')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video:height')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_og:video:type')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:card')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:site')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:site:id')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:creator')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:creator:id')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:url')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:title')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:description')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image:width')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image:height')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image0')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image1')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image2')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:image3')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player:width')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player:height')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player:stream')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:player:stream:content_type')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:id:iphone')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:id:ipad')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:id:googleplay')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:url:iphone')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:url:ipad')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:country')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:app:url:googleplay')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:label1')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:data1')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:label2')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_twitter:data2')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_verify-v1')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_google-site-verification')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_msvalidate.01')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_y_key')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_alexaVerifyID')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_yandex-verification')->issueGroup('Metatag')->description('No need to migrate this.');
    $this->addFieldMapping('metatag_distribution')->issueGroup('Metatag')->description('No need to migrate this.');

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