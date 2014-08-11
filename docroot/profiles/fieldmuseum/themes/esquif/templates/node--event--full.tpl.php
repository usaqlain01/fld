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
    <div>
      <?php print render($title_prefix); ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
      <?php print render($title_suffix); ?>
      <h5 class="article__date">
        <?php
        $items = field_get_items('node', $node, 'field_date');
        foreach ($items as $item) {
          $date = new DateObject($item['value'], $item['timezone'], date_type_format($item['date_type']));
          ?>
        <time<?php print drupal_attributes(rdf_rdfa_attributes($node->rdf_mapping['field_date'])); ?>>
          <?php print $date->format('l, F j, Y'); ?> @ <?php
          if (intval($date->format('i')) > 0) {
            print $date->format('g:ia');
          }
          else {
            print $date->format('ga');
          }
          ?>
        </time>
        <?php
        }
        hide($content['field_date']);
        ?>
      </h5>
    </div>
    <?php print render($content['field_ticket_link']); hide($content['field_price']); ?>
    <?php if ($unpublished): ?>
      <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
    <?php endif; ?>
  </header>
  <?php print render($content['field_image']); ?>
  <section class="article__body"<?php print drupal_attributes(rdf_rdfa_attributes($node->rdf_mapping['body'])); ?>>
    <?php print render($content['field_summary']); ?>
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
