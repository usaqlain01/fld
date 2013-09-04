<?php
// $Id: admin.inc,v 1.1.4.12 2010/03/31 16:35:52 katbailey Exp $
/**
 * @file
 * Provides the Quick Tabs' administrative interface.
 */

/**
 * Page callback to list quicktabs in the system.
 */
function quicktabs_list() {
  $result = db_query('SELECT qtid, title FROM {quicktabs} ORDER BY title');
  $header = array(
    array('data' => t('Quicktab')),
    array('data' => t('Operations'), 'colspan' => 3),
  );
  $rows = array();
  foreach ($result as $row) {
    $tablerow = array(
      array('data' => $row->title),
      array('data' => l(t('Edit'), 'admin/structure/quicktabs/manage/' . $row->qtid . '/edit')),
      array('data' => l(t('Clone'), 'admin/structure/quicktabs/manage/' . $row->qtid . '/clone')),
      array('data' => l(t('Delete'), 'admin/structure/quicktabs/manage/' . $row->qtid . '/delete')),
    );
    $rows[] = $tablerow;
  }
  if (!$rows) {
    $rows[] = array(array('data' => t('No quicktabs available.'), 'colspan' => 4));
  }

  $build = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
    '#attributes' => array('id' => 'quicktabs'),
  );
  return $build;
}

/**
 * Clone QuickTabs.
 */
function quicktabs_clone($quicktab) {
  $quicktab->qtid = 0;
  $quicktab->title = '';
  return drupal_get_form('quicktabs_form', 'clone', $quicktab);
}

/**
 * Build the quicktab creation and edit form.
 */
function quicktabs_form($form, $form_state, $formtype, $quicktab = NULL) {
  if (!isset($quicktab)) {
    $quicktab = new stdClass;
  }

  $form = _quicktabs_admin_main_form($form_state, $quicktab);

  if ($formtype == 'edit') {
    $form['qtid'] = array(
      '#type' => 'hidden',
      '#value' => isset($quicktab->qtid) ? $quicktab->qtid : 0,
    );
  }

  if (empty($quicktab->tabs)) {
    $quicktab->tabs = array(
      0 => array(),
      1 => array(),
    );
  }

  $tab_titles = array();
  // Add current tabs to the form.
  foreach ($quicktab->tabs as $delta => $tab) {
    $tab['delta'] = $delta;
    $form['qt_wrapper']['tabs'][$delta] = _quicktabs_form($tab);
    if (isset($tab['title'])) {
      $tab_titles[$delta] = $tab['title'];
    }
  }

  $form['default_tab'] = array(
    '#type' => 'select',
    '#title' => t('Default tab'),
    '#options' => $tab_titles,
    '#default_value' => isset($quicktab->default_tab) ? $quicktab->default_tab : 0,
    '#access' => !empty($tab_titles),
    '#weight' => -5,
  );

  return $form;
}

/**
 * The main section of admin page.
 */
