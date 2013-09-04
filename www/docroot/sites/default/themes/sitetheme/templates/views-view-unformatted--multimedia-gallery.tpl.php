<?php
// $Id: views-view-unformatted.tpl.php,v 1.6 2008/10/01 20:52:11 merlinofchaos Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$number_of_elemnts_inside_row = 3;
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $group_end = ceil(count($rows) / $number_of_elemnts_inside_row); ?>
<?php for ($i = 0; $i < $group_end; $i++): ?>
  <div class="row row-<?php print ($i + 1); print $i == 0 ? ' row-first' : ''; print $i == ($group_end - 1) ? ' row-last' : ''; ?>">
    <?php $row_start = $i * $number_of_elemnts_inside_row; $row_end = min(($i * $number_of_elemnts_inside_row) + $number_of_elemnts_inside_row, count($rows)); ?>
    <?php for ($j = $row_start; $j < $row_end; $j++): ?>
      <div class="views-row views-row-<?php print ($j + 1); ?> views-row-<?php print $j % 2 ? 'even' : 'odd'; print $j == $row_start ? ' views-row-first' : ''; print $j == ($row_end - 1) ? ' views-row-last' : ''; ?>">
        <?php print $rows[$j]; ?>
      </div>
    <?php endfor; ?>
  </div>
<?php endfor; ?>
