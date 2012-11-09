/**
 * Create an iframe for Doubleclick Floodlight
 * Uses a bare minimum of jQuery for performance & so it can start processing before jQuery has loaded
 * @param string action_number Floodlight action number. Used to find a wrapped div named iframe_wrapper_######
 * @param string url_base
 * @param string numgen_url URL of the PHP script to generate random numbers
 */
window.create_floodlight_iframe = function (action_number, url_base, numgen_url) {
 
    /**
     * Cross-platform function to get an XMLHttp (AJAX) object.
     *
     */
    function createXMLHttpRequestObject() {
        // xmlHttp will store the reference to the XMLHttpRequest object
        var xmlHttp;
        // try to instantiate the native XMLHttpRequest object
        try {
            // create an XMLHttpRequest object
            xmlHttp = new XMLHttpRequest();
        } catch (e) {
            // assume IE6 or older
            try {
                xmlHttp = new ActiveXObject("Microsoft.XMLHttp");
            } catch (e) {}
        }
        // return the created object or display an error message
        if (!xmlHttp) {
            // Fail quietly
            //alert("Error creating the XMLHttpRequest object.");
        } else {
            return xmlHttp;
        }
    }
 
    function handleRequestStateChange() {
        if (xmlHttp.readyState == 4) {
            if (xmlHttp.status == 200) {
                // Don't do this until the DOM is ready & jQuery is done initializing
                jQuery(function() {
                    response = xmlHttp.responseText;
                    var frame = document.createElement("iframe");
                    frame.src = url_base + response;
                    frame.width = frame.height = 1;
                    frame.frameborder = 0;
                    frame.style.display = 'none';
                    //var wrapper = document.getElementsByClassName('iframe_wrapper_' + action_number)[0];
                    var wrapper = document.querySelectorAll('.iframe_wrapper_' + action_number)[0];
                    if(wrapper === undefined) {
                        wrapper = document.createElement('DIV');
                        wrapper.setAttribute('class', 'iframe_wrapper_' + action_number);
                        document.body.appendChild(wrapper);
                    }
                    wrapper.appendChild(frame);
                });
            }
        }
    }
 
    var xmlHttp = createXMLHttpRequestObject();
    xmlHttp.open("POST", numgen_url, false);
    xmlHttp.onreadystatechange = handleRequestStateChange;
    xmlHttp.send(null);
 
};
