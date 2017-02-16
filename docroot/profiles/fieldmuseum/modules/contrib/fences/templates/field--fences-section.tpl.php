<?php
/**
 * @file field--fences-section.tpl.php
 * Wrap each field value in the <section> element.
 *
 * @see http://developers.whatwg.org/sections.html#the-section-element
 */
?>
<?php if ($element['#label_display'] == 'inline'): ?>
  <span class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>:
  </span>
<?php elseif ($element['#label_display'] == 'above'): ?>
  <h3 class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>
  </h3>
<?php endif; ?>

<?php foreach ($items as $delta => $item): ?>
  <!-- Entity's body mapped to schema's description -->
  <section class="<?php print $classes; ?>"<?php print $attributes; ?> property="schema:description content:encoded">
    <?php print render($item); ?>
  </section>
<?php endforeach; ?>
