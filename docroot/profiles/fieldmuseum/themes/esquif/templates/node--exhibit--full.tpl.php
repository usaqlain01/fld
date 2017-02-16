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

    <!-- Node's URL schema mapping-->
    <span rel="schema:url" resource="/node/<?php print $node->nid; ?>" class="rdf-meta element-hidden"></span>

    <!-- Exhibit startDate & endDate schema mapping -->
    <span class="rdf-meta element-hidden">
      <?php if ($content['field_date']): ?>
        <?php print render($content['field_date']); ?>
      <?php endif; ?>
    </span>

    <!-- Exhibit schema mapping for Location -->
    <div property="schema:location" typeof="schema:place" class="rdf-meta element-hidden">
    <?php if ($content['field_exhibit_location_name']): ?>
      <?php print render($content['field_exhibit_location_name']) ?>
    <?php else: ?>
      <span property="schema:name" content="Field Museum" class="rdf-meta element-hidden"></span>
    <?php endif; ?>

    <?php if ($content['field_exhibit_location_address']): ?>
      <?php print render($content['field_exhibit_location_address']) ?>
    <?php else: ?>
      <span property="schema:address" content="Chicago, IL" class="rdf-meta element-hidden"></span>
    <?php endif; ?>
    </div>

    <?php print render($title_prefix); ?>
    <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php if (!$past): ?>
    <?php print render($content['field_ticket_link']); ?>
    <?php endif; ?>
    <?php hide($content['field_ticket_link']); ?>
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
  </header>

  <?php print render($content['field_image']); ?>

  <?php if ($field_action_link || !$permanent): ?>
  <section class="exhibition__meta l--2up">
    <div class="l--module">
      <?php print render($content['field_action_link']); ?>
    </div>
    <div class="l--module">
      <?php if (!$permanent): ?>
        <p class="exhibition__dateRange">
          <?php print render($content['field_date']); ?>
        </p>
      <?php endif; ?>
    </div>
  </section>
  <?php endif; ?>

  <?php if ($ticketed): ?>
    <div class="message message--detail">
      <p>This exhibition requires a special ticket.</p>
    </div>
  <?php endif; ?>

  <?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  hide($content['field_date']);
  print render($content);
  ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
