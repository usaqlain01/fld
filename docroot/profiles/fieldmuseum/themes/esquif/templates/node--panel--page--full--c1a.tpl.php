<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="article node-<?php print $node->nid; ?> <?php print $classes; ?>"<?php print $attributes; ?>>
  <header class="l--flex--titleButton">
    <?php print render($title_prefix); ?>
    <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php print render($title_suffix); ?>
    <?php print render($content['field_action_link']); ?>
  </header>

  <?php print render($content['field_image']); ?>
  <?php print render($content['field_summary']); ?>
  <section class="article__body"<?php if (isset($node->rdf_mapping['body'])) { print drupal_attributes(rdf_rdfa_attributes($node->rdf_mapping['body'])); } ?>>
    <?php print render($content['body']); ?>
  </section>

  <?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  print render($content);
  ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
