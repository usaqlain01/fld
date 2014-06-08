<?php

class ExhibitNodeMigration extends FmnhNodeMigration
{
  public function __construct(array $arguments) {
    $this->setSystemOfRecord(Migration::DESTINATION);
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');
    $this->addFieldMapping('field_exhibit_type', 'field_exhibition_type_tags')->sourceMigration('ExhibitTypeTerm');
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');
    $this->addFieldMapping(null, 'body');
    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping('body:format', 'field_description:format')->callbacks(array($this, 'mapFormat'));

    $this->addFieldMapping('field_date', 'field_startdate');
    $this->addFieldMapping('field_date:to', 'field_enddate');
    $this->addFieldMapping('field_date:timezone')->defaultValue(variable_get('date_default_timezone', @date_default_timezone_get()));
    $this->addFieldMapping('field_date:rrule')->defaultValue(NULL);

    $this->addFieldMapping('field_research_area', 'field_research_area_tags');
    $this->addFieldMapping('field_stratigraphy', 'field_stratigraphy_tags');
    $this->addFieldMapping('field_audience', 'field_audience');
    $this->addFieldMapping('field_topic', 'field_topic');
    $this->addFieldMapping('field_science_focus', 'field_science_focus');
    $this->addFieldMapping('field_grade_level', 'field_age_group_tags');

    $this->addFieldMapping('field_image', 'field_branding_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:alt', 'field_branding_image:alt');
    $this->addFieldMapping('field_image:title', 'field_branding_image:title');
    $this->addFieldMapping('field_image:display')->defaultValue(1);
    $this->addFieldMapping('field_image:description')->issueGroup('DNM')->description('N/A');
    $this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_image:preserve_files')->defaultValue(FALSE);
    $this->addFieldMapping('field_image:destination_dir')->issueGroup('DNM')->description('N/A');
    $this->addFieldMapping('field_image:destination_file')->issueGroup('DNM')->description('N/A');
    $this->addFieldMapping('field_image:file_replace')->issueGroup('DNM')->description('N/A');
    $this->addFieldMapping('field_image:urlencode')->issueGroup('DNM')->description('N/A');
    $this->addFieldMapping('field_image:source_dir')->issueGroup('DNM')->description('N/A');

    $this->addFieldMapping('field_banner_description')->issueGroup('New');
    $this->addFieldMapping('field_banner_description:format')->issueGroup('New');;
    $this->addFieldMapping('field_banner_description:language')->issueGroup('New');;

    $this->addFieldMapping(null, 'field_branding_image:width')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_branding_image:height')->issueGroup('DNM');

    $this->addFieldMapping(null, 'field_body_link')->issueGroup('DNM')->description('Would like to drop this.');
    $this->addFieldMapping(null, 'field_body_link:title')->issueGroup('DNM')->description('Would like to drop this.');
    $this->addFieldMapping(null, 'field_body_link:attributes')->issueGroup('DNM')->description('Would like to drop this.');

    $this->addFieldMapping('field_action_link', 'field_exhibit_ticketing_url');
    $this->addFieldMapping('field_action_link:title', 'field_exhibit_ticketing_url:title');
    $this->addFieldMapping('field_action_link:attributes', 'field_exhibit_ticketing_url:attributes');

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
