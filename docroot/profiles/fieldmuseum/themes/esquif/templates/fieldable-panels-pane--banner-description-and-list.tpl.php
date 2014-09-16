<div class="summary">
  <?php if (isset($field_image)): ?>
    <figure>
      <?php print render($content['field_image']); ?>
    </figure>
  <?php endif; ?>

  <?php print render($title_prefix); ?>
  <h3 class="summary__title">
    <?php if ($url): ?>
    <a href="<?php print $url; ?>">
      <?php endif; ?>
      <?php print $title; ?>
      <?php if ($url): ?>
    </a>
  <?php endif; ?>
  </h3>
  <?php print render($title_suffix); ?>

  <div class="summary__description">
    <?php print render($content['field_banner_description']); ?>
    <?php if (isset($content['links'])): ?>
      <?php print l($content['links']['fieldable_panels_pane']['#links']['fieldable_panels_pane-readmore']['title'], $content['links']['fieldable_panels_pane']['#links']['fieldable_panels_pane-readmore']['href'], $content['links']['fieldable_panels_pane']['#links']['fieldable_panels_pane-readmore']); ?>
    <?php endif; ?>
  </div>

  <?php if (isset($field_link)): ?>
    <ul class="contentLinks">
      <?php print render($content['field_link']); ?>
    </ul>
  <?php endif; ?>
</div>
