<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="eventSummary node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <figure class="eventSummary__image">
    <?php print render($content['field_image']); ?>
  </figure>
  <?php if ($unpublished): ?>
    <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
  <?php endif; ?>
  <section class="eventSummary__details">
    <?php
      $items = field_get_items('node', $node, 'field_date');
      foreach ($items as $item) {
        $date = new DateObject($item['value'], $item['timezone'], date_type_format($item['date_type']));
        print '<time class="eventSummary__datetime" property="schema:startDate" datatype="xsd:dateTime" content="'. $date->format('c') .'">';
        print '<span class="eventSummary__date">';
        print $date->format('l, F j');
        print '</span> ';
        print ' <span class="eventSummary__time">';
        if (intval($date->format('i')) > 0) {
          print $date->format('g:ia');
        }
        else {
          print $date->format('ga');
        }
        print '</span>';
        print '</time>';
      }
      hide($content['field_date']);
    ?>
    <?php print render($content['field_ticket_link']); hide($content['field_price']); ?>
    <?php print render($title_prefix); ?>
    <?php if (!$page && $title): ?>
      <h3<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?><a href="#" class="link--more">Event Details</a>
  </section>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</article>
