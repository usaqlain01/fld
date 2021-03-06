<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
  <div class="l--main js--stickyParent"><!-- Main Site Panel -->

    <nav class="navMain js--sticky" role="navigation" itemscope itemtype="http://schema.org/SiteNavigationElement" aria-label="Main menu">
      <?php
      // This code snippet is hard to modify. We recommend turning off the
      // "Main menu" on your sub-theme's settings form, deleting this PHP
      // code block, and, instead, using the "Menu block" module.
      // @see https://drupal.org/project/menu_block
      print theme('links__system_main_menu', array(
        'links' => $main_menu,
        'attributes' => array(
          'class' => array('navMain__list'),
        ),
      )); ?>
      <?php print render($page['navigation']); ?>
    </nav>

    <div class="l--content" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print render($page['header']); ?>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>
  </div>

  <?php print render($page['footer']); ?>

<?php print render($page['bottom']); ?>
