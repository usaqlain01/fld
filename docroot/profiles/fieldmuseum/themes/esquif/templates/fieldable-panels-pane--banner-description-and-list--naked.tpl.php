<?php if ($content['field_image']): ?>
<figure>
  <?php print render($content['field_image']); ?>
</figure>
<?php endif; ?>
<hr class="rule--tight" />
<?php print render($title_prefix); ?>
<h4 class="scale--5"><a href="<?php print $url; ?>"><?php print $title; ?></a></h4>
<?php print render($title_suffix); ?>

<div class="summary__description">
  <?php print render($content['field_banner_description']); ?>
</div>
<?php print render($content['field_link']); ?>
