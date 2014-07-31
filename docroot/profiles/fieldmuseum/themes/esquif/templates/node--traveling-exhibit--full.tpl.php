<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="article node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
  <?php print render($title_suffix); ?>

  <?php print render($content['field_image']); ?>

  <?php if ($display_submitted): ?>
    <p class="submitted">
      <?php print $user_picture; ?>
      <?php print $submitted; ?>
    </p>
  <?php endif; ?>

  <?php if ($unpublished): ?>
    <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
  <?php endif; ?>

  <dl class="info--list">
    <dt>Item Name</dt>
    <dd>Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</dd>
    <dt>Item Name</dt>
    <dd>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.</dd>
    <dt>Item Name</dt>
    <dd>Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</dd>
    <dt>Item Name</dt>
    <dd>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</dd>
  </dl>

  <section class="article__body"<?php print drupal_attributes(rdf_rdfa_attributes($node->rdf_mapping['body'])); ?>>
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
