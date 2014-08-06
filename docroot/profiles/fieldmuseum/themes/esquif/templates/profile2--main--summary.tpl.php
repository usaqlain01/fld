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
<section class="personSummary <?php print $classes; ?> clearfix" <?php print $attributes; ?>>
  <figure class="personSummary__image">
    <a href="<?php print $url; ?>">
      <?php print render($content['field_image']); ?>
    </a>
  </figure>
  <figcaption class="person__details">
    <h3 class="person__name"<?php print $title_attributes; ?>>
      <a itemprop="url" href="<?php print $url; ?>"><?php print $title; ?></a>
    </h3>
    <h6 class="person__title" itemprop="jobTitle">
      <?php print render($content['field_position']); ?>
    </h6>
    <h6 class="person__department">
      <?php print render($content['field_department']); ?>
    </h6>
  </figcaption>
</section>
