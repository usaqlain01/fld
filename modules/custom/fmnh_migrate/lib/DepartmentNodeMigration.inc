<?php

class DepartmentNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments) {
    $this->setSystemOfRecord(Migration::DESTINATION);
    parent::__construct($arguments);
    $this->addFieldMapping('nid', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');

    $this->addFieldMapping(null, 'body')->issueGroup('DNM')->description('Nothing here');

    $this->addFieldMapping('field_image', 'field_dept_div_header_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:alt', 'field_dept_div_header_image:description');
    $this->addFieldMapping('field_image:title')->issueGroup('DNM')->description('No values');
    $this->addFieldMapping(null, 'field_dept_div_header_image:display')->issueGroup('DNM')->description('Not applicable for migrating to image fields');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_image:preserve_files')->defaultValue(FALSE);

    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');

    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');
    $this->removeFieldMapping('body:summary');
    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping('body:summary')->issueGroup('DNM')->description('No values here.');
    $this->addFieldMapping('body:format', 'field_description:format')
      ->callbacks(array($this, 'mapFormat'));

    $this->addFieldMapping('field_person', 'field_profiles')->sourceMigration('User');

    $this->addFieldMapping('field_link', 'field_department_links');
    $this->addFieldMapping('field_link:title', 'field_department_links:title');
    $this->addFieldMapping('field_link:attributes', 'field_department_links:attributes');
    $this->addFieldMapping('field_link:language')->defaultValue(LANGUAGE_NONE);

    $this->addUnmigratedSources(array('field_areas_featured_choice'));
    $this->addFieldMapping(null, 'field_project_header')->issueGroup('DNM')->description('Two values in source. Both are junk.');
    $this->addFieldMapping(null, 'field_project_header:format')->issueGroup('DNM')->description('Two values in source. Both are junk.');
    $this->addFieldMapping(null, 'field_projects')->issueGroup('DNM')->description('Only 4 values linked to 2 source nodes. Could this be done better?');
    $this->addFieldMapping(null, 'field_image')->issueGroup('DNM')->description('Only 4 values.');
    $this->addFieldMapping(null, 'field_image:title')->issueGroup('DNM')->description('Only 4 values.');
    $this->addFieldMapping(null, 'field_image:data')->issueGroup('DNM')->description('Only 4 values.');

    $this->addFieldMapping(null, 'revision')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'log')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'revision_uid')->issueGroup('DNM')->description('Administrative debris');

    $this->addFieldMapping(null, 'field_lede')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_lede:format')->issueGroup('Design');

    $this->addFieldMapping(null, 'field_description_link')->issueGroup('DNM')->description('Would like to drop this.');
    $this->addFieldMapping(null, 'field_description_link:title')->issueGroup('DNM')->description('Would like to drop this.');
    $this->addFieldMapping(null, 'field_description_link:attributes')->issueGroup('DNM')->description('Would like to drop this.');

    $this->addFieldMapping(null, 'field_people_tab_header')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_people_tab_header:format')->issueGroup('Design');
  }
}
