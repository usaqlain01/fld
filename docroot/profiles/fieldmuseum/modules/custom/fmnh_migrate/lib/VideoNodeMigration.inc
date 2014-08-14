<?php

class VideoNodeMigration extends FmnhNodeMigration
{
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // This prevents warnings for mapping the body fields again below.
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:format');

    $this->addFieldMapping('body', 'field_description');
    $this->addFieldMapping('body:format', 'field_description:format')
      ->callbacks(array($this, 'mapFormat'));

    $this->addFieldMapping('field_topic', 'field_topic')->sourceMigration('TopicTerm');
    $this->addFieldMapping('field_research_area', 'field_research_area_tags')->sourceMigration('ResearchAreasTerm');
    $this->addFieldMapping('field_science_focus', 'field_science_focus')->sourceMigration('ScienceFocusTerm');
    $this->addFieldMapping('field_audience', 'field_audience')->sourceMigration('AudienceTerm');

    $this->addFieldMapping('field_video', 'field_vimeo_video_url');
    $this->addFieldMapping('field_video:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_video:description', 'field_vimeo_video_url:title');
    $this->addFieldMapping('field_video:language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_video:preserve_files')->defaultValue(FALSE);
    $this->addFieldMapping('field_video:display')->defaultValue(1);

    $this->addFieldMapping('field_department', 'field_dept_division_tags')->sourceMigration('DepartmentTerm');
    $this->addFieldMapping('field_exhibit', 'field_exhibition_tags')->sourceMigration('ExhibitTerm');

    $this->addFieldMapping(null, 'body')->issueGroup('DNM')->description('No body field');
    $this->addFieldMapping(null, 'field_vimeo_download_url')->issueGroup('DNM')->description('Cannot support this field in oEmbed. It also was not visible in UI.');
    $this->addFieldMapping(null, 'field_image')->issueGroup('DNM')->description('There are no images displayed on the node. Few values.');
    $this->addFieldMapping(null, 'field_image:title')->issueGroup('DNM')->description('There are no images displayed on the node.');
    $this->addFieldMapping(null, 'field_image:data')->issueGroup('DNM')->description('There are no images displayed on the node.');
    $this->addFieldMapping(null, 'field_vimeo_video_url:attributes')->issueGroup('DNM')->description('No values [all empty arrays] in this column.');
    $this->addFieldMapping(null, 'field_video_thumbnail_image')->issueGroup('DNM')->description('Thumbnails dervied from oEmbed');
    $this->addFieldMapping(null, 'field_video_thumbnail_image:display')->issueGroup('DNM')->description('Thumbnails dervied from oEmbed');
    $this->addFieldMapping(null, 'field_video_thumbnail_image:description')->issueGroup('DNM')->description('Thumbnails dervied from oEmbed');
    $this->addFieldMapping(null, 'field_video_thumbnail_image')->issueGroup('DNM')->description('Thumbnails dervied from oEmbed');

    $this->addFieldMapping(null, 'field_lede')->issueGroup('Design');

    $this->addFieldMapping(null, 'field_section_tags')->issueGroup('DNM')->description('Seek to abandon');
    $this->addFieldMapping(null, 'field_subsections')->issueGroup('DNM')->description('Seek to abandon');
  }

  public function prepareRow($row)
  {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    /** @TODO when the incoming URL value points ot a nonexitent resource, Migrate handles
     * badly and sets up a new file entity with a "file" type, which is invalid. */
    if (!empty($row->field_vimeo_video_url)) {
      foreach ($row->field_vimeo_video_url as &$value) {
        if (oembed_get_data($value)) {
          $file = oembed_url_to_file($value, TRUE);
          $value = $file->fid;
        }
        else{
          return FALSE;
        }
      }
    }
    return TRUE;
  }
}