function _quicktabs_admin_main_form($form_state, &$quicktab) {
  $form['#cache'] = TRUE;

  // The contents of $quicktab will either come from the db or from $form_state.
  if (isset($form_state['quicktab'])) {
    $quicktab = $form_state['quicktab'];
  }

  $form['title'] = array(
    '#title' => t('Block title'),
    '#description' => t('This will appear as the name of this block in administer >> site building >> blocks.'),
    '#type' => 'textfield',
    '#default_value' => isset($quicktab->title) ? $quicktab->title : '',
    '#weight' => -10,
  );

  $styles = module_invoke_all('quicktabs_tabstyles');
  $style_options = array();
  // The keys used for options must be valid html id-s.
  foreach ($styles as $style) {
    $style_options[$style] = $style;
  }
  ksort($style_options);
  $form['style'] = array(
    '#type' => 'select',
    '#title' => t('Style'),
    '#options' => array('nostyle' => t('No style')) + array('default' => t('Default style')) + $style_options,
    '#default_value' => isset($quicktab->style) ? $quicktab->style : 'default',
    '#description' => t('Choose the quicktab style.'),
    '#weight' => -8,
  );

  $form['ajax'] = array(
    '#type' => 'radios',
    '#title' => t('Ajax'),
    '#options' => array(
      TRUE => t('Yes') . ': ' . t('Load only the first tab on page view'),
      FALSE => t('No') . ': ' . t('Load all tabs on page view.'),
    ),
    '#default_value' => isset($quicktab->ajax) ? $quicktab->ajax : 0,
    '#description' => t('Choose how the content of tabs should be loaded.<p>By choosing "Yes", only the first tab will be loaded when the page first viewed. Content for other tabs will be loaded only when the user clicks the other tab. This will provide faster initial page loading, but subsequent tab clicks will be slower. This can place less load on a server.</p><p>By choosing "No", all tabs will be loaded when the page is first viewed. This will provide slower initial page loading, and more server load, but subsequent tab clicks will be faster for the user. Use with care if you have heavy views.</p>'),
    '#weight' => -6,
  );

  $form['hide_empty_tabs'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide empty tabs'),
    '#default_value' => isset($quicktab->hide_empty_tabs) ? $quicktab->hide_empty_tabs : 0,
    '#description' => t('Empty and restricted tabs will not be displayed. Could be useful when the tab content is not accessible.<br />This option does not work in ajax mode.'),
    '#weight' => -4,
  );

  // Add a wrapper for the tabs and Add Another Tab button.
  $form['qt_wrapper'] = array(
    '#tree' => FALSE,
    '#weight' => -3,
    '#prefix' => '<div class="clear-block" id="quicktabs-tabs-wrapper">',
    '#suffix' => '</div>',
  );

  $form['qt_wrapper']['tabs'] = array(
    '#tree' => TRUE,
    '#prefix' => '<div id="quicktab-tabs">',
    '#suffix' => '</div>',
    '#theme' => 'quicktabs_admin_form_tabs',
  );

  $form['qt_wrapper']['tabs_more'] = array(
    '#type' => 'submit',
    '#prefix' => '<div id="add-more-tabs-button">',
    '#suffix' => '<label for="edit-tabs-more">' . t('Add tab') . '</label></div>',
    '#value' => t('More tabs'),
    '#attributes' => array('class' => array('add-tab'), 'title' => t('Click here to add more tabs.')),
    '#weight' => 1,
    '#submit' => array('quicktabs_more_tabs_submit'),
    '#ajax' => array(
      'callback' => 'quicktabs_ajax',
      'wrapper' => 'quicktab-tabs',
      'effect' => 'fade',
    ),
  );

  $form['submit_form'] = array(
    '#type' => 'submit',
    '#weight' => 10,
    '#value' => t('Save'),
  );

  return $form;
}

/*
 * Build one row (one tabpage) on the QT admin form.
 */
function _quicktabs_form(array $tab) {
  $form['#tree'] = TRUE;
  $delta = $tab['delta'];

  $form['weight'] = array(
    '#type' => 'weight',
    '#default_value' => isset($tab['weight']) ? $tab['weight'] : $delta-100,
    '#delta' => 100,
  );

  $form['title'] = array(
    '#type' => 'textfield',
    '#size' => '10',
    '#default_value' => isset($tab['title']) ? $tab['title'] : '',
  );

  if (module_exists('block')) {
    $tabtypes['block'] = t('Block');
    $form['block']['bid'] = array(
      '#type' => 'select',
      '#options' => quicktabs_get_blocks(),
      '#default_value' => isset($tab['bid']) ? $tab['bid'] : '',
      '#title' => t('Select a block'),
    );
    $form['block']['hide_title'] = array(
      '#type' => 'checkbox',
      '#title' => t('Hide the title of this block'),
      '#default_value' => isset($tab['hide_title']) ? $tab['hide_title'] : 1,
    );
  }

  $tabtypes['node'] = t('Node');
  $form['node']['nid'] = array(
    '#type' => 'textfield',
    '#title' => t('Node'),
    '#description' => t('The node ID of the node.'),
    '#maxlength' => 10,
    '#size' => 20,
    '#default_value' => isset($tab['nid']) ? $tab['nid'] : '',
  );
  $form['node']['teaser'] = array(
    '#type' => 'checkbox',
    '#title' => t('Teaser view'),
    '#default_value' => isset($tab['teaser']) ? $tab['teaser'] : 0,
  );
  $form['node']['hide_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide the title of this node'),
    '#default_value' => isset($tab['hide_title']) ? $tab['hide_title'] : 1,
  );

  $tabtypes['qtabs'] = t('QTab');
  $form['qtabs']['qtid'] = array(
    '#type' => 'textfield',
    '#title' => t('Quicktab'),
    '#description' => t('The quicktab ID.') . ' ' . t('Different styles may not work when putting an ajax quicktab inside ajax quicktab.'),
    '#maxlength' => 10,
    '#size' => 20,
    '#default_value' => isset($tab['qtid']) ? $tab['qtid'] : '',
  );

  $form['type'] = array(
    '#type' => 'radios',
    '#options' => $tabtypes,
    '#default_value' => isset($tab['type']) ? $tab['type'] : key($tabtypes),
  );

  $form['remove'] = array(
    '#type' => 'submit',
    '#prefix' => '<div>',
    '#suffix' => '<label for="edit-remove">' . t('Delete') . '</label></div>',
    '#value' => 'remove_' . $delta,
    '#attributes' => array('class' => array('delete-tab'), 'title' => t('Click here to delete this tab.')),
    '#submit' => array('quicktabs_remove_tab_submit'),
    '#ajax' => array(
      'callback' => 'quicktabs_ajax',
      'wrapper' => 'quicktab-tabs',
      'method' => 'replace',
      'effect' => 'fade',
    ),
  );

  return $form;
}

