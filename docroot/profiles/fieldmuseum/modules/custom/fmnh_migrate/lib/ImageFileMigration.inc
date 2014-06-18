<?php

class ImageFileMigration extends FmnhFileMigration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);
    $this->addFieldMapping('field_file_image_alt_text');
    $this->addFieldMapping('field_file_image_alt_text:language');
    $this->addFieldMapping('field_file_image_title_text');
    $this->addFieldMapping('field_file_image_title_text:language');
    $this->addFieldMapping('media_title', 'field_imagename');
    $this->addFieldMapping('media_title:language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('media_description', 'field_description');
    $this->addFieldMapping('media_description:format', 'field_description:format');
    $this->addFieldMapping('media_description:language')->issueGroup('DNM')->description('no source');

    $this->addFieldMapping('field_caption', 'field_imagecaption');
    $this->addFieldMapping('field_caption:format', 'field_imagecaption:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addFieldMapping('field_caption:language')->issueGroup('DNM')->description('no source');

    $this->addFieldMapping('field_credit', 'field_imagecredits');
    $this->addFieldMapping('field_credit:language')->defaultValue(NULL);

    $this->addFieldMapping('field_tags')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('field_tags:source_type')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('field_tags:create_term')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('field_tags:ignore_case')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('field_license')->issueGroup('DNM')->description('no source');
    $this->addFieldMapping('urlencode')->issueGroup('DNM')->description('n/a');

    $this->addFieldMapping(null, 'field_imagegalleryref')->issueGroup('DNM')->description('Handled in GalleryImage migration');
    $this->addFieldMapping(null, 'field_imagelink')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_imagefrontref')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_imageactionlinks')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_imageactionlinks:title')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_imageactionlinks:attributes')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_weight')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_restricted_media_flag')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_more_info_link')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_more_info_link:title')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_more_info_link:attributes')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_homepage_image_link')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_homepage_image_link:title')->issueGroup('DNM');
    $this->addFieldMapping(null, 'field_homepage_image_link:attributes')->issueGroup('DNM');
  }

  protected function baseQuery()
  {
    $query = parent::baseQuery();
    $query->condition('f.type', 'image');
    return $query;
  }
}
