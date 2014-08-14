<?php

/**
 * @file
 * Default theme implementation to display a term.
 *
 * @ingroup themeable
 */
?>
<?php print render($title_prefix); ?>
<a href="<?php print $term_url; ?>"<?php print $title_attributes; ?>><?php print $term_name; ?></a>
<?php print render($title_suffix); ?>
