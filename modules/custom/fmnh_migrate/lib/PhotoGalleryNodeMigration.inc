<?php

class PhotoGalleryNodeMigration extends DrupalNode7Migration
{
  public function __construct(array $arguments)
  {
    parent::__construct($arguments);

    $this->addFieldMapping('media_gallery_format')->defaultValue('lightbox');
    $this->addFieldMapping('media_gallery_lightbox_extras')->defaultValue(1);
    $this->addFieldMapping('media_gallery_columns')->defaultValue(4);
    $this->addFieldMapping('media_gallery_rows')->defaultValue(3);
    $this->addFieldMapping('media_gallery_expose_block')->defaultValue(0);
    $this->addFieldMapping('media_gallery_block_columns')->defaultValue(4);
    $this->addFieldMapping('media_gallery_block_rows')->defaultValue(3);
    $this->addFieldMapping('media_gallery_image_info_where')->defaultValue('hover');
  }
}
