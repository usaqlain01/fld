<?php

/**
 * @file
 * Default theme implementation for profiles.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) profile type label.
 * - $url: The URL to view the current profile.
 * - $page: TRUE if this is the main view page $url points too.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-profile
 *   - profile-{TYPE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<article class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <figure class="bio__figure">
    <?php print render($content['field_image']); ?>
    <figcaption>
      <?php print render($content['field_email']); ?>
    </figcaption>
  </figure>

  <h1 class="bio__name" itemprop="name"><?php print $title; ?></h1>
  <h3 class="bio__title" itemprop="jobTitle"><?php print render($content['field_position']); ?></h3>
  <h5 class="bio__department"><?php print render($content['field_department']); ?></h5>

  <dl class="bio__meta">
    <?php print render($content['field_research_area']); ?>
  </dl>

  <section class="bio__description" itemprop="description">
    <?php print render($content['field_introduction']); ?>

    <?php print render($content['field_bio_sketch']); ?>
  </section>

  <h2 class="heading--stroked">Recent Blog Posts</h2>
  <?php print render($content['blogs_entity_view_2']); ?>

  <h2 class="heading--stroked">Additional Information</h2>
  <div class="l--2up l--vertical">
    <?php print render($content['field_education']); ?>
    <?php print render($content['field_interests']); ?>
    <?php print render($content['field_grants_awards']); ?>
    <?php print render($content['field_publications']); ?>
    <?php print render($content['field_work_experience']); ?>
    <?php print render($content['field_accomplishments']); ?>
    <?php print render($content['field_professional_affiliations']); ?>
  </div>
  <?php
  print render($content);
  ?>
</article>
