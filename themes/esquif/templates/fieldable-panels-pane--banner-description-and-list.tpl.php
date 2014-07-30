<div class="summary">
  <figure>
    <?php print render($content['field_image']); ?>
  </figure>
  <?php print render($title_prefix); ?>
  <h3 class="summary__title"><a href="<?php print $url; ?>"><?php print $title; ?></a></h3>
  <?php print render($title_suffix); ?>

  <div class="summary__description">
    <?php print render($content['field_banner_description']); ?>
  </div>
  <?php print render($content['field_link']); ?>
</div>
