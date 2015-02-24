
//animation framework
var allAnims = [
	{
		target : ".map",
		keyframes : [
			{
				when : {
					top : ".slide--world"
				},
				isAt : "screenTop",
				make : {
					"background-color" : "rgb(0, 8, 19)"
				}
			},
			{
				when : {
					bottom : ".slide--world"
				},
				isAt : "screenBottom",
				make : {
					"background-color" : "rgb(40, 166, 225)",
					"visibility" : "visible"
				}
			},
			{
				when : {
					bottom : ".slide--farmers"
				},
				isAt : "screenTop",
				make : {
					"visibility" : "hidden"
				}
			}
		]
	},
]
var allAnimsWithPositionsCalculated = []
$(function(){
	var screenHeight = $(window).height();
	for (var i in allAnims) {
		var anim = allAnims[i]
		var animWithPositionCalculated = {
			target: anim.target,
			keyframes: []
		};
		for (var j in anim.keyframes) {
			var frame = anim.keyframes[j];
			var selector = frame.when.top || frame.when.bottom;
			var isTop = frame.when.top;
			var isAtTop = frame.isAt.localeCompare("screenTop"); //todo more options
			// todo isPast
			var element = $(selector)
			var at = element.offset().top;
			at += (isTop ? 0 : element.outerHeight())
			at += (isAtTop ? 0 : -1 * screenHeight);
			animWithPositionCalculated.keyframes.push({
				at : at,
				make: frame.make,
				index : j
			});
		}
		allAnimsWithPositionsCalculated.push(animWithPositionCalculated);
	}
	console.log(allAnimsWithPositionsCalculated);
});
TWEENABLE_CSS_PROPERTIES = {
	"background-color" : "color"
}

function getTwixt(top, down, keyframes, oldLow, oldHigh){

	var low = null;
	var high = null;

	oldLow = null;
	oldHigh = null;

	var lastKnownLower = null;
	if (oldLow) {

	}
	else if (oldHigh) {

	}
	else {
	 	for (j in anim.keyframes) {
			var keyframe = anim.keyframes[j];

			if (keyframe.at == top) {
				if ((down && j < anim.keyframes.length - 1) || j == 0) {
					low = keyframe
					high = anim.keyframes[ j + 1 ];
				}
				else {
					low = lastKnownLower;
					high = keyframe;
				}
				break;
			}
			else if (keyframe.at > top) {
				low = lastKnownLower;
				high = keyframe;
				break;
			}
			else { //keyframe < top 
				lastKnownLower = keyframe;
			}
		}
	}
	return {
		low : low,
		high : high
	};
}

function interpolateTwixt() {

}
function interpolate(x, x0, x1, y0, y1) {
	return y0 + (y1 - y0) * ((x - x0) / (x1 - x0));
}

vikings.onScroll(function(down, top, last) {
	console.log(top);
	//todo caching
	for (var i in allAnimsWithPositionsCalculated) {
		var anim = allAnimsWithPositionsCalculated[i];
		var firstFrame = anim.keyframes[0];
		var lastFrame = anim.keyframes[anim.keyframes.length - 1];
		var target = $(anim.target)
		if (top <= firstFrame.at) {
			target.css(firstFrame.make);
		}
		else if (top >= lastFrame.at) {
			target.css(lastFrame.make);
		}
		else {
			if (!twixt) {
				anim.twixt = getTwixt(top, anim.keyframes);
			}
			else if (top < anim.twixt.low.at) {
				anim.twixt(top, anim.keyframes, anim.twixt.low);
			}
			else if (top > anim.twixt.high.at) {
				anim.twixt(top, anim.keyframes, null, anim.twixt.high);
			}
			
			if (twixt.low.at == top) {
				target.css(twixt.low.make)
			}
			else if (twixt.high.at == top) {
				target.css(twixt.high.make)
			}
			else {
				var tweenedMake = {}
				for (key in twixt.low.make) {
					var tweenType = TWEENABLE_CSS_PROPERTIES[key];
					var highVal = twixt.high.make[key];
					if (!tweenType) {
						continue;
					}

					var highVal = twixt.high.make[key];
					if (!highVal) {

					}

					if TWEENABLE_CSS_PROPERTIES[key]
					interpolate(top, twixt);
				}
			}
		}
	}
});