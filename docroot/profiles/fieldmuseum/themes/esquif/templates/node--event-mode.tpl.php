<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>

<li class="eventsList__item node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?> itemscope itemtype="http://schema.org/Event">
  <time class="eventsList__time" datetime="2013-05-30" itemprop="startDate"><?php print render($content['field_date']); ?></time>
  <section class="eventsList__event">
    <h5 class="scale--6" itemprop="name"><?php print $title; ?></h5>
    <a href="<?php print $node_url; ?>" itemprop="url"><?php print t('Event Details'); ?></a> |
    <?php print render($content['field_action_link']); ?>
  </section>
</li>
