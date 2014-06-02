<?php

class UserMigration extends DrupalUser7Migration
{

  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
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