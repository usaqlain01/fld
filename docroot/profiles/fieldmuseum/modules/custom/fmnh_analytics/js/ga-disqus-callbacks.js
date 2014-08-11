// - This is an example disqus setup with Disqus config callbacks
//   triggering a custom event and custom dimension.
// - Please note this does not include the required markup that Disqus
//   needs to load: <div id="disqus_thread"></div>

(function (Drupal, Analytics, document, undefined) {

  Drupal.FMNH = {
    onNewComment: function () {
      Analytics.dimension('dimension2', 'true');
      Analytics.event('blog', 'comment', document.title, 1, 1);
    }
  };

})(Drupal, Analytics, this.document);
