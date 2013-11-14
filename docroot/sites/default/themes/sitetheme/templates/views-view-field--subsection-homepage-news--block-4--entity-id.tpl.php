<?php
// $Id: views-view-field.tpl.php,v 1.1 2008/05/16 22:22:32 merlinofchaos Exp $
 /**
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, this construct should be used:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */
  $node = $row->_field_data[$field->field_alias];
  $logos = field_get_items($node['entity_type'], $node['entity'], 'field_logo');
?>
<div class="field-name-field-logo field-type-media field-label-hidden">
	<div class="field-items">
<?php foreach ($logos as $logo):
		// entity type for the following line will need to be changed to 'file' after upgrading media module
        $link = reset(field_get_items('media', $logo, 'field_more_info_link'));
        $img = image_style_url('square-thumbnail-with-more-info-link', $logo->uri);
        $img_html = '<img typeof="foaf:Image" src="' . $img . '" alt="" title="" />';
        if ($link):
          $img_html = l($img_html, $link['url'], array('html' => TRUE));
        endif; ?>
		<div class="field-item even">
			<div class="styles styles-field-file styles-style-square-thumbnail-with-more-info-link styles-container-image styles-preset-square-thumbnail-with-more-info-link">
				<?php print $img_html; ?>
			</div>
			<?php if ($link): ?>
			<div class="field-name-field-more-info-link field-type-link-field field-label-hidden">
				<?php print l($link['title'], $link['url'], array('attributes' => $link['attributes'])); ?>
			</div>
			<?php endif; ?>
		</div>
<?php endforeach; ?>
	</div>
</div>
