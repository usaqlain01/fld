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
    $fields = array(
      'field_firstname',
      'field_surname',
      'field_position',
      'field_year_started',
      'field_hometown',
      'field_dept_div_abbr',
      'field_content_location_abbr',
      'field_vimeo_download_url',
      'field_office',
      'field_fax',
      'field_lede',
      'field_description',
      'field_map',
      'field_research_publications',
      'field_policies',
      'field_collections_related_info',
      'field_acknowledgements',
      'field_loan_info',
      'field_people_additional',
      'field_fieldwork_collections',
      'field_intro',
      'field_public_education',
      'field_imagecaption',
      'field_bio_sketch',
      'field_faq_long_question',
      'field_publications',
      'field_introduction',
      'field_project_header',
      'field_explore_tags',
      'field_collections_loans',
      'field_section_front_tags',
      'field_home_tags',
      'field_article_tags',
      'field_research',
      'field_work_experience',
      'field_interests',
      'field_secondary_front_tags',
      'field_accomplishments',
      'field_grants_awards',
      'field_education',
      'field_professional_affiliations',
      'field_database_information',
      'field_people_tab_header',
      'field_additional_information',
      'field_crnews_staff_student',
      'body',
    );

    foreach ($fields as $field) {
      if (isset($row->$field)) {
        try {
          FmnhFileMigration::rewriteMediaTags($row, $field);
        }
        catch (\Exception $e) {
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
}