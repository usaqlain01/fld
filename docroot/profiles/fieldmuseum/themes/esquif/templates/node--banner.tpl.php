<?php
$split = explode("typeof=", $attributes);
$url_schema = 'itemprop="url"';
$new_attributes = $split[0].''.$url_schema;
?>

<a class="<?php print $classes; ?>" <?php print $new_attributes; ?> href="<?php print $node_url; ?>">
  <figure>
    <?php print render($content['field_banner_image']); ?>
    <figcaption<?php print $content_attributes; ?>>
      <?php print render($content['field_banner_description']); ?>
    </figcaption>
  </figure>
</a>
