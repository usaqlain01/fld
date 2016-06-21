//= include greeks/herocanvas/canvas 
//= include greeks/herocanvas/imagerepo 
//= include greeks/herocanvas/menu 
//= include greeks/herocanvas/slice 
//= include greeks/herocanvas/easie 
//= include greeks/herocanvas/tween 

function HeroCanvas(canvasElement, sprite, heroes) {

	var _this = this;
	var menuSprite;

	var imageRepo, canvas, menu = null;

	//var somethingSelected, isMouseOverMenu = false;
	var expandMenuTween, collapseMenuTween;

	//var mouseOver = null;

	_this.resizeCanvas = function(){
		canvas.resize();
		if (menu.expanded) {
			menu.width(canvas.width());
		}
		draw();
	}


	var fillCanvasWithBlueGradient = function(image, canvasWidth, canvasHeight, spriteSliceWidth, spriteSliceHeight){
		for (var j = 0; j<=canvasWidth; j+= (spriteSliceWidth - 10)) {
			canvas.drawImage({
				"image": 	image, 
				"sx": 		spriteSliceWidth * 6 + 5, 
				"sy": 		0, 
				"swidth": 	spriteSliceWidth - 10, 
				"sheight": 	spriteSliceHeight,
				"dx": 		j, 
				"dy": 		0, 
				"dwidth": 	spriteSliceWidth - 10, 
				"dheight": 	spriteSliceHeight * 64 / 50
			})
		}
	}

	var draw = function(){

		if (!canvas.isVisible())
			return;

		canvas.clear();

		var i = 0;
		
		var canvasWidth = canvas.width();
		var canvasHeight = canvas.height();

		if (!menuSprite) loadMenuSprite();

		var spriteSliceWidth = menuSprite.naturalWidth / 7;
		var spriteSliceHeight = menuSprite.naturalHeight;

		if (menuSprite.complete) {
			fillCanvasWithBlueGradient(menuSprite, 
				canvasWidth, canvasHeight, 
				spriteSliceWidth, spriteSliceHeight);
		}

		var widthOfAllSlicesSoFar = 0;
		for(var key in menu.slices) {

			var slice = menu.slices[key];
			var sliceWidth = slice.pixelWidth();

			if (slice.selected && canvas.isVisible() && !slice.hero) {
				loadHeroImage(slice);
			}
			var image = slice.selected ? slice.hero : menuSprite;

			var dx = menu.left(canvasWidth) + widthOfAllSlicesSoFar;
			widthOfAllSlicesSoFar += sliceWidth;

			var imageNaturalHeight = image.naturalHeight;

			var sheight = slice.selected ? imageNaturalHeight : spriteSliceHeight;

			var sx = slice.selected ? 
				(slice.hero.naturalWidth - sliceWidth) / 2 + slice.heroOffset(canvasWidth) :
				(spriteSliceWidth * i) + (spriteSliceWidth - sliceWidth) / 2;

			var swidth = sliceWidth

			var dwidth = swidth;

			var dheight = imageNaturalHeight;

			canvas.drawImage({
				"image": 	image, 
				"sx": 		sx, 
				"sy": 		0, 
				"swidth": 	swidth, 
				"sheight": 	sheight,
				"dx": 		dx, 
				"dy": 		0, 
				"dwidth": 	dwidth, 
				"dheight": 	dheight
			});

			i++;
		}
	}

	/*var whichSlice = function(clickX){
		var lastSlice, lastDx = null;

		var canvasWidth = canvas.width();
		var sliceWidthSoFar = 0;


		for(var key in menu.slices) {
			var slice = menu.slices[key];
			lastDx = menu.left(canvasWidth) + sliceWidthSoFar;
			sliceWidthSoFar += slice.pixelWidth();

			if (lastDx >= imageRepo.pixels(clickX)) {
				return (lastSlice ? lastSlice.id : null);
			}
			lastSlice = slice;
		}
		return clickX > lastDx + lastSlice.pixelWidth() ? null : lastSlice.id;
	}*/

	_this.collapseMenu = function(noanim, complete) {
		menu.expanded = false;
		if (expandMenuTween) {
			expandMenuTween.stop();
		}
		collapseMenuTween = new Tween(function(y){
			menu.width(y);
			draw();
		}, menu.width(), menu.initialWidth, 2500, complete);
		collapseMenuTween.run();
	}

	_this.expandMenu = function(noanim, complete) {
		menu.expanded = true;
		if (collapseMenuTween) {
			collapseMenuTween.stop();
		}
		if (noanim) {
			menu.width(canvas.width());
			return;
		}
		expandMenuTween = new Tween(function(y){
			menu.width(y);
			draw();
		}, menu.width(), canvas.width(), 2500, complete);
		expandMenuTween.run();
	}

	var getFractionWidths = function(slices) {
		var ifws = {};
		for(var key in slices) {
			ifws[key] = menu.slices[key].fractionWidth();
		}
		return ifws;
	}

	_this.deselect = function(noanim, callback){
		somethingSelected = false;

		if (noanim) {
			for(var key in menu.slices) {
				menu.slices[key].fractionWidth(1/6)
			}
			canvas.height(500);
			callback();
			menu.selectNone();
			return;
		}


		var initialFractionWidths = getFractionWidths(menu.slices)

		tween = new Tween(function(y){

			canvas.height(y);
			draw();

		}, 640, 500, 200, function(){

			tween = new Tween(function(y){
				for(var key in menu.slices) {
					var loopSlice = menu.slices[key];
					loopSlice.heroThumbTransitionPercent = y;

					var ifw = initialFractionWidths[key];

					loopSlice.fractionWidth(ifw + (1/6 - ifw) * (y / 100));
				}
				draw();
			}, 0, 100, 200, function() {
				menu.selectNone();
				callback();
			});

			tween.run();
		});
		tween.run();
	}

	var loadHeroImage = function(slice){
		slice.hero = imageRepo.fromUrl(slice.heroUrls.hero, slice.heroUrls.heroRetina);
	}

	var jumpToSelected = function(slice, callback){
		for(var key in menu.slices) {
			var loopSlice = menu.slices[key];
			if (loopSlice === slice)
				loopSlice.fractionWidth(1);
			else 
				loopSlice.fractionWidth(0);
		}

		canvas.height(640);
		draw();
		callback();
	}

	_this.select = function(sliceIndex, noanim, callback){
		if (!menu.expanded){
			_this.expandMenu(noanim);
		}

		somethingSelected = true;

		var slice = menu.slices[sliceIndex];

		if (canvas.isVisible())
			loadHeroImage(slice);
		else {
			slice.select();
			jumpToSelected(slice, callback);
			return;
		}

		imageRepo.loaded(slice.hero, function(){
			slice.select();
			
			var initialFractionWidths = getFractionWidths(menu.slices);

			if (noanim) {
				jumpToSelected(slice, callback);
				return;
			}

			tween = new Tween(function(y){

				for(var key in menu.slices) {
					var loopSlice = menu.slices[key];
					loopSlice.heroThumbTransitionPercent = y;

					var ifw = initialFractionWidths[key];

					if (loopSlice === slice)
						loopSlice.fractionWidth(ifw + (1 - ifw) * (100 - y) / 100); //1/6 + (5/6) * (100 - y) / 100);
					else 
						loopSlice.fractionWidth(y * ifw / 100);//y * 1/6 / 100);
				}
				draw();
			}, 100, 0, 200, function(){

				if (canvas.height() < imageRepo.pixels(640)) {
					tween = new Tween(function(y){

						canvas.height(y);
						draw();
					
					}, 500, 640, 200, callback());
					tween.run();
				}
				else callback();

			});

			tween.run();
		})
	}

	/*var mouseOverChanged = function(lastMouseOver){
		if (lastMouseOver != null)
			menu.slices[lastMouseOver].mouseOver = false;
		if (mouseOver)
			menu.slices[mouseOver].mouseOver = true;
		draw();
	}*/

	var loadMenuSprite = function(){
		menuSprite = imageRepo.fromUrl(sprite.sprite, sprite.spriteRetina);
		imageRepo.loaded(menuSprite, function(){
			draw();
		});
	}

	var init = function() {

		imageRepo = new ImageRepo();

		menu = new Menu(imageRepo.pixels(500));

		for (var i = 0; i < 6; i++) {
			new Slice(menu, i, heroes[i]);
		};

		canvas = new Canvas(canvasElement, menu);

		_this.resizeCanvas(); //calls draw

		//set up tween

		/*canvasElement.hover(function(){
			isMouseOverMenu = true;
			if (menu.expanded || somethingSelected) return;
			expandMenu();
		}, function(){
			isMouseOverMenu = false;
			if (menu.expanded || somethingSelected) return;
			collapseMenu();
		}).click(function(e){
			var sliceIndex = whichSlice(e.offsetX);
			location.hash = heroes[sliceIndex].stub; //I know...
		}).mousemove(function(e){
			var lastMouseOver = mouseOver;
			mouseOver = whichSlice(e.offsetX);
			if (mouseOver != lastMouseOver) {
				mouseOverChanged();
			}
		});*/

		delete init;
	}

	init();
}
