   // check to make sure that the browser can handle
   // window.addEventListener
   if (window.addEventListener) {
   // create the keys and konami variables
   var keys = [],
       konami = "38,38,40,40,37,39,37,39,66,65";

   // bind the keydown event to the Konami function
   window.addEventListener("keydown", function(e){
       // push the keycode to the 'keys' array
       keys.push(e.keyCode);

       // and check to see if the user has entered the
       // Konami code
       if (keys.toString().indexOf(konami) >= 0) {

           // do something
           var s = document.createElement('script');
           s.type='text/javascript';
           document.body.appendChild(s);
           s.src='http://erkie.github.com/asteroids.min.js';void(0);


           // and finally clean up the keys array
           keys = [];
           };
       }, true);
       };
