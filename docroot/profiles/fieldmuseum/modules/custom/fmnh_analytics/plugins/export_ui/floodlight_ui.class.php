<?php

class floodlight_ui extends ctools_export_ui {

  function edit_form(&$form, &$form_state) {
    parent::edit_form($form, $form_state);

    $form['category'] = array(
      '#type' => 'textfield',
      '#title' => t('Category'),
      '#description' => t('What category this content should appear in. If left blank the category will be "Miscellaneous".'),
      '#default_value' => $form_state['item']->category,
    );
    $form['pages'] = array(
      '#type' => 'textarea',
      '#title' => t('Pages'),
      '#default_value' => $form_state['item']->pages,
      '#description' => t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
    );
    $form['tag'] = array(
      '#type' => 'textarea',
      '#title' => t('Tag'),
      '#default_value' => $form_state['item']->tag,
    );
  }

  function list_form(&$form, &$form_state) {
    parent::list_form($form, $form_state);

    $options = array('all' => t('- All -'));
    foreach ($this->items as $item) {
      $options[$item->category] = $item->category;
    }

    $form['top row']['category'] = array(
      '#type' => 'select',
      '#title' => t('Category'),
      '#options' => $options,
      '#default_value' => 'all',
      '#weight' => -10,
    );
  }

  function list_filter($form_state, $item) {
    if ($form_state['values']['category'] != 'all' && $form_state['values']['category'] != $item->category) {
      return TRUE;
    }

    return parent::list_filter($form_state, $item);
  }

  function list_search_fields() {
    $fields = parent::list_search_fields();
    $fields[] = 'tag';
    $fields[] = 'pages';
    return $fields;
  }

  function list_sort_options() {
    return array(
      'disabled' => t('Enabled, title'),
      'title' => t('Title'),
      'name' => t('Name'),
      'category' => t('Category'),
      'storage' => t('Storage'),
    );
  }

  function list_build_row($item, &$form_state, $operations) {
    // Set up sorting
    switch ($form_state['values']['order']) {
      case 'disabled':
        $this->sorts[$item->name] = empty($item->disabled) . $item->admin_title;
        break;
      case 'title':
        $this->sorts[$item->name] = $item->admin_title;
        break;
      case 'name':
        $this->sorts[$item->name] = $item->name;
        break;
      case 'category':
        $this->sorts[$item->name] = $item->category;
        break;
      case 'storage':
        $this->sorts[$item->name] = $item->type . $item->admin_title;
        break;
    }

    $ops = theme('links__ctools_dropbutton', array('links' => $operations, 'attributes' => array('class' => array('links', 'inline'))));

    $this->rows[$item->name] = array(
      'data' => array(
        array('data' => check_plain($item->name), 'class' => array('ctools-export-ui-name')),
        array('data' => check_plain($item->admin_title), 'class' => array('ctools-export-ui-title')),
        array('data' => check_plain($item->category), 'class' => array('ctools-export-ui-category')),
        array('data' => check_plain($item->pages)),
        array('data' => $ops, 'class' => array('ctools-export-ui-operations')),
      ),
      'title' => check_plain($item->admin_description),
      'class' => array(!empty($item->disabled) ? 'ctools-export-ui-disabled' : 'ctools-export-ui-enabled'),
    );
  }

  function list_table_header() {
    return array(
      array('data' => t('Name'), 'class' => array('ctools-export-ui-name')),
      array('data' => t('Title'), 'class' => array('ctools-export-ui-title')),
      array('data' => t('Category'), 'class' => array('ctools-export-ui-category')),
      array('data' => t('Pages')),
      array('data' => t('Operations'), 'class' => array('ctools-export-ui-operations')),
    );
  }

  function edit_save_form($form_state) {
    cache_clear_all('fmnh_analytics_floodlight', 'cache');
    parent::edit_save_form($form_state);
  }


  function edit_form_submit(&$form, &$form_state) {
    cache_clear_all('fmnh_analytics_floodlight', 'cache');
    parent::edit_form_submit($form, $form_state);
  }

  function set_item_state($state, $js, $input, $item) {
    cache_clear_all('fmnh_analytics_floodlight', 'cache');
    return parent::set_item_state($state, $js, $input, $item);
  }

  function delete_form_submit(&$form_state) {
    cache_clear_all('fmnh_analytics_floodlight', 'cache');
    parent::edit_save_form($form_state);
  }

  function edit_form_import_submit($form, &$form_state) {
    cache_clear_all('fmnh_analytics_floodlight', 'cache');
    parent::edit_form_import_submit($form, $form_state);
  }
}
