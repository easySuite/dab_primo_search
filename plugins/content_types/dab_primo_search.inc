<?php
/**
 * @file
 * Define ctools plugin.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('DAB Primo Search'),
  'descriprion' => t('Displays a DAB search form.'),
  'content_types' => array('dab_primo_search'),
  'render callback' => 'dab_primo_search_block',
  'category' => t('Widgets'),
);

/**
 * Render DAB primo search block.
 */
function dab_primo_search_block() {
  // Build the content type block.
  $block = new stdClass();
  $block->delta = 'form';
  $block->title = 'DAB Primo Search';
  $block->content = drupal_get_form('dab_primo_search_form');

  return $block;
}

/**
 * Render DAB primo search form.
 */
function dab_primo_search_form($form, $form_state) {
  $form['search'] = array(
    '#type' => 'textfield',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
  );
  $path = drupal_get_path('module', 'dab_primo_search');
  $form['#attached']['js'] = array(
    $path . '/js/dab_primo_search.js',
  );
  $form['#attached']['css'] = array(
    $path . '/css/dab_primo_search.css',
  );
  return $form;
}
