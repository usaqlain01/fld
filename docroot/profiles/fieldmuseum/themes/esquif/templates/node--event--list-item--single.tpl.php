<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<li class="node-<?php print $node->nid; ?> <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php
  $items = field_get_items('node', $node, 'field_date');
  foreach ($items as $item) {
    $date = new DateObject($item['value'], $item['timezone_db'], date_type_format($item['date_type']));
    $date->setTimezone(new DateTimeZone($item['timezone']));
    $base_attributes = array(
      'property' => array('dc:date'),
      'datatype' => 'xsd:dateTime',
      'content' => date_format_date($date, 'custom', 'c'),
    );
    ?>
    <time class="eventsList__time"<?php print drupal_attributes(rdf_rdfa_attributes($node->rdf_mapping['field_date']) + $base_attributes); ?>>
      <?php print $date->format('l, F j'); ?>
    </time>
  <?php } ?>
  <?php hide($content['field_date']); ?>

  <?php print render($title_prefix); ?>
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

  &bull;
  <a class="eventsList__link" href="<?php print $node_url; ?>">Event Details</a>
  <?php if ($field_ticket_link && FALSE): ?>
    &bull;
    <?php $items = field_get_items('node', $node, 'field_ticket_link');
    foreach ($items as $item) {
      ?>
      <a data-analytics="ticketing-event" class="eventsList__link" href="<?php print check_plain(url($item['url'])); ?>"<?php if (isset($node->rdf_mapping['field_ticket_link'])) { print drupal_attributes(rdf_rdfa_attributes($node->rdf_mapping['field_ticket_link'])); } ?>>
        <svg class="icon icon--ticket-2" viewBox="0 0 500 500">
          <use xlink:href="#ticket-2"></use>
        </svg>
        Buy Tickets
      </a>
    <?php
    } ?>
  <?php endif; ?>
  <?php hide($content['field_ticket_link']); ?>
  <?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  print render($content);
  ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</li>
