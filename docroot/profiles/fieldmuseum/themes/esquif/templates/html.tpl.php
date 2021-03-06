<?php
/**
 * @file
 * Returns the HTML for the basic html structure of a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728208
 */
?><!DOCTYPE html>
<!--[if lt IE 9 ]><html class="no-js ie ltie9 ltie10"<?php print $html_attributes; ?>><![endif]-->
<!--[if IE 9 ]><html class="no-js ie ie9 ltie10"<?php print $html_attributes; ?>><![endif]-->
<!--[if (gt IE 9)|(gt IEMobile 7)|!(IEMobile)|!(IE)]><!--><html<?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

  <?php if ($default_mobile_metatags): ?>
    <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
    <meta name="MobileOptimized" content="320">
    <meta name="HandheldFriendly" content="true">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php endif; ?>
  <meta http-equiv="cleartype" content="on">

  <?php print $styles; ?>
  <?php print $scripts; ?>
  <?php print render($head_conditional_scripts); ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  <?php print render($foot_conditional_scripts); ?>
  <!-- This waits until the page load event triggers and then writes defer.js to the page. This is the fastest way to load the page and ensure this is a non-blocking script. -->
  <script>
    (function() {
      var downloadJSAtOnload;

      downloadJSAtOnload = function() {
        var element;
        element = document.createElement("script");
        element.src = "<?php print $base_path . $path_to_theme; ?>/js/defer.js";
        return document.body.appendChild(element);
      };

      if (window.addEventListener) {
        window.addEventListener("load", downloadJSAtOnload, false);
      } else if (window.attachEvent) {
        window.attachEvent("onload", downloadJSAtOnload);
      } else {
        window.onload = downloadJSAtOnload;
      }

    }).call(this);
  </script>
</body>
</html>
