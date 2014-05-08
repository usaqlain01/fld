<?php

class ExhibitNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments) {
    $this->setSystemOfRecord(Migration::DESTINATION);
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');
    $this->addFieldMapping('field_exhibit_type', 'field_exhibition_type_tags')->sourceMigration('ExhibitTypeTerm');
    $this->removeFieldMapping('body');
    $this->addFieldMapping(null, 'body');
    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping('body:format', 'field_description:format')->callbacks(array($this, 'mapFormat'));

    $this->addFieldMapping('field_research_area', 'field_research_area_tags');
    $this->addFieldMapping('field_stratigraphy', 'field_stratigraphy_tags');
    $this->addFieldMapping('field_audience', 'field_audience');
    $this->addFieldMapping('field_topic', 'field_topic');
    $this->addFieldMapping('field_science_focus', 'field_science_focus');
    $this->addFieldMapping('field_grade_level', 'field_age_group_tags');

    $this->addFieldMapping('field_image', 'field_branding_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('');
    $this->addFieldMapping('field_image:alt', 'field_branding_image:alt');
    $this->addFieldMapping('field_image:title', 'field_branding_image:title');
    $this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_image:preserve_files')->defaultValue(FALSE);
    $this->addFieldMapping('field_image:destination_dir')->issueGroup('DNM')->description('N/A');
    $this->addFieldMapping('field_image:destination_file')->issueGroup('DNM')->description('N/A');
    $this->addFieldMapping('field_image:file_replace')->issueGroup('DNM')->description('N/A');
    $this->addFieldMapping('field_image:urlencode')->issueGroup('DNM')->description('N/A');
    $this->addFieldMapping('field_image:source_dir')->issueGroup('DNM')->description('N/A');

    $this->addFieldMapping(null, 'field_branding_image:width')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_branding_image:height')->issueGroup('DNM');

    $this->addFieldMapping(null, 'revision')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'log')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'revision_uid')->issueGroup('DNM')->description('Administrative debris');

    $this->addFieldMapping(null, 'field_body_link')->issueGroup('DNM')->description('Would like to drop this.');
    $this->addFieldMapping(null, 'field_body_link:title')->issueGroup('DNM')->description('Would like to drop this.');
    $this->addFieldMapping(null, 'field_body_link:attributes')->issueGroup('DNM')->description('Would like to drop this.');

    $this->addFieldMapping(null, 'field_exhibit_ticketing_url')->issueGroup('DNM')->description('Happens in EventNode migration.');
    $this->addFieldMapping(null, 'field_exhibit_ticketing_url:title')->issueGroup('DNM')->description('Happens in EventNode migration.');
    $this->addFieldMapping(null, 'field_exhibit_ticketing_url:attributes')->issueGroup('DNM')->description('Happens in EventNode migration.');
    $this->addFieldMapping(null, 'field_startdate')->issueGroup('DNM')->description('Happens in EventNode migration.');
    $this->addFieldMapping(null, 'field_enddate')->issueGroup('DNM')->description('Happens in EventNode migration.');

    $this->addFieldMapping(null, 'field_lede')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_lede:format')->issueGroup('Design');

    $this->addFieldMapping(null, 'field_image')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_image:data')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_image:title')->issueGroup('Design');

    $this->addFieldMapping(null, 'field_exhibit_image')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_exhibit_image:display')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_exhibit_image:description')->issueGroup('Design');


  }
}
