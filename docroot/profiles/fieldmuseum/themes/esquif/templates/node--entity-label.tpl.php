<?php
/**
 * @file
 * Node entity label (title) template
 *
 * @ingroup themeable
 */
?>
<?php print render($title_prefix); ?>
<a href="<?php print $node_url; ?>"<?php print $title_attributes; ?>><?php print $title; ?></a>
<?php print render($title_suffix); ?>
