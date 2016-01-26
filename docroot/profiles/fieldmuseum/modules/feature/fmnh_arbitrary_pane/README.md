FMNH Arbitrary Pane feature
===========================

This feature provides a Panels fielded pane that allows arbitrary markup, CSS and JavaScript to be edited through
the Drupal Panels UI.

Security
--------

This module is basically a wide open XSS vector by design, so care should always be taken to secure access to
editing the panes of this type. Users whose roles allow them to create and edit these panes should also have
secure passwords.

Usage
-----

Edit a panel and add a new content pane. The "Markup, styles and scripts" pane type is available in the "Fielded
panes" category.

The three main fields -- Markup, CSS and JS -- are all fields which are not filtered using the normal Drupal text
format system.

The contents of the markup field will be wrapped in an anchor tag. The "Target link" field on the pane is a URL that
is rendered as the HREF attribute of this anchor tag wrapper.

The CSS and JS fields are processed so that the style and scripts are always appropriately nested and contextualized
around the pane itself. The ID of the anchor wrapper is automatically generated and used internally by the module to
prevent side effects.

The JavaScript you add to the pane is wrapped in a closure so that `this` is the anchor wrapper DOM elmement
and `$` is jQuery.

For a pane that is given the generated ID of "arbitrary", this script snippet:

```js
$(this).fadeIn();
```

Will be added to the page as:

```js
(function ($) {$('#arbitrary').each(function () {
  $(this).fadeIn();
});})(jQuery);
```

When the CSS is added to the page by Drupal, it is given the context of the anchor element, so you can safely
use selectors that target only the elements in your markup snippet. You can still target IDs, but you do not need to.

Therefore, for a pane that is given the generated ID of "arbitrary", this CSS snippet:

```css
h1 { color: blue; }
```

Will be added to the page as:

```css
#arbitrary h1 { color: blue; }
```

You only need to

**For this feature to work correctly,** the pane must be given the `banner` and either `banner--primary` or
`banner--secondary`. The pane style must be `naked` which is labelled  "No Markup at all" in the Panels UI.

Example
-------

This example will produce a pane of dancing fireflies. It does not use the automatic contextualization features
of the module as documented above, but it works nonetheless.

```html
<figure>
  <div class="fireflies__wrapper">
    <canvas id="fireflies">
    </canvas>  
  </div>
  <figcaption class="banner__description">
    <p>Learn about the lifecycle of fireflies and a lot of other things about them that are important and relevant to our web visitors</p>   
  </figcaption>
</figure>
```

```css
.fireflies__wrapper {
	background: #000;
}
canvas {
    vertical-align: bottom;
}
```

```js
var flies = [];

var ctx = null;
var canvas = null;

function randInt(floor, cieling) {
  return Math.floor((Math.random() * cieling) + floor);
}
function rand(floor, cieling) {
  return (Math.random() * cieling) + floor;
}

$(function(){
  canvas = $("#fireflies");

  var resizeCanvas = function() {
    var width = canvas.closest("a").width();
    canvas[0].width = width;
    canvas[0].height = (width * 2) / 5;
  };

  $(window).resize(resizeCanvas);
  resizeCanvas();

  ctx = canvas[0].getContext("2d");
  ctx.fillStyle = "#FFFF00";

  for (var i = 100 - 1; i >= 0; i--) {
    flies.push({
      centerX: randInt(0, canvas[0].width),
      centerY: randInt(0, canvas[0].height),
      blinkTime: rand(0,7),
      updated: Date.now(),
    });
  }

  requestAnimationFrame(drawDust);
});

lastFrameTime = 0;

function drawCircle(radius, centerX, centerY, opacity){
  ctx.beginPath();
  ctx.arc(centerX, centerY, radius, 0, 2 * Math.PI);
  ctx.fill();
}

function drawDust() {
  var now = Date.now();
  ctx.clearRect(0, 0, canvas[0].width, canvas[0].height);
  for (var i = flies.length - 1; i >= 0; i--) {
    var firefly = flies[i];
    if (firefly.blinkTime > (now / 1000) % 7 && firefly.blinkTime < (now / 1000) % 7 + 1)
      drawCircle(1, firefly.centerX, firefly.centerY, 1 / firefly.nearness);
    firefly.updated = Date.now();
  }

  requestAnimationFrame(drawDust);
}
```
