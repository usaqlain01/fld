// - This is an example disqus setup with Disqus config callbacks
//   triggering a custom event and custom dimension.
// - Please note this does not include the required markup that Disqus
//   needs to load: <div id="disqus_thread"></div>

/* * * CONFIGURATION VARIABLES: EDIT BEFORE PASTING INTO YOUR WEBPAGE * * */
var disqus_shortname = 'ABC-123'; // required: replace example with your forum shortname
function disqus_config() {
    this.callbacks.onNewComment = [function() {
      Analytics.dimension('dimension2', 'true');
      Analytics.event('blog', 'comment', document.title, 1, 1);
    }];
}

/* * * DON'T EDIT BELOW THIS LINE * * */
(function() {
    var dsq = document.createElement('script'); dsq.type = 'text/javascript'; dsq.async = true;
    dsq.src = '//' + disqus_shortname + '.disqus.com/embed.js';
    (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(dsq);
})();
