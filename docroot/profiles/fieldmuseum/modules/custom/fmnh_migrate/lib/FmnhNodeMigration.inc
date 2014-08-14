<?php

class FmnhNodeMigration extends DrupalNode7Migration {
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->formatMappings[2] = 'filtered_wysiwyg';
    $this->formatMappings[3] = 'full_wysiwyg';

    $this->addFieldMapping(null, 'revision')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'log')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'revision_uid')->issueGroup('DNM')->description('Administrative debris');

    $this->addFieldMapping(null, 'path');

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
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Undo the mapping of the path.
    if ($this->moduleExists('path')) {
      unset($row->path);
    }

    $fields = array(
      'body',
      'field_accomplishments',
      'field_acknowledgements',
      'field_additional_information',
      'field_article_tags',
      'field_bio_sketch',
      'field_collections_loans',
      'field_collections_related_info',
      'field_content_location_abbr',
      'field_crnews_staff_student',
      'field_database_information',
      'field_dept_div_abbr',
      'field_description',
      'field_education',
      'field_explore_tags',
      'field_faq_long_question',
      'field_fax',
      'field_fieldwork_collections',
      'field_firstname',
      'field_grants_awards',
      'field_home_tags',
      'field_hometown',
      'field_imagecaption',
      'field_interests',
      'field_intro',
      'field_introduction',
      'field_lede',
      'field_loan_info',
      'field_map',
      'field_office',
      'field_people_additional',
      'field_people_tab_header',
      'field_policies',
      'field_position',
      'field_professional_affiliations',
      'field_project_header',
      'field_public_education',
      'field_publications',
      'field_research_publications',
      'field_research',
      'field_secondary_front_tags',
      'field_section_front_tags',
      'field_surname',
      'field_vimeo_download_url',
      'field_work_experience',
      'field_year_started',
    );

    foreach ($fields as $field) {
      if (isset($row->$field)) {
        try {
          FmnhFileMigration::rewriteMediaTags($row, $field);
        }
        catch (\Exception $e) {
          $this->queueMessage('Rewriting the media tag failed');
          return FALSE;
        }
      }
    }
  }

  public function prepareRowAttachments($row) {
    // Merge article files and audio files into a single attachment field.
    $row->attachments = array();
    $row->{'attachments:display'} = array();
    $row->{'attachments:description'} = array();
    if (!empty($row->field_audio_file)) {
      $source_migrations = array(
        'VideoFile',
        'AudioFile',
        'DefaultFile',
        'DocumentFile',
        'ImageFile',
        'UndefinedFile',
      );
      $destids = $this->handleSourceMigration($source_migrations, $row->field_audio_file);
      if (!is_array($destids)) {
        $destids = array($destids);
      }
      $row->attachments = array_merge($row->attachments, $destids);
      $row->{'attachments:display'} = array_merge($row->{'attachments:display'}, $row->{'field_audio_file:display'});
      $row->{'attachments:description'} = array_merge($row->{'attachments:description'}, $row->{'field_audio_file:description'});
    }
    if (!empty($row->field_article_files)) {
      $source_migrations = array(
        'VideoFile',
        'AudioFile',
        'DefaultFile',
        'DocumentFile',
        'ImageFile',
        'UndefinedFile',
      );
      $destids = $this->handleSourceMigration($source_migrations, $row->field_article_files);
      if (!is_array($destids)) {
        $destids = array($destids);
      }
      $row->attachments = array_merge($row->attachments, $destids);
      $row->{'attachments:display'} = array_merge($row->{'attachments:display'}, $row->{'field_article_files:display'});
      $row->{'attachments:description'} = array_merge($row->{'attachments:description'}, $row->{'field_article_files:description'});
    }
  }

  public function findOldParentMenuItem($path) {
    static $info;
    if (!$info) {
      $info = \Symfony\Component\Yaml\Yaml::parse(drupal_get_path('module', 'fmnh_migrate') .'/parents.yml');
    }
    if ($info[$path]) {
      return $info[$path];
    }
    else {
      return array();
    }
  }

  public function findNewMenuParentForNode($old_nid) {
    /** @var $source_migrations array */
    static $source_migrations = array();

    if (empty($source_migrations)) {
      $source_migrations = array(
        'ArticleNode',
        'BlogNode',
        'CollectionNode',
        'DepartmentNode',
        'EducationalResourceArticleNode',
        'ExhibitNode',
        'FaqNode',
        'ItineraryArticleNode',
        'NewsForGeneralAudiencesArticleNode',
        'NewsletterNode',
        'PageNode',
        'PhotoGalleryNode',
        'PodcastNode',
        'PressMaterialsArticleNode',
        'ProgramArticleNode',
        'PublicationArticleNode',
        'ResearchScienceArticleNode',
        'TravelingExhibitionNode',
        'VideoNode',
        'WebformNode',
      );

      // Instantiate each migration, and store back in the array.
      foreach ($source_migrations as $key => $source_migration) {
        $source_migrations[$key] = Migration::getInstance($source_migration);
      }
    }

    foreach ($source_migrations as $source_migration) {
      /** @var \Migration $source_migration */
      // Break out of the loop as soon as a destination ID is found.
      if ($destids = $source_migration->getMap()->lookupDestinationID(array($old_nid))) {
        if (!empty($destids['destid1'])) {
          $parent_item = menu_link_get_preferred('node/'. $destids['destid1']);

          // This check seems to catch a lot of invalid paths.
          if ($parent_item['link_path'] != 'node/%') {
            return $parent_item;
          }
        }
      }
    }
  }
}
