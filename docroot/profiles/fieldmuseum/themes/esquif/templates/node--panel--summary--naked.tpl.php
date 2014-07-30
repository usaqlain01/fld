<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<figure>
  <?php print render($content['field_image']); ?>
</figure>
<?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
  <?php print render($title_prefix); ?>
  <h3<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <p class="submitted">
      <?php print $user_picture; ?>
      <?php print $submitted; ?>
    </p>
  <?php endif; ?>

  <?php if ($unpublished): ?>
    <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
  <?php endif; ?>
<?php endif; ?>
<div class="summary__description">
  <?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  print render($content);
  ?>

  <?php print render($content['comments']); ?>
</div>