/**
 * Theme function for quicktabs admin page.
 * Theme the form elements for the tabs as draggable table rows.
 *
 * @ingroup themeable
 */
function theme_quicktabs_admin_form_tabs($variables) {
  $tabs = $variables['tabs'];

  drupal_add_tabledrag('qt-tablist-table', 'order', 'sibling', 'qt-tabs-weight');
  $rows = array();
  $header = array(
    t('Tab title'),
    t('Tab weight'),
    t('Tab type'),
    t('Tab content'),
    t('Operations'),
  );

  foreach (element_children($tabs) as $key) {
    $tab = &$tabs[$key];
    $tab['weight']['#attributes']['class'] = array('qt-tabs-weight');
    // Build the table row.
    $row = array(
      'data' => array(
        array('data' => drupal_render($tab['title']), 'class' => array('qt-tab-title')),
        array('data' => drupal_render($tab['weight']), 'class' => array('qt-tab-weight')),
        array('data' => drupal_render($tab['type']), 'class' => array('qt-tab-type')),
        // tab content (only 1 tab content (block, node or view) will be displayed. see: quicktabs_form.js)
        array('data' => (module_exists('block') ? drupal_render($tab['block']) : ''), 'class' => array('qt-tab-content', 'qt-tab-block-content')),
        array('data' => (module_exists('views') ? drupal_render($tab['view']) : ''), 'class' => array('qt-tab-content', 'qt-tab-view-content')),
        array('data' => drupal_render($tab['node']), 'class' => array('qt-tab-content', 'qt-tab-node-content')),
        array('data' => drupal_render($tab['qtabs']), 'class' => array('qt-tab-content', 'qt-tab-qtabs-content')),
        array('data' => drupal_render($tab['remove']), 'class' => array('qt-tab-remove')),
      ),
      'class' => array('draggable'),
    );

    // Add additional attributes to the row, such as a class for this row.
    if (isset($tab['#attributes'])) {
      $row = array_merge($row, $tab['#attributes']);
    }
    $rows[] = $row;
  }

  $build['quicktab'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
    '#attributes' => array('id' => 'qt-tablist-table'),
    '#weight' => -1,
  );
  $build['#attached']['css'][] = drupal_get_path('module', 'quicktabs') . '/css/quicktabs-admin.css';
  $build['#attached']['js'][] = drupal_get_path('module', 'quicktabs') . '/js/quicktabs_form.js';

  $output = drupal_render($build);
  return $output;
}

/**
 * ajax callback.
 */
function quicktabs_ajax($form, $form_state) {
  $form_tabs = $form['qt_wrapper']['tabs'];
  $output = drupal_render($form_tabs);
  return $output;
}

/**
 * Submit handler for the "Add Tab" button.
 */
