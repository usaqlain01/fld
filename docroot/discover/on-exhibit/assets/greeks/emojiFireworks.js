
/*
Easie.coffee (https://github.com/jimjeffers/Easie)
Project created by J. Jeffers

Robert Penner's Easing Equations in CoffeeScript
http://robertpenner.com/easing/

DISCLAIMER: Software provided as is with no warranty of any type. 
Don't do bad things with this :)
 */

(function() {
  this.Easie = (function() {
    function Easie() {}

    Easie.linear = function(time, begin, change, duration) {
      return begin + change * time / duration;
    };

    Easie.backIn = function(time, begin, change, duration, overshoot) {
      if (overshoot == null) {
        overshoot = 1.70158;
      }
      return change * (time /= duration) * time * ((overshoot + 1) * time - overshoot) + begin;
    };

    Easie.backOut = function(time, begin, change, duration, overshoot) {
      if (overshoot == null) {
        overshoot = 1.70158;
      }
      return change * ((time = time / duration - 1) * time * ((overshoot + 1) * time + overshoot) + 1) + begin;
    };

    Easie.backInOut = function(time, begin, change, duration, overshoot) {
      if (overshoot == null) {
        overshoot = 1.70158;
      }
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * (time * time * (((overshoot *= 1.525) + 1) * time - overshoot)) + begin;
      } else {
        return change / 2 * ((time -= 2) * time * (((overshoot *= 1.525) + 1) * time + overshoot) + 2) + begin;
      }
    };

    Easie.bounceOut = function(time, begin, change, duration) {
      if ((time /= duration) < 1 / 2.75) {
        return change * (7.5625 * time * time) + begin;
      } else if (time < 2 / 2.75) {
        return change * (7.5625 * (time -= 1.5 / 2.75) * time + 0.75) + begin;
      } else if (time < 2.5 / 2.75) {
        return change * (7.5625 * (time -= 2.25 / 2.75) * time + 0.9375) + begin;
      } else {
        return change * (7.5625 * (time -= 2.625 / 2.75) * time + 0.984375) + begin;
      }
    };

    Easie.bounceIn = function(time, begin, change, duration) {
      return change - Easie.bounceOut(duration - time, 0, change, duration) + begin;
    };

    Easie.bounceInOut = function(time, begin, change, duration) {
      if (time < duration / 2) {
        return Easie.bounceIn(time * 2, 0, change, duration) * 0.5 + begin;
      } else {
        return Easie.bounceOut(time * 2 - duration, 0, change, duration) * 0.5 + change * 0.5 + begin;
      }
    };

    Easie.circIn = function(time, begin, change, duration) {
      return -change * (Math.sqrt(1 - (time = time / duration) * time) - 1) + begin;
    };

    Easie.circOut = function(time, begin, change, duration) {
      return change * Math.sqrt(1 - (time = time / duration - 1) * time) + begin;
    };

    Easie.circInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return -change / 2 * (Math.sqrt(1 - time * time) - 1) + begin;
      } else {
        return change / 2 * (Math.sqrt(1 - (time -= 2) * time) + 1) + begin;
      }
    };

    Easie.cubicIn = function(time, begin, change, duration) {
      return change * (time /= duration) * time * time + begin;
    };

    Easie.cubicOut = function(time, begin, change, duration) {
      return change * ((time = time / duration - 1) * time * time + 1) + begin;
    };

    Easie.cubicInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * time * time * time + begin;
      } else {
        return change / 2 * ((time -= 2) * time * time + 2) + begin;
      }
    };

    Easie.elasticOut = function(time, begin, change, duration, amplitude, period) {
      var overshoot;
      if (amplitude == null) {
        amplitude = null;
      }
      if (period == null) {
        period = null;
      }
      if (time === 0) {
        return begin;
      } else if ((time = time / duration) === 1) {
        return begin + change;
      } else {
        if (period == null) {
          period = duration * 0.3;
        }
        if ((amplitude == null) || amplitude < Math.abs(change)) {
          amplitude = change;
          overshoot = period / 4;
        } else {
          overshoot = period / (2 * Math.PI) * Math.asin(change / amplitude);
        }
        return (amplitude * Math.pow(2, -10 * time)) * Math.sin((time * duration - overshoot) * (2 * Math.PI) / period) + change + begin;
      }
    };

    Easie.elasticIn = function(time, begin, change, duration, amplitude, period) {
      var overshoot;
      if (amplitude == null) {
        amplitude = null;
      }
      if (period == null) {
        period = null;
      }
      if (time === 0) {
        return begin;
      } else if ((time = time / duration) === 1) {
        return begin + change;
      } else {
        if (period == null) {
          period = duration * 0.3;
        }
        if ((amplitude == null) || amplitude < Math.abs(change)) {
          amplitude = change;
          overshoot = period / 4;
        } else {
          overshoot = period / (2 * Math.PI) * Math.asin(change / amplitude);
        }
        time -= 1;
        return -(amplitude * Math.pow(2, 10 * time)) * Math.sin((time * duration - overshoot) * (2 * Math.PI) / period) + begin;
      }
    };

    Easie.elasticInOut = function(time, begin, change, duration, amplitude, period) {
      var overshoot;
      if (amplitude == null) {
        amplitude = null;
      }
      if (period == null) {
        period = null;
      }
      if (time === 0) {
        return begin;
      } else if ((time = time / (duration / 2)) === 2) {
        return begin + change;
      } else {
        if (period == null) {
          period = duration * (0.3 * 1.5);
        }
        if ((amplitude == null) || amplitude < Math.abs(change)) {
          amplitude = change;
          overshoot = period / 4;
        } else {
          overshoot = period / (2 * Math.PI) * Math.asin(change / amplitude);
        }
        if (time < 1) {
          return -0.5 * (amplitude * Math.pow(2, 10 * (time -= 1))) * Math.sin((time * duration - overshoot) * ((2 * Math.PI) / period)) + begin;
        } else {
          return amplitude * Math.pow(2, -10 * (time -= 1)) * Math.sin((time * duration - overshoot) * (2 * Math.PI) / period) + change + begin;
        }
      }
    };

    Easie.expoIn = function(time, begin, change, duration) {
      if (time === 0) {
        return begin;
      }
      return change * Math.pow(2, 10 * (time / duration - 1)) + begin;
    };

    Easie.expoOut = function(time, begin, change, duration) {
      if (time === duration) {
        return begin + change;
      }
      return change * (-Math.pow(2, -10 * time / duration) + 1) + begin;
    };

    Easie.expoInOut = function(time, begin, change, duration) {
      if (time === 0) {
        return begin;
      } else if (time === duration) {
        return begin + change;
      } else if ((time = time / (duration / 2)) < 1) {
        return change / 2 * Math.pow(2, 10 * (time - 1)) + begin;
      } else {
        return change / 2 * (-Math.pow(2, -10 * (time - 1)) + 2) + begin;
      }
    };

    Easie.linearNone = function(time, begin, change, duration) {
      return change * time / duration + begin;
    };

    Easie.linearIn = function(time, begin, change, duration) {
      return Easie.linearNone(time, begin, change, duration);
    };

    Easie.linearOut = function(time, begin, change, duration) {
      return Easie.linearNone(time, begin, change, duration);
    };

    Easie.linearInOut = function(time, begin, change, duration) {
      return Easie.linearNone(time, begin, change, duration);
    };

    Easie.quadIn = function(time, begin, change, duration) {
      return change * (time = time / duration) * time + begin;
    };

    Easie.quadOut = function(time, begin, change, duration) {
      return -change * (time = time / duration) * (time - 2) + begin;
    };

    Easie.quadInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * time * time + begin;
      } else {
        return -change / 2 * ((time -= 1) * (time - 2) - 1) + begin;
      }
    };

    Easie.quartIn = function(time, begin, change, duration) {
      return change * (time = time / duration) * time * time * time + begin;
    };

    Easie.quartOut = function(time, begin, change, duration) {
      return -change * ((time = time / duration - 1) * time * time * time - 1) + begin;
    };

    Easie.quartInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * time * time * time * time + begin;
      } else {
        return -change / 2 * ((time -= 2) * time * time * time - 2) + begin;
      }
    };

    Easie.quintIn = function(time, begin, change, duration) {
      return change * (time = time / duration) * time * time * time * time + begin;
    };

    Easie.quintOut = function(time, begin, change, duration) {
      return change * ((time = time / duration - 1) * time * time * time * time + 1) + begin;
    };

    Easie.quintInOut = function(time, begin, change, duration) {
      if ((time = time / (duration / 2)) < 1) {
        return change / 2 * time * time * time * time * time + begin;
      } else {
        return change / 2 * ((time -= 2) * time * time * time * time + 2) + begin;
      }
    };

    Easie.sineIn = function(time, begin, change, duration) {
      return -change * Math.cos(time / duration * (Math.PI / 2)) + change + begin;
    };

    Easie.sineOut = function(time, begin, change, duration) {
      return change * Math.sin(time / duration * (Math.PI / 2)) + begin;
    };

    Easie.sineInOut = function(time, begin, change, duration) {
      return -change / 2 * (Math.cos(Math.PI * time / duration) - 1) + begin;
    };

    return Easie;

  })();

}).call(this);

