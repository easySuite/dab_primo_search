(function ($) {
  'use strict';
  /**
   * Handle the submit of a search block. If the chosen type of search has a
   * redirect URL, redirect the user to it.
   */
  Drupal.behaviors.dab_primo_search_form_submit = {
    attach: function (context, settings) {
      /**
       * Handler function to take care of the redirect. This is used in
       * multiple events.
       */
      var event_handler = function(e) {
        if (e.type === 'keydown' && e.which !== 13) {
          return true;
        }

        var query = $('#dab-primo-search-form input[type="text"]').val(),
            url = 'http://minibib.hosted.exlibrisgroup.com/primo_library/libweb/action/dlSearch.do?vid=DAB&institution=MIN_DAB&tab=default_tab&indx=1&bulkSize=10&srt=date&sortField=sdate&search_scope=DABPR&query=any,contains,' + query + '&query=facet_rtype,exact,betaenkninger';
        if (query == '') {
          return false;
        }
        window.location = url;
        return false;
      };

      $('#dab-primo-search-form input[name="search"]').focus();
      // Add the event handler to some events.
      $('#dab-primo-search-form input[type="submit"]').click(event_handler);
      $('#dab-primo-search-form input[name="search"]').keydown(event_handler);
    }
  };
})(jQuery);