function quicktabs_more_tabs_submit($form, &$form_state) {
  $quicktab = _quicktabs_convert_form_to_quicktab($form_state);
  // Add an empty tab at the end.
  $quicktab->tabs[] = array();

  $form_state['quicktab'] = $quicktab;
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for the "Remove Tab" button.
 */
function quicktabs_remove_tab_submit($form, &$form_state) {
  // Get the tab delta for the clicked button.
  $delta = $form_state['clicked_button']['#parents'][1];
  // Copy the form_state because unset() does not work on variable
  // that is passed by reference.
  $form_state_copy = $form_state;
  unset($form_state_copy['values']['tabs'][$delta]);
  $quicktab = _quicktabs_convert_form_to_quicktab($form_state_copy);

  unset($form_state['submit_handlers']);
  form_execute_handlers('submit', $form, $form_state);
  $form_state['quicktab'] = $quicktab;
  $form_state['rebuild'] = TRUE;
}

/**
 * Validation handler for quicktabs admin page.
 */
function quicktabs_form_validate($form, &$form_state) {
  // We don't want it to validate when we're just adding or removing tabs.
  if ($form_state['clicked_button']['#id'] == 'edit-submit-form') {
    if (empty($form_state['values']['title'])) {
      form_set_error('title', t('Title is required for the quicktab block.'));
    }
    else {
      if (!isset($form_state['values']['tabs'])) {
        form_set_error('', t('At least one tab should be created.'));
      }
      foreach ($form_state['values']['tabs'] as $j => $tab) {
        if (empty($tab['title'])) {
          form_set_error('tabs][' . $j . '][title', t('Title is required for each tab.'));
        }
        elseif ($tab['type'] == 'qtabs' && isset($form_state['values']['qtid']) && $tab['qtabs']['qtid'] == $form_state['values']['qtid']) {
          form_set_error('tabs][' . $j . '][qtabs][qtid', t('You cannot put a quicktab inside itself.'));
        }
        elseif ($tab['type'] == 'view') {
          // Remove spaces from view arguments.
          $form_state['values']['tabs'][$j]['view']['args'] = str_replace(' ', '', $form_state['values']['tabs'][$j]['view']['args']);
        }
      }
    }
  }
}

/**
 * Submit handler for quicktabs admin page.
 */
function quicktabs_form_submit($form, &$form_state) {
  // We don't want it to submit when we're just adding or removing tabs.
  if ($form_state['clicked_button']['#id'] == 'edit-submit-form') {
    $quicktab = _quicktabs_convert_form_to_quicktab($form_state);

    if ($quicktab->qtid > 0) {
      $ret = drupal_write_record('quicktabs', $quicktab, 'qtid');
      if ($ret == SAVED_UPDATED) {
        drupal_set_message(t('The quicktab block has been updated.'));
      }
    }
    else {
      $ret = drupal_write_record('quicktabs', $quicktab);
      if ($ret == SAVED_NEW) {
        drupal_set_message(t('The quicktab block has been created.'));
      }
    }
    drupal_goto('admin/structure/quicktabs');
  }
}

/**
 * Deletion of quicktab block.
 */
function quicktabs_block_delete($form, $form_state, $quicktab) {
  $form['qtid'] = array('#type' => 'hidden', '#value' => $quicktab->qtid);
  $form['qt_name'] = array('#type' => 'hidden', '#value' => $quicktab->title);
  return confirm_form($form, t('Are you sure you want to delete the quicktab block %name?', array('%name' => $quicktab->title)), 'admin/structure/quicktabs', '', t('Delete'), t('Cancel'));
}

/**
 * Submit handler for quicktab block deletion.
 */
function quicktabs_block_delete_submit($form, &$form_state) {
  db_query('DELETE FROM {quicktabs} WHERE qtid = :qtid', array(':qtid' => $form_state['values']['qtid']));
  drupal_set_message(t('The quicktab block %name has been removed.', array('%name' => $form_state['values']['qt_name'])));
  cache_clear_all();
  $form_state['redirect'] = 'admin/structure/quicktabs';
};

/**
 * Helper function to get all blocks.
 */
function quicktabs_get_blocks() {
  static $blocksarray;
  if (empty($blocksarray)) {
    $blocks = _block_rehash();
    $blocksarray = array();
    foreach ($blocks as $block) {
      if ($block['module'] != 'quicktabs') {
        $key = $block['module'] . '_delta_' . $block['delta'];
        $blocksarray[$key] = $block['info'] . ' (' . $block['module'] . ':' . $block['delta'] . ')';
      }
    }
  }
  return $blocksarray;
}

/**
 * Helper function to convert the data on admin form into quicktab presentation.
 */
function _quicktabs_convert_form_to_quicktab($form_state) {
  $formvalues_tabs = array();
  if (!empty($form_state['values']['tabs'])) {
    foreach ($form_state['values']['tabs'] as $j => $tab) {
      $formvalues_tabs[$j] = $tab[$tab['type']];
      $formvalues_tabs[$j]['title'] = $tab['title'];
      $formvalues_tabs[$j]['weight'] = $tab['weight'];
      $formvalues_tabs[$j]['type'] = $tab['type'];
      $weight[$j] = $tab['weight'];
    }
    array_multisort($weight, SORT_ASC, $formvalues_tabs);
  }
  $quicktab = new stdClass();
  $quicktab->title = $form_state['values']['title'];
  $quicktab->ajax = $form_state['values']['ajax'];
  $quicktab->default_tab = isset($form_state['values']['default_tab']) ? $form_state['values']['default_tab'] : 0;
  $quicktab->hide_empty_tabs = $form_state['values']['hide_empty_tabs'];
  $quicktab->style = $form_state['values']['style'];
  $quicktab->tabs = $formvalues_tabs;

  if (isset($form_state['values']['qtid'])) {
    $quicktab->qtid = $form_state['values']['qtid'];
  }
  else {
    $quicktab->qtid = 0;
  }
  return $quicktab;
}
