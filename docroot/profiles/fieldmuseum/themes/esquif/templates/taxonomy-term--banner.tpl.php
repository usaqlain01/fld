<a class="<?php print $classes; ?>" <?php print $attributes; ?> href="<?php print $term_url; ?>">
  <figure>
    <?php print render($content['field_banner_image']); ?>
    <figcaption<?php print $content_attributes; ?>>
      <?php print render($content['description']); ?>
    </figcaption>
  </figure>
</a>
