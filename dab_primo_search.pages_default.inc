<?php
/**
 * @file
 * dab_primo_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dab_primo_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'betankninger';
  $page->task = 'page';
  $page->admin_title = 'Betænkninger';
  $page->admin_description = '';
  $page->path = 'betankninger';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_betankninger_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'betankninger';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Betænkninger';
  $display->uuid = '1e1737ef-5482-47f4-ac47-66265c2a7b5e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a3843f75-4cd3-42af-bd9e-5e79575a8edc';
    $pane->panel = 'middle';
    $pane->type = 'dab_primo_search';
    $pane->subtype = 'dab_primo_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3843f75-4cd3-42af-bd9e-5e79575a8edc';
    $display->content['new-a3843f75-4cd3-42af-bd9e-5e79575a8edc'] = $pane;
    $display->panels['middle'][0] = 'new-a3843f75-4cd3-42af-bd9e-5e79575a8edc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['betankninger'] = $page;

  return $pages;

}
