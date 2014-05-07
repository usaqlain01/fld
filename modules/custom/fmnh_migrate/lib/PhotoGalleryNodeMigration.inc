<?php

class PhotoGalleryNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);

    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');
    $this->removeFieldMapping('body:summary');

    $this->addFieldMapping('media_gallery_format')->defaultValue('lightbox');
    $this->addFieldMapping('media_gallery_lightbox_extras')->defaultValue(1);
    $this->addFieldMapping('media_gallery_columns')->defaultValue(4);
    $this->addFieldMapping('media_gallery_rows')->defaultValue(3);
    $this->addFieldMapping('media_gallery_expose_block')->defaultValue(0);
    $this->addFieldMapping('media_gallery_block_columns')->defaultValue(4);
    $this->addFieldMapping('media_gallery_block_rows')->defaultValue(3);
    $this->addFieldMapping('media_gallery_image_info_where')->defaultValue('hover');

    $this->addFieldMapping('media_gallery_description', 'field_description');
    $this->addFieldMapping('media_gallery_description:format', 'field_description:format');

    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_department', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');
    $this->addFieldMapping('field_exhibit', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');

    $this->addFieldMapping(null, 'field_image')->issueGroup('DNM')->description('Gallery thumbs are based on gallery contents.');
    $this->addFieldMapping(null, 'field_image:title')->issueGroup('DNM')->description('Gallery thumbs are based on gallery contents.');
    $this->addFieldMapping(null, 'field_image:data')->issueGroup('DNM')->description('Gallery thumbs are based on gallery contents.');
    $this->addFieldMapping(null, 'field_photo_gallery_image')->issueGroup('DNM')->description('Gallery thumbs are based on gallery contents.');
    $this->addFieldMapping(null, 'field_photo_gallery_image:display')->issueGroup('DNM')->description('Gallery thumbs are based on gallery contents.');
    $this->addFieldMapping(null, 'field_photo_gallery_image:description')->issueGroup('DNM')->description('Gallery thumbs are based on gallery contents.');
    $this->addFieldMapping(null, 'revision')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'log')->issueGroup('DNM')->description('Administrative debris');
    $this->addFieldMapping(null, 'revision_uid')->issueGroup('DNM')->description('Administrative debris');
  }
}