function Tween(callback, initialValue, finalValue, ups, finish, easing){

	var _this = this;

	/*var interpolate = function(x0, x, x1, y0, y1) {
		return y0 + (y1 - y0) * (x - x0) / (x1 - x0);
	}*/

	_this.running = false;

	var currentTime = function(){ 
		return (new Date()).getTime()
	};

	_this.run = function() {
		var duration = (Math.abs(finalValue - initialValue) / ups) * 1000;
		var startTime = currentTime();
		_this.running = true;
		var animate = function(){
			var time = currentTime();
			if (time >= startTime + duration) {
				_this.running = false;
				callback(finalValue);
				if (finish) finish();
			}
			else {
				callback(Easie[easing || "quadOut"](time - startTime, initialValue, finalValue - initialValue, duration));
				/*callback(interpolate(startTime, time, startTime + duration,
									initialValue, finalValue));*/
			}
			if (_this.running) requestAnimationFrame(animate)
		};
		requestAnimationFrame(animate);
	}

	_this.stop = function() {
		_this.running = false;
	}
};

function EmojiFireworks(emoCode, origin, body, duration, passbackElement) {
	
	var _this = this;
 

	function Emojus(code, origin, direction, velocity, z, rotation){

		_this = this;

		_this.element = null;

		_this.x = function(t){
			return /*origin.x +*/ velocity * Math.cos(direction) * t;
		}
		_this.y = function(t){
			return /*origin.y +*/ velocity * Math.sin(direction) * t + 0.5 * 36 * 10 * (t * t);
		}
		_this.z = function(t){
			return 1 + (t * z / 5);
		}
		_this.rot = function(t){
			return t * rotation;
		}


		_this.getMarkup = function(){
			return "<span class='emojiSparkle'>" + code + "</span>";
		}

	}

	var startTime = null;
	var done = false;

	var draw = function(t){
		for (var key in emoji) {
			var emoje = emoji[key];
			emoje.element.css({
				transform: "translate(" + emoje.x(t) + "px, " + emoje.y(t) +"px) scale(" + emoje.z(t) + ")", //rotate(" + emoje.rot(t) + "deg)", 
				opacity: (1 - t * t)
			});
		}
	}

	var currentTime = function(){
		return (new Date()).getTime();
	}

	var teardown = function(){
		for (var key in emoji) {
			emoji[key].element.remove();
		}
	};

	var emoji = []

	var init = function(){

		startTime = currentTime();

		for (var i = 0; i < 10; i++) {
			var direction = (Math.random() * 360) + 1;
			var velocity = (Math.random() * 250) + 50;
			var z = (Math.random() * 20);

			var r = (Math.random() * 1000) - 500;
			var emojus = new Emojus(emoCode, origin, direction, velocity, z, r);
			emojus.element = $(emojus.getMarkup()).css({left: origin.x ,top: origin.y}).appendTo(body)
			if (passbackElement)
			emojus.element.click(function(e){
				passbackElement.trigger(jQuery.Event("click", { pageX: e.pageX, pageY: e.pageY }));
			});
			emoji.push(emojus);
		};

		var tween = new Tween(function(y){
			draw(y)
		}, 0, 1, 1000 / duration, teardown, "linear");
		tween.run();

		delete init;
	}

	init();
}
