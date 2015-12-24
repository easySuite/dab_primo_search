<?php
/**
 * @file
 * dab_primo_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dab_primo_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
