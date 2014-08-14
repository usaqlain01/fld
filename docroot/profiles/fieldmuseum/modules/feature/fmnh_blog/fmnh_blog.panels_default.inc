<?php
/**
 * @file
 * fmnh_blog.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function fmnh_blog_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'filter_menu';
  $mini->category = '';
  $mini->admin_title = 'Filter menu';
  $mini->admin_description = 'Blog filter menu';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style' => 'default',
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6c1fc849-5cae-45a2-8508-dc0cadcb0359';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-70984ff5-49ab-40cf-ab62-78793ccd4263';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<nav class="navFilters"> 
<h6 class="navFilters__heading">
	Shows 
</h6>
<ul class="filters">
	<li class="filters__item"> <a href="/science/blog/the-brain-scoop" class="filters__link">The Brain Scoop</a> </li>
	<li class="filters__item"> <a href="/science/blog/science-at-fmnh" class="filters__link">Science at FMNH</a> </li>
	<li class="filters__item"> <a href="/science/blog/the-field-revealed" class="filters__link">The Field Revealed</a> </li>
</ul>
<h6 class="navFilters__heading">
	Best Of&hellip; 
</h6>
<ul class="filters">
	<li class="filters__item"> <a href="/science/blog/birds" class="filters__link">Birds</a> </li>
	<li class="filters__item"> <a href="/science/blog/dinosaurs" class="filters__link">Dinosaurs</a> </li>
	<li class="filters__item"> <a href="/science/blog/fishes" class="filters__link">Fish</a> </li>
	<li class="filters__item"> <a href="/science/blog/mummies" class="filters__link">Mummies</a> </li>
	<li class="filters__item"> <a href="/science/blog/rocks" class="filters__link">Rocks</a> </li>
</ul>
<h6 class="navFilters__heading">
	Areas of Focus 
</h6>
<ul class="filters">
	<li class="filters__item"> <a href="/science/blog/living-cultures" class="filters__link">Culture</a> </li>
	<li class="filters__item"> <a href="/science/blog/plants" class="filters__link">Plants</a> </li>
	<li class="filters__item"> <a href="/science/blog/animals" class="filters__link">Animals</a> </li>
	<li class="filters__item"> <a href="/science/blog/fossils" class="filters__link">Fossils</a> </li>
	<li class="filters__item"> <a href="/science/blog/meteorites" class="filters__link">Meteorites</a> </li>
</ul>
<h6 class="navFilters__heading">
	Media 
</h6>
<ul class="filters">
	<li class="filters__item"> <a href="/science/blog/gallery" class="filters__link">Slideshows</a> </li>
	<li class="filters__item"> <a href="/science/blog/video" class="filters__link">Videos</a> </li>
	<li class="filters__item"> <a href="/science/blog/podcast" class="filters__link">Podcasts</a> </li>
</ul>
<!---
<h6 class="navFilters__heading">
	Topics 
</h6>
<ul class="filters">
	<li class="filters__item"> <a href="/science/blog/" class="filters__link">Category 1</a> </li>
	<li class="filters__item"> <a href="/science/blog/" class="filters__link">Category 2</a> </li>
	<li class="filters__item"> <a href="/science/blog/" class="filters__link">Category 3</a> </li>
	<li class="filters__item"> <a href="/science/blog/" class="filters__link">Category 4</a> </li>
	<li class="filters__item"> <a href="/science/blog/" class="filters__link">Category 5</a> </li>
</ul>
--->
<a class="link--more" href="/science/blog/list">View All Categories</a>
</nav>',
      'format' => 'unfiltered',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '70984ff5-49ab-40cf-ab62-78793ccd4263';
    $display->content['new-70984ff5-49ab-40cf-ab62-78793ccd4263'] = $pane;
    $display->panels['main'][0] = 'new-70984ff5-49ab-40cf-ab62-78793ccd4263';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-70984ff5-49ab-40cf-ab62-78793ccd4263';
  $mini->display = $display;
  $export['filter_menu'] = $mini;

  return $export;
}
