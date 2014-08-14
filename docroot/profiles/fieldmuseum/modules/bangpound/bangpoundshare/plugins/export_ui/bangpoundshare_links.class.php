<?php

class bangpoundshare_links extends ctools_export_ui {
  function init($plugin) {
    parent::init($plugin);
    ctools_include('context');
  }

  function list_form(&$form, &$form_state) {
    parent::list_form($form, $form_state);

    $options = array('all' => t('- All -'));
    foreach ($this->items as $item) {
      $options[$item->category] = $item->category ? $item->category : t('Miscellaneous');
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

    $category = $item->category ? check_plain($item->category) : t('Miscellaneous');

    $ops = theme('links__ctools_dropbutton', array('links' => $operations, 'attributes' => array('class' => array('links', 'inline'))));

    $this->rows[$item->name] = array(
      'data' => array(
        array('data' => check_plain($item->name), 'class' => array('ctools-export-ui-name')),
        array('data' => check_plain($item->admin_title), 'class' => array('ctools-export-ui-title')),
        array('data' => $category, 'class' => array('ctools-export-ui-category')),
        array('data' => $item->type, 'class' => array('ctools-export-ui-storage')),
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
      array('data' => t('Storage'), 'class' => array('ctools-export-ui-storage')),
      array('data' => t('Operations'), 'class' => array('ctools-export-ui-operations')),
    );
  }

  function edit_form(&$form, &$form_state) {
    // Get the basic edit form
    parent::edit_form($form, $form_state);

    $entity_type_options = array();
    foreach (entity_get_info() as $entity_type => $entity_info) {
      $entity_type_options[$entity_type] = $entity_info['label'];
    }

    $form['entity_type'] = array(
      '#type' => 'select',
      '#title' => t('Entity type'),
      '#options' => $entity_type_options,
      '#default_value' => $form_state['item']->entity_type,
      '#required' => TRUE,
    );

    $form['category'] = array(
      '#type' => 'textfield',
      '#default_value' => $form_state['item']->category,
      '#title' => t('Category'),
      '#description' => t('What category this content should appear in. If left blank the category will be "Miscellaneous".'),
    );
  }

  function edit_form_submit(&$form, &$form_state) {
    parent::edit_form_submit($form, $form_state);
  }

  function edit_form_context(&$form, &$form_state) {
    ctools_include('context-admin');
    ctools_context_admin_includes();
    ctools_add_css('ruleset');

    $form['right'] = array(
      '#prefix' => '<div class="ctools-right-container">',
      '#suffix' => '</div>',
    );

    $form['left'] = array(
      '#prefix' => '<div class="ctools-left-container clearfix">',
      '#suffix' => '</div>',
    );

    // Set this up and we can use CTools' Export UI's built in wizard caching,
    // which already has callbacks for the context cache under this name.
    $module = 'export_ui::' . $this->plugin['name'];
    $name = $this->edit_cache_get_key($form_state['item'], $form_state['form type']);

    ctools_context_add_context_form($module, $form, $form_state, $form['right']['contexts_table'], $form_state['item'], $name);
    ctools_context_add_relationship_form($module, $form, $form_state, $form['right']['relationships_table'], $form_state['item'], $name);
  }

  function edit_form_context_submit(&$form, &$form_state) {
    // Prevent this from going to edit_form_submit();
  }

  function edit_form_criteria(&$form, &$form_state) {
    ctools_include('context');
    ctools_include('context-access-admin');

    $form_state['access'] = $form_state['item']->access;
    $form_state['contexts'] = ctools_context_load_contexts($form_state['item']);

    $form_state['module'] = 'ctools_export_ui';
    $form_state['callback argument'] = $form_state['object']->plugin['name'] . ':' . $form_state['object']->edit_cache_get_key($form_state['item'], $form_state['form type']);
    $form_state['no buttons'] = TRUE;

    $form = ctools_access_admin_form($form, $form_state);
  }

  function edit_form_criteria_submit(&$form, &$form_state) {
    $form_state['item']->access['logic'] = $form_state['values']['logic'];
  }

  function edit_form_content(&$form, &$form_state) {
    $form_state['contexts'] = ctools_context_load_contexts($form_state['item']);
    $form['text'] = array(
      '#type' => 'textfield',
      '#default_value' => $form_state['item']->text,
      '#title' => t('Text'),
    );

    $form['path'] = array(
      '#type' => 'textfield',
      '#title' => t('Path'),
      '#default_value' => $form_state['item']->path,
      '#size' => 255,
    );

    if (!empty($form_state['contexts'])) {
      // Set extended description if both CCK and Token modules are enabled, notifying of unlisted keywords
      if (module_exists('content') && module_exists('token')) {
        $description = t('Context keywords will be substituted in this content. Note that CCK fields may be used as keywords using patterns like <em>%node:field_name-formatted</em>.');
      }
      elseif (!module_exists('token')) {
        $description = t('Context keywords will be substituted in this content. More keywords will be available if you install the Token module, see http://drupal.org/project/token.');
      }
      else {
        $description = t('Context keywords will be substituted in this content.');
      }
    }
    $form['path']['#description'] = $description;

    $form['html'] = array(
      '#type' => 'checkbox',
      '#title' => 'HTML?',
      '#description' => t('Link text is HTML'),
      '#return_value' => 1,
      '#default_value' => $form_state['item']->html,
    );

    $form['attributes'] = array(
      '#type' => 'fieldset',
      '#tree' => TRUE,
      '#title' => 'Attributes',
    );

    $form['attributes']['class'] = array(
      '#type' => 'textfield',
      '#title' => t('Class'),
      '#default_value' => implode(' ', $form_state['item']->attributes['class']),
      '#size' => 255,
    );

    if (!empty($form_state['contexts'])) {

      $form['contexts'] = array(
        '#title' => t('Substitutions'),
        '#type' => 'fieldset',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
      );

      $rows = array();
      foreach ($form_state['contexts'] as $context) {
        foreach (ctools_context_get_converters('%' . check_plain($context->keyword) . ':', $context) as $keyword => $title) {
          $rows[] = array(
            check_plain($keyword),
            t('@identifier: @title', array('@title' => $title, '@identifier' => $context->identifier)),
          );
        }
      }
      $header = array(t('Keyword'), t('Value'));
      $form['contexts']['context'] = array('#markup' => theme('table', array('header' => $header, 'rows' => $rows)));
    }
  }

  function edit_form_content_validate(&$form, &$form_state) {
    if (!empty($form_state['values']['attributes']['class'])) {
      $value = explode(' ', $form_state['values']['attributes']['class']);
    }
    else {
      $value = array();
    }
    form_set_value($form['attributes']['class'], $value, $form_state);
  }
}
