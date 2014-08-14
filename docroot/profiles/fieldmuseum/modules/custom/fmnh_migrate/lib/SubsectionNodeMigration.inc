<?php

class SubsectionNodeMigration extends FmnhNodeMigration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_image', 'field_subsection_homepage_image')->sourceMigration('ImageFile');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:display', 'field_subsection_homepage_image:display');
    $this->addFieldMapping('field_image:description', 'field_subsection_homepage_image:description');

    $this->addFieldMapping('field_department', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');

    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');
    $this->removeFieldMapping('body:summary');
    $this->addFieldMapping(null, 'body');
    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping('body:format', 'field_description:format')->callbacks(array($this, 'mapFormat'));

    $this->addFieldMapping('field_link', 'field_link');
    $this->addFieldMapping('field_link:title', 'field_link:title');
    $this->addFieldMapping('field_link:attributes', 'field_link:attributes');

    $this->addFieldMapping(null, 'field_lede')->issueGroup('Design');
    $this->addFieldMapping(null, 'field_lede:format')->issueGroup('Design');
  }
}
