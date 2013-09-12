# Sets of 3 commands on tables below, 2 of which search and replace for the acquia domain.
# The 3rd, replaces www.fieldmuseum.org with archive.fieldmuseum.org
UPDATE `field_data_body` SET `body_value` = replace(`body_value`,"http://fldmuse.prod.acquia-sites.com","");
UPDATE `field_data_body` SET `body_value` = replace(`body_value`,"fldmuse.prod.acquia-sites.com","");
UPDATE `field_data_body` SET `body_value` = replace(`body_value`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");
UPDATE `field_data_field_description` SET `field_description_value` = replace(`field_description_value`,"http://fldmuse.prod.acquia-sites.com","");
UPDATE `field_data_field_description` SET `field_description_value` = replace(`field_description_value`,"fldmuse.prod.acquia-sites.com","");
UPDATE `field_data_field_description` SET `field_description_value` = replace(`field_description_value`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");
UPDATE `field_data_field_introduction` SET `field_introduction_value` = replace(`field_introduction_value`,"http://fldmuse.prod.acquia-sites.com","");
UPDATE `field_data_field_introduction` SET `field_introduction_value` = replace(`field_introduction_value`,"fldmuse.prod.acquia-sites.com","");
UPDATE `field_data_field_introduction` SET `field_introduction_value` = replace(`field_introduction_value`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");
UPDATE `field_data_field_bio_sketch` SET `field_bio_sketch_value` = replace(`field_bio_sketch_value`,"http://fldmuse.prod.acquia-sites.com","");
UPDATE `field_data_field_bio_sketch` SET `field_bio_sketch_value` = replace(`field_bio_sketch_value`,"fldmuse.prod.acquia-sites.com","");
UPDATE `field_data_field_bio_sketch` SET `field_bio_sketch_value` = replace(`field_bio_sketch_value`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");
UPDATE `field_data_field_link` SET `field_link_url` = replace(`field_link_url`,"http://fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_link` SET `field_link_url` = replace(`field_link_url`,"fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_link` SET `field_link_url` = replace(`field_link_url`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");
UPDATE `field_data_field_department_links` SET `field_department_links_url` = replace(`field_department_links_url`,"http://fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_department_links` SET `field_department_links_url` = replace(`field_department_links_url`,"fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_department_links` SET `field_department_links_url` = replace(`field_department_links_url`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");
UPDATE `field_data_field_body_link` SET `field_body_link_url` = replace(`field_body_link_url`,"http://fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_body_link` SET `field_body_link_url` = replace(`field_body_link_url`,"fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_body_link` SET `field_body_link_url` = replace(`field_body_link_url`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");
UPDATE `field_data_field_description_link` SET `field_description_link_url` = replace(`field_description_link_url`,"http://fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_description_link` SET `field_description_link_url` = replace(`field_description_link_url`,"fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_description_link` SET `field_description_link_url` = replace(`field_description_link_url`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");
UPDATE `field_data_field_homepage_image_link` SET `field_homepage_image_link_url` = replace(`field_homepage_image_link_url`,"http://fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_homepage_image_link` SET `field_homepage_image_link_url` = replace(`field_homepage_image_link_url`,"fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_homepage_image_link` SET `field_homepage_image_link_url` = replace(`field_homepage_image_link_url`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");
UPDATE `field_data_field_imageactionlinks` SET `field_imageactionlinks_url` = replace(`field_imageactionlinks_url`,"http://fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_imageactionlinks` SET `field_imageactionlinks_url` = replace(`field_imageactionlinks_url`,"fldmuse.prod.acquia-sites.com/","");
UPDATE `field_data_field_imageactionlinks` SET `field_imageactionlinks_url` = replace(`field_imageactionlinks_url`,"http://www.fieldmuseum.org","http://archive.fieldmuseum.org");