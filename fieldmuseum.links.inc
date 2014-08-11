<?php
/**
 * @file
 * fieldmuseum.links.inc
 */

/**
 * Implements hook_default_bangpoundshare_links().
 */
function fieldmuseum_default_bangpoundshare_links() {
  $export = array();

  $link = new bangpoundShareLink();
  $link->disabled = FALSE; /* Edit this to true to make a default link disabled initially */
  $link->api_version = 1;
  $link->name = 'fmnh_facebook';
  $link->admin_title = 'Facebook';
  $link->admin_description = '';
  $link->category = '';
  $link->entity_type = 'node';
  $link->contexts = array();
  $link->relationships = array();
  $link->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_access',
        'settings' => array(
          'type' => 'view',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'requiredcontext_entity:node_1',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_status',
        'settings' => NULL,
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'blog' => 'blog',
            'collection' => 'collection',
            'exhibit' => 'exhibit',
            'media_gallery' => 'media_gallery',
            'page' => 'page',
            'podcast' => 'podcast',
            'program' => 'program',
            'traveling_exhibit' => 'traveling_exhibit',
            'video' => 'video',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'entity_view_mode:node',
        'settings' => array(
          'view_mode' => array(
            'full' => 'full',
          ),
        ),
        'context' => 'requiredcontext_string_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $link->text = '<svg class="icon icon--facebook socialShare__icon" viewBox="0 0 500 500"><use xlink:href="#facebook"></use></svg>';
  $link->path = 'https://www.facebook.com/sharer.php?u=%node:url';
  $link->html = TRUE;
  $link->attributes = array(
    'class' => array(
      0 => 'socialShare__link--facebook',
      1 => 'socialShare__link',
      2 => 'popup',
    ),
  );
  $export['fmnh_facebook'] = $link;

  $link = new bangpoundShareLink();
  $link->disabled = FALSE; /* Edit this to true to make a default link disabled initially */
  $link->api_version = 1;
  $link->name = 'fmnh_google_plus';
  $link->admin_title = 'Google+';
  $link->admin_description = '';
  $link->category = '';
  $link->entity_type = 'node';
  $link->contexts = array();
  $link->relationships = array();
  $link->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_access',
        'settings' => array(
          'type' => 'view',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'requiredcontext_entity:node_1',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_status',
        'settings' => NULL,
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'blog' => 'blog',
            'collection' => 'collection',
            'exhibit' => 'exhibit',
            'media_gallery' => 'media_gallery',
            'page' => 'page',
            'podcast' => 'podcast',
            'program' => 'program',
            'traveling_exhibit' => 'traveling_exhibit',
            'video' => 'video',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'entity_view_mode:node',
        'settings' => array(
          'view_mode' => array(
            'full' => 'full',
          ),
        ),
        'context' => 'requiredcontext_string_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $link->text = '<svg class="icon icon--google-plus socialShare__icon" viewBox="0 0 500 500"><use xlink:href="#google-plus"></use></svg>';
  $link->path = 'https://plus.google.com/share?url=%node:url';
  $link->html = TRUE;
  $link->attributes = array(
    'class' => array(
      0 => 'socialShare__link--googleplus',
      1 => 'socialShare__link',
      2 => 'popup',
    ),
  );
  $export['fmnh_google_plus'] = $link;

  $link = new bangpoundShareLink();
  $link->disabled = FALSE; /* Edit this to true to make a default link disabled initially */
  $link->api_version = 1;
  $link->name = 'fmnh_twitter';
  $link->admin_title = 'Twitter';
  $link->admin_description = '';
  $link->category = '';
  $link->entity_type = 'node';
  $link->contexts = array();
  $link->relationships = array();
  $link->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_access',
        'settings' => array(
          'type' => 'view',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'requiredcontext_entity:node_1',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_status',
        'settings' => NULL,
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'blog' => 'blog',
            'collection' => 'collection',
            'exhibit' => 'exhibit',
            'media_gallery' => 'media_gallery',
            'page' => 'page',
            'podcast' => 'podcast',
            'program' => 'program',
            'traveling_exhibit' => 'traveling_exhibit',
            'video' => 'video',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'entity_view_mode:node',
        'settings' => array(
          'view_mode' => array(
            'full' => 'full',
          ),
        ),
        'context' => 'requiredcontext_string_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $link->text = '<svg class="icon icon--twitter socialShare__icon" viewBox="0 0 500 500"><use xlink:href="#twitter"></use></svg>';
  $link->path = 'http://twitter.com/intent/tweet?text=%node:title&url=%node:url';
  $link->html = TRUE;
  $link->attributes = array(
    'class' => array(
      0 => 'socialShare__link--twitter',
      1 => 'socialShare__link',
      2 => 'popup',
    ),
  );
  $export['fmnh_twitter'] = $link;

  return $export;
}
