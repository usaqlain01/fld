<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>

<article class="node-<?php print $node->nid; ?> <?php print $classes; ?>"<?php print $attributes; ?>>
  <figure>
    <a href="<?php print $node_url; ?>">
      <?php print render($content['field_image']); ?>
    </a>
  </figure>
  <section class="collection__details">

    <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h4<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h4>
      <?php endif; ?>
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

    <p class="collection__description"<?php if (isset($node->rdf_mapping['body'])) { print drupal_attributes(rdf_rdfa_attributes($node->rdf_mapping['body'])); } ?>>
      <?php print check_markup(render($content['body']), 'unfiltered_phrase_html', '', TRUE); ?>
    </p>

    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>

    <?php print render($content['links']['node']); ?>

    <?php print render($content['comments']); ?>
  </section>

</article>
