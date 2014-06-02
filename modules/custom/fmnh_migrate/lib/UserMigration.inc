<?php

class UserMigration extends DrupalUser7Migration
{

  public function __construct(array $arguments)
  {
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

    $this->addFieldMapping('field_department', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');
    $this->addFieldMapping('field_research_area', 'field_research_area_tags')->sourceMigration('ResearchAreasTerm');
    $this->addFieldMapping('field_stratigraphy', 'field_stratigraphy_tags')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_location_region', 'field_location_region')->sourceMigration('LocationRegionTerm');
    $this->addFieldMapping('field_exhibit', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');

    $this->addFieldMapping('field_cvfile', 'field_cvfile')->sourceMigration('DocumentFile');
    $this->addFieldMapping('field_cvfile:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_cvfile:display', 'field_cvfile:display');
    $this->addFieldMapping('field_cvfile:description', 'field_cvfile:description');
    $this->addFieldMapping('field_cvfile:language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_cvfile:preserve_files')->defaultValue(FALSE);

    $this->addFieldMapping('field_image', 'field_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');

    $this->addFieldMapping('field_bio_sketch:format', 'field_bio_sketch:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_bio_sketch:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_executive_staff', 'field_executive_staff');

    $this->addFieldMapping('field_introduction', 'field_introduction');
    $this->addFieldMapping('field_introduction:format', 'field_introduction:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_introduction:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_research', 'field_research');
    $this->addFieldMapping('field_research:format', 'field_research:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_research:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_education', 'field_education');
    $this->addFieldMapping('field_education:format', 'field_education:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_education:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_work_experience', 'field_work_experience');
    $this->addFieldMapping('field_work_experience:format', 'field_work_experience:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_work_experience:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_interests', 'field_interests');
    $this->addFieldMapping('field_interests:format', 'field_interests:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_interests:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_accomplishments', 'field_accomplishments');
    $this->addFieldMapping('field_accomplishments:format', 'field_accomplishments:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_accomplishments:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_grants_awards', 'field_grants_awards');
    $this->addFieldMapping('field_grants_awards:format', 'field_grants_awards:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_grants_awards:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_professional_affiliations', 'field_professional_affiliations');
    $this->addFieldMapping('field_professional_affiliations:format', 'field_professional_affiliations:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_professional_affiliations:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_publications', 'field_publications');
    $this->addFieldMapping('field_publications:format', 'field_publications:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addfieldMapping('field_publications:language')->defaultValue(LANGUAGE_NONE);

    $this->addSimpleMappings(array(
      'field_bio_sketch',
      'field_email',
      'field_fax',
      'field_givenname',
      'field_office',
      'field_position',
      'field_surname',
      'field_year_started',
    ));

    $this->addfieldMapping('field_office:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_fax:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_givenname:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_position:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_year_started:language')->defaultValue(LANGUAGE_NONE);
    $this->addfieldMapping('field_surname:language')->defaultValue(LANGUAGE_NONE);

  }
}