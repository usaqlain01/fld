$(function(){for(var e in svgManifest)$.ajax({url:svgManifest[e],complete:function(e){$(".svgHideContainer").append(e.responseText)}})}),window.common=window.common||{},window.common.analytics=window.common.analytics||{},window.common.analytics.buyTicketsButtonClick=function(e,t){var n=$(e).attr("href");window.common.analytics.event("ticketing","ticketing-exhibition-microsite-"+t,n)},window.common.analytics.scrollDownButtonClick=function(){window.common.analytics.event("one-page","scroll-down-button-click")},window.common.analytics.sponsorLogoClick=function(e){window.common.analytics.event("one-page","logo-click",e)},window.common.analytics.headerNavClick=function(e){var t=$(e).text();window.common.analytics.event("one-page","header-nav-click",t)},window.common.analytics.jumpNavClick=function(e){var t=$.trim($(e).text());window.common.analytics.event("one-page","jump-nav-click",t)},window.common.analytics.visitClick=function(e){var t=$.trim($(e).text());window.common.analytics.event("one-page","visit-click",t)},window.common.analytics.footerClick=function(e,t){var n=t||$.trim($(e).text());window.common.analytics.event("one-page","footer-click",n)},window.common.analytics.trayClick=function(e,t,n){var s=t||$.trim($(e).text());window.common.analytics.event("one-page","tray-click"+(n?n:""),s)},window.common.analytics.introFMLogoClick=function(){window.common.analytics.event("one-page","intro-fm-logo-click")},window.common.analytics.audioEvent=function(e,t){window.common.analytics.event("one-page",e,t)},window.common.analytics.event=function(e,t,n,s){ga("send","event",e,t,n,s?{nonInteraction:1}:null)},window.common.analytics.changePage=function(){ga("set","page",window.location.pathname+window.location.hash),ga("send","pageview")},function(e){function t(){a.content="width=device-width,minimum-scale="+o[0]+",maximum-scale="+o[1],e.removeEventListener(s,t,!0)}var n="addEventListener",s="gesturestart",i="querySelectorAll",o=[1,1],a=i in e?e[i]("meta[name=viewport]"):[];(a=a[a.length-1])&&n in e&&(t(),o=[.25,1.6],e[n](s,t,!0))}(document),$(function(){"use strict";function e(){l=$(".navbar button").is(":visible")}function t(){$(".bg").each(function(e){$(this).hasClass("collapsed")&&(R[e]=$(this).offset().top)})}function n(){var t=$(window).height(),n=$("header").outerHeight();p=_.find("p").eq(0).offset().top-t,m=q.find("p").eq(0).offset().top-t,h=L.find("p").eq(0).offset().top-t,d=$("#intro").offset().top-100,f=$("#emperor_qin").offset().top-120,g=$("#main + .red").offset().top+$("sections a").eq(0).height(),v=$(".bg h1").eq(0).offset().top-200;var s=$(window).scrollTop();w=$("#emperor_qin article h1").offset().top-2*n,y=$("#terracotta_army article h1").offset().top-2*n,C=$("#treasures article h1").offset().top-2*n,b=$("#visit a").offset().top-t+$("#visit a").outerHeight(),s>=b?(j=3,N=!0):s>=C?j=2:s>=y?j=1:s>=w&&(j=0),u=60,e(),l||(u+=100)}function s(e,t,n){var s;return function(){var i=this,o=arguments,a=function(){s=null,n||e.apply(i,o)},r=n&&!s;clearTimeout(s),s=setTimeout(a,t),r&&e.apply(i,o)}}function i(e,t){nt&&($("header").addClass("header-interaction"),it=!0,K=$(window).scrollTop(),tt=$(".bg .container").not(".collapsed").eq(0),Z=tt.outerHeight(),et=I[V-1],tt.css({height:et}).addClass("collapsed"),e>t||!st||$(window).scrollTop(K-Z+et-80),nt=!1,st=!0,P=!1)}function o(e){window.location.href=e}function a(e){$t=!1,K=$(window).scrollTop(),mt=$(e.attr("href")).offset().top-u,ht=!1,Y=!1,l&&P&&(gt.addClass(vt+" "+wt),mt<$(window).scrollTop()&&(st=!1),nt=!0),$("body, html").animate({scrollTop:mt},{duration:"fast",complete:function(){Y=!1,0>=mt&&$("header").removeClass("header-incontent header-pastnav").addClass("header-hidden"),!l&&mt>f&&$("header").addClass("header-pastnav")}})}function r(){$(".blink-me").removeClass("blink-me")}function c(e){e.prepend('<div class="gapfill"></div>')}$("body").removeClass("no-js"),window.lazySizesConfig={addClasses:!0};var l,u;e(),$(".navbar div a").clone().appendTo("header nav"),$("header h2 a").clone().appendTo("header nav"),$("body").append('<div class="section-toggle toggle-hidden"><button class="toggleSection collapse"><span></span></button><button class="nextSection">next <span class="arrow"></span></button></div>'),$("header button").click(function(){$("header .subnav").toggleClass("hidden"),$(this).toggleClass("tcon-transform")});var d,f,p,m,h,u,g,v,w,y,C,b,x,A,k,T="header",S="header-hidden",M="header-incontent",E=500,z=$(T),_=$("#emperor_qin"),q=$("#terracotta_army"),L=$("#treasures"),P=!1,R=new Array,I=new Array,D=!1,j=-1,N=!1,B=!1;if($(".bg").each(function(){R.push($(this).offset().top),I.push($(this).outerHeight())}),n(),!z.length)return!0;{var H=$(window),O=0,U=0,Q=0,W=0,F=$(document),X=0,V=0,G=function(e,t){var n,s;return function(){var i=this,o=arguments,a=+new Date;n&&n+e>a?(clearTimeout(s),s=setTimeout(function(){n=a,t.apply(i,o)},e)):(n=a,t.apply(i,o))}},Y=!1,J=$("#hero .column").outerHeight();$("#treasures").offset().top,$("#terracotta_army").offset().top,$("#emperor_qin").offset().top}H.on("scroll",G(E,function(){X=F.height(),O=H.height(),U=H.scrollTop(),W=Q-U,0>W&&Y?(D&&!N&&(U>=b&&!B&&3>j?(common.analytics.seeFinalTicketCTA("Visit CTA"),B=!0,k=!0,A=!0,x=!0,N=!0):U>=C&&!k&&2>j?(common.analytics.sectionScrollEnter($("#treasures article h1").text()),k=!0,A=!0,x=!0):U>=y&&!A&&1>j?(common.analytics.sectionScrollEnter($("#terracotta_army article h1").text()),A=!0,x=!0):U>=w&&!x&&-1==j&&(common.analytics.sectionScrollEnter($("#emperor_qin article h1").text()),x=!0)),r(),U+O>=X&&z.hasClass(S)&&z.removeClass(S),U>=$("#hero .column").outerHeight()&&0==z.hasClass(M)?(z.addClass(M),z.addClass(S)):0==z.hasClass(S)&&z.addClass(S),U>=$("#treasures").offset().top?$("nav .section3").not(".active").addClass("active").siblings().removeClass("active"):U>=$("#terracotta_army").offset().top?$("nav .section2").not(".active").addClass("active").siblings().removeClass("active"):U>=$("#emperor_qin").offset().top?$("nav .section1").not(".active").addClass("active").siblings().removeClass("active"):$("nav .active").removeClass("active")):W>=0&&Y&&(U<$("#hero .sponsors").offset().top?z.addClass(S).removeClass(M):U>=$("#hero .sponsors").offset().top&&z.removeClass(S).addClass(M),U<$("#terracotta_army").offset().top?$("nav .section1").not(".active").addClass("active").siblings().removeClass("active"):U<$("#treasures").offset().top?$("nav .section2").not(".active").addClass("active").siblings().removeClass("active"):U<$("footer").offset().top&&$("nav .section3").not(".active").addClass("active").siblings().removeClass("active")),0==$(".subnav").hasClass("hidden")&&($("header button").removeClass("tcon-transform"),$(".subnav").addClass("hidden")),0>=W&&P?U>=$(".bg").eq(ct).find("p").last().offset().top-$(window).height()?$(".section-toggle").not(".toggle-hidden").addClass("toggle-hidden"):U>=J[ct]&&($(".toggle-hidden").removeClass("toggle-hidden"),st=!0,nt=!1):W>0&&P&&(U<J[ct]?$(".section-toggle").not(".toggle-hidden").addClass("toggle-hidden"):U<$(".bg").eq(ct).find("p").last().offset().top-$(window).height()&&($(".toggle-hidden").removeClass("toggle-hidden"),st=!0,nt=!1)),P&&(U>$(".bg").eq(ct).next().offset().top?nt=!0:U<$(".bg").eq(ct).offset().top-$(window).outerHeight()&&(st=!1,nt=!0)),Y=!0,it&&0>W&&($(".header-interaction").addClass("header-hidden").removeClass("header-interaction"),it=!1),Q=U}));var K,Z,et,tt,nt=!1,st=!0,it=!1,ot=s(function(){i()},600);$(window).scroll(ot),$(window).scroll(function(){$t=!1}),H.on("resize",G(E,function(){n(),t(),$t=!1}));{var at,rt,ct,lt=$(".detail"),ut=0,V=1,dt=0,J=new Array;new Array}lt.children().addClass("collapsed").each(function(){$(this).append('<button class="sectionToggle expand"><span></span></button>').children("aside").append('<button class="sectionToggle collapse"><span></span></button>')}),$(".expand").click(function(){""!=ct&&(at=ct),ct=$(".expand").index($(this)),P&&(nt=!0,i(at,ct)),V=ct+1,rt=$(this).parent(),ut=rt.height(),dt=$(".bg .container").eq(ct+1).outerHeight(),I[ct]=$(".bg .container").eq(ct).outerHeight(),J[ct]=$(".bg .body").eq(ct).offset().top-$(window).height(),1==ct?$(".section-toggle").addClass("red").removeClass("last"):2==ct?$(".section-toggle").addClass("last").removeClass("red"):$(".section-toggle").removeClass("red last"),rt.css("height","auto").removeClass("collapsed").parent().addClass("active"),$(".section-toggle").removeClass("toggle-hidden"),!P&&$(window).scrollTop()<rt.offset().top,P=!0});var ft;$(".collapse").click(function(){K=$(window).scrollTop(),ft=0,K>=$("#terracotta_army").offset().top&&(ft=1),K>=$("#treasures").offset().top&&(ft=2);var e=lt.children().not(".collapsed").parent().offset().top;$(".bg .container").eq(ft).addClass("collapsed").parent().removeClass("active"),$("body,html").animate({scrollTop:e}),$(".section-toggle").addClass("toggle-hidden"),P=!1,$("header").addClass("header-interaction"),it=!0}),$(".nextSection").click(function(){var e=lt.children().eq(V).parents(".bg").offset().top;$("body").animate({scrollTop:e+2},"slow",function(){$("header").addClass("header-interaction"),it=!0,nt=!0,i(ct,ct+1)}),$(".section-toggle").addClass("toggle-hidden"),P=!1,$("header").addClass("header-interaction"),it=!0}),$("aside").each(function(){$(this).children(".intro").after('<div class="accordion"></div><button class="readMore"><span></span></button>').siblings("p, blockquote").appendTo($(this).children(".accordion")).parents("aside").addClass("collapsed")});$(".readMore").on("click",function(){$(this).parent().toggleClass("collapsed"),$(this).toggleClass("open"),n()});var pt;$('a[href^="#"]').on("click",function(e){e.preventDefault(),$(".subnav").hasClass("hidden")||$("header button").trigger("click"),a($(this)),pt=$(this).attr("href"),o($(this).attr("href")),$('.subnav a[href="'+pt+'"]').length>0?$('.subnav a[href="'+pt+'"]').addClass("active").siblings().removeClass("active"):$(".subnav .active").removeClass("active")});var K,mt,ht,gt=$(".section-toggle"),vt="toggle-hidden",wt="toggle-interaction";$(window).load(function(){D=!0,n(),t(),$("#main").addClass("pretty")}),$(".scroll-prompt").mouseenter(function(){r()}),c($("#treasures")),$("header a").click(function(){$(this).hasClass("section")?common.analytics.jumpNavClick(this):$(this).hasClass("button--buy")?common.analytics.buyTicketsButtonClick(this,"header"):common.analytics.headerNavClick(this)}),$("#main .button--buy").click(function(){common.analytics.buyTicketsButtonClick(this,"intro")});var $t=!1;$(window).mousemove(function(e){$t=window.lastX!==e.clientX||window.lastY!==e.clientY?!0:!1,window.lastX=e.clientX,window.lastY=e.clientY}),$("#inline-nav a").mouseenter(function(){if($t){var e=$("header .section").eq($(this).index()).text();common.analytics.menuInteraction("hover",e,!0)}}),$("#inline-nav a").click(function(){var e=$("header .section").eq($(this).index()).text();common.analytics.menuInteraction("click",e)}),$(".scroll-prompt").click(function(){r(),common.analytics.scrollDownButtonClick()}),$(".share a").click(function(){var e="share-"+$(this).attr("data-network"),t="http://field.mu/YVXr1";common.analytics.socialShareClick(e,t)}),$("#visit a").click(function(){common.analytics.buyTicketsButtonClick(this,"final")}),$(".sponsors a").click(function(){common.analytics.sponsorLogoClick($(this).text())}),$(".readMore").click(function(){var e=$(this).siblings("h2.heading").text();$(this).hasClass("open")?common.analytics.sectionAccordionOpen(e,!1):common.analytics.sectionAccordionClose(e,!1)}),$(".expand").click(function(){var e=$(this).siblings("article").children("h1").text();common.analytics.sectionAccordionOpen(e,!1)}),$(".collapse").click(function(){var e=$("h1.heading").eq(ct).text();common.analytics.sectionAccordionClose(e,!1)}),$(".nextSection").click(function(){var e=$("h1.heading").eq(ct).text();common.analytics.sectionNextClick(e,!1)}),Modernizr.on("srcset",function(e){e||(!function(e){var t=navigator.userAgent;e.HTMLPictureElement&&/ecko/.test(t)&&t.match(/rv\:(\d+)/)&&RegExp.$1<41&&addEventListener("resize",function(){var t,n=document.createElement("source"),s=function(e){var t,s,i=e.parentNode;"PICTURE"===i.nodeName.toUpperCase()?(t=n.cloneNode(),i.insertBefore(t,i.firstElementChild),setTimeout(function(){i.removeChild(t)})):(!e._pfLastSize||e.offsetWidth>e._pfLastSize)&&(e._pfLastSize=e.offsetWidth,s=e.sizes,e.sizes+=",100vw",setTimeout(function(){e.sizes=s}))},i=function(){var e,t=document.querySelectorAll("picture > img, img[srcset][sizes]");for(e=0;e<t.length;e++)s(t[e])},o=function(){clearTimeout(t),t=setTimeout(i,99)},a=e.matchMedia&&matchMedia("(orientation: landscape)"),r=function(){o(),a&&a.addListener&&a.addListener(o)};return n.srcset="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==",/^[c|i]|d$/.test(document.readyState||"")?r():document.addEventListener("DOMContentLoaded",r),o}())}(window),function(e,t,n){function s(e){return" "===e||"  "===e||"\n"===e||"\f"===e||"\r"===e}function i(t,n){var s=new e.Image;return s.onerror=function(){k[t]=!1,et()},s.onload=function(){k[t]=1===s.width,et()},s.src=n,"pending"}function o(){D=!1,B=e.devicePixelRatio,j={},N={},w.DPR=B||1,H.width=Math.max(e.innerWidth||0,A.clientWidth),H.height=Math.max(e.innerHeight||0,A.clientHeight),H.vw=H.width/100,H.vh=H.height/100,v=[H.height,H.width,B].join("-"),H.em=w.getEmValue(),H.rem=H.em}function a(e,t,n,s){var i,o,a,r;return"saveData"===T.algorithm?e>2.7?r=n+1:(o=t-n,i=Math.pow(e-.6,1.5),a=o*i,s&&(a+=.1*i),r=e+a):r=n>1?Math.sqrt(e*t):e,r>n}function r(e){var t,n=w.getSet(e),s=!1;"pending"!==n&&(s=v,n&&(t=w.setRes(n),w.applySetCandidate(t,e))),e[w.ns].evaled=s}function c(e,t){return e.res-t.res}function l(e,t,n){var s;return!n&&t&&(n=e[w.ns].sets,n=n&&n[n.length-1]),s=u(t,n),s&&(t=w.makeUrl(t),e[w.ns].curSrc=t,e[w.ns].curCan=s,s.res||Z(s,s.set.sizes)),s}function u(e,t){var n,s,i;if(e&&t)for(i=w.parseSet(t),e=w.makeUrl(e),n=0;n<i.length;n++)if(e===w.makeUrl(i[n].url)){s=i[n];break}return s}function d(e,t){var n,s,i,o,a=e.getElementsByTagName("source");for(n=0,s=a.length;s>n;n++)i=a[n],i[w.ns]=!0,o=i.getAttribute("srcset"),o&&t.push({srcset:o,media:i.getAttribute("media"),type:i.getAttribute("type"),sizes:i.getAttribute("sizes")})}function f(e,t){function n(t){var n,s=t.exec(e.substring(f));return s?(n=s[0],f+=n.length,n):void 0}function i(){var e,n,s,i,o,c,l,u,d,f=!1,m={};for(i=0;i<r.length;i++)o=r[i],c=o[o.length-1],l=o.substring(0,o.length-1),u=parseInt(l,10),d=parseFloat(l),V.test(l)&&"w"===c?((e||n)&&(f=!0),0===u?f=!0:e=u):G.test(l)&&"x"===c?((e||n||s)&&(f=!0),0>d?f=!0:n=d):V.test(l)&&"h"===c?((s||n)&&(f=!0),0===u?f=!0:s=u):f=!0;f||(m.url=a,e&&(m.w=e),n&&(m.d=n),s&&(m.h=s),s||n||e||(m.d=1),1===m.d&&(t.has1x=!0),m.set=t,p.push(m))}function o(){for(n(Q),c="",l="in descriptor";;){if(u=e.charAt(f),"in descriptor"===l)if(s(u))c&&(r.push(c),c="",l="after descriptor");else{if(","===u)return f+=1,c&&r.push(c),void i();if("("===u)c+=u,l="in parens";else{if(""===u)return c&&r.push(c),void i();c+=u}}else if("in parens"===l)if(")"===u)c+=u,l="in descriptor";else{if(""===u)return r.push(c),void i();c+=u}else if("after descriptor"===l)if(s(u));else{if(""===u)return void i();l="in descriptor",f-=1}f+=1}}for(var a,r,c,l,u,d=e.length,f=0,p=[];;){if(n(W),f>=d)return p;a=n(F),r=[],","===a.slice(-1)?(a=a.replace(X,""),i()):o()}}function p(e){function t(e){function t(){o&&(a.push(o),o="")}function n(){a[0]&&(r.push(a),a=[])}for(var i,o="",a=[],r=[],c=0,l=0,u=!1;;){if(i=e.charAt(l),""===i)return t(),n(),r;if(u){if("*"===i&&"/"===e[l+1]){u=!1,l+=2,t();continue}l+=1}else{if(s(i)){if(e.charAt(l-1)&&s(e.charAt(l-1))||!o){l+=1;continue}if(0===c){t(),l+=1;continue}i=" "}else if("("===i)c+=1;else if(")"===i)c-=1;else{if(","===i){t(),n(),l+=1;continue}if("/"===i&&"*"===e.charAt(l+1)){u=!0,l+=2;continue}}o+=i,l+=1}}}function n(e){return u.test(e)&&parseFloat(e)>=0?!0:d.test(e)?!0:"0"===e||"-0"===e||"+0"===e?!0:!1}var i,o,a,r,c,l,u=/^(?:[+-]?[0-9]+|[0-9]*\.[0-9]+)(?:[eE][+-]?[0-9]+)?(?:ch|cm|em|ex|in|mm|pc|pt|px|rem|vh|vmin|vmax|vw)$/i,d=/^calc\((?:[0-9a-z \.\+\-\*\/\(\)]+)\)$/i;for(o=t(e),a=o.length,i=0;a>i;i++)if(r=o[i],c=r[r.length-1],n(c)){if(l=c,r.pop(),0===r.length)return l;if(r=r.join(" "),w.matchesMedia(r))return l}return"100vw"}t.createElement("picture");var m,h,g,v,w={},$=function(){},y=t.createElement("img"),C=y.getAttribute,b=y.setAttribute,x=y.removeAttribute,A=t.documentElement,k={},T={algorithm:""},S="data-pfsrc",M=S+"set",E=navigator.userAgent,z=/rident/.test(E)||/ecko/.test(E)&&E.match(/rv\:(\d+)/)&&RegExp.$1>35,_="currentSrc",q=/\s+\+?\d+(e\d+)?w/,L=/(\([^)]+\))?\s*(.+)/,P=e.picturefillCFG,R="position:absolute;left:0;visibility:hidden;display:block;padding:0;border:none;font-size:1em;width:1em;overflow:hidden;clip:rect(0px, 0px, 0px, 0px)",I="font-size:100%!important;",D=!0,j={},N={},B=e.devicePixelRatio,H={px:1,"in":96},O=t.createElement("a"),U=!1,Q=/^[ \t\n\r\u000c]+/,W=/^[, \t\n\r\u000c]+/,F=/^[^ \t\n\r\u000c]+/,X=/[,]+$/,V=/^\d+$/,G=/^-?(?:[0-9]+|[0-9]*\.[0-9]+)(?:[eE][+-]?[0-9]+)?$/,Y=function(e,t,n,s){e.addEventListener?e.addEventListener(t,n,s||!1):e.attachEvent&&e.attachEvent("on"+t,n)},J=function(e){var t={};return function(n){return n in t||(t[n]=e(n)),t[n]}},K=function(){var e=/^([\d\.]+)(em|vw|px)$/,t=function(){for(var e=arguments,t=0,n=e[0];++t in e;)n=n.replace(e[t],e[++t]);return n},n=J(function(e){return"return "+t((e||"").toLowerCase(),/\band\b/g,"&&",/,/g,"||",/min-([a-z-\s]+):/g,"e.$1>=",/max-([a-z-\s]+):/g,"e.$1<=",/calc([^)]+)/g,"($1)",/(\d+[\.]*[\d]*)([a-z]+)/g,"($1 * e.$2)",/^(?!(e.[a-z]|[0-9\.&=|><\+\-\*\(\)\/])).*/gi,"")+";"});return function(t,s){var i;if(!(t in j))if(j[t]=!1,s&&(i=t.match(e)))j[t]=i[1]*H[i[2]];else try{j[t]=new Function("e",n(t))(H)}catch(o){}return j[t]}}(),Z=function(e,t){return e.w?(e.cWidth=w.calcListLength(t||"100vw"),e.res=e.w/e.cWidth):e.res=e.d,e},et=function(e){var n,s,i,o=e||{};if(o.elements&&1===o.elements.nodeType&&("IMG"===o.elements.nodeName.toUpperCase()?o.elements=[o.elements]:(o.context=o.elements,o.elements=null)),n=o.elements||w.qsa(o.context||t,o.reevaluate||o.reselect?w.sel:w.selShort),i=n.length){for(w.setupRun(o),U=!0,s=0;i>s;s++)w.fillImg(n[s],o);w.teardownRun(o)}};m=e.console&&console.warn?function(e){console.warn(e)}:$,_ in y||(_="src"),k["image/jpeg"]=!0,k["image/gif"]=!0,k["image/png"]=!0,k["image/svg+xml"]=t.implementation.hasFeature("http://wwwindow.w3.org/TR/SVG11/feature#Image","1.1"),w.ns=("pf"+(new Date).getTime()).substr(0,9),w.supSrcset="srcset"in y,w.supSizes="sizes"in y,w.supPicture=!!e.HTMLPictureElement,w.supSrcset&&w.supPicture&&!w.supSizes&&!function(e){y.srcset="data:,a",e.src="data:,a",w.supSrcset=y.complete===e.complete,w.supPicture=w.supSrcset&&w.supPicture}(t.createElement("img")),w.selShort="picture>img,img[srcset]",w.sel=w.selShort,w.cfg=T,w.supSrcset&&(w.sel+=",img["+M+"]"),w.DPR=B||1,w.u=H,w.types=k,g=w.supSrcset&&!w.supSizes,w.setSize=$,w.makeUrl=J(function(e){return O.href=e,O.href}),w.qsa=function(e,t){return e.querySelectorAll(t)},w.matchesMedia=function(){return w.matchesMedia=e.matchMedia&&(matchMedia("(min-width: 0.1em)")||{}).matches?function(e){return!e||matchMedia(e).matches}:w.mMQ,w.matchesMedia.apply(this,arguments)},w.mMQ=function(e){return e?K(e):!0},w.calcLength=function(e){var t=K(e,!0)||!1;return 0>t&&(t=!1),t},w.supportsType=function(e){return e?k[e]:!0},w.parseSize=J(function(e){var t=(e||"").match(L);return{media:t&&t[1],length:t&&t[2]}}),w.parseSet=function(e){return e.cands||(e.cands=f(e.srcset,e)),e.cands},w.getEmValue=function(){var e;if(!h&&(e=t.body)){var n=t.createElement("div"),s=A.style.cssText,i=e.style.cssText;n.style.cssText=R,A.style.cssText=I,e.style.cssText=I,e.appendChild(n),h=n.offsetWidth,e.removeChild(n),h=parseFloat(h,10),A.style.cssText=s,e.style.cssText=i}return h||16},w.calcListLength=function(e){if(!(e in N)||T.uT){var t=w.calcLength(p(e));N[e]=t?t:H.width}return N[e]},w.setRes=function(e){var t;if(e){t=w.parseSet(e);for(var n=0,s=t.length;s>n;n++)Z(t[n],e.sizes)}return t},w.setRes.res=Z,w.applySetCandidate=function(e,t){if(e.length){var n,s,i,o,r,u,d,f,p,m=t[w.ns],h=w.DPR;if(u=m.curSrc||t[_],d=m.curCan||l(t,u,e[0].set),d&&d.set===e[0].set&&(p=z&&!t.complete&&d.res-.1>h,p||(d.cached=!0,d.res>=h&&(r=d))),!r)for(e.sort(c),o=e.length,r=e[o-1],s=0;o>s;s++)if(n=e[s],n.res>=h){i=s-1,r=e[i]&&(p||u!==w.makeUrl(n.url))&&a(e[i].res,n.res,h,e[i].cached)?e[i]:n;break}r&&(f=w.makeUrl(r.url),m.curSrc=f,m.curCan=r,f!==u&&w.setSrc(t,r),w.setSize(t))}},w.setSrc=function(e,t){var n;e.src=t.url,"image/svg+xml"===t.set.type&&(n=e.style.width,e.style.width=e.offsetWidth+1+"px",e.offsetWidth+1&&(e.style.width=n))},w.getSet=function(e){var t,n,s,i=!1,o=e[w.ns].sets;for(t=0;t<o.length&&!i;t++)if(n=o[t],n.srcset&&w.matchesMedia(n.media)&&(s=w.supportsType(n.type))){"pending"===s&&(n=s),i=n;break}return i},w.parseSets=function(e,t,s){var i,o,a,r,c=t&&"PICTURE"===t.nodeName.toUpperCase(),l=e[w.ns];(l.src===n||s.src)&&(l.src=C.call(e,"src"),l.src?b.call(e,S,l.src):x.call(e,S)),(l.srcset===n||s.srcset||!w.supSrcset||e.srcset)&&(i=C.call(e,"srcset"),l.srcset=i,r=!0),l.sets=[],c&&(l.pic=!0,d(t,l.sets)),l.srcset?(o={srcset:l.srcset,sizes:C.call(e,"sizes")},l.sets.push(o),a=(g||l.src)&&q.test(l.srcset||""),a||!l.src||u(l.src,o)||o.has1x||(o.srcset+=", "+l.src,o.cands.push({url:l.src,d:1,set:o}))):l.src&&l.sets.push({srcset:l.src,sizes:null}),l.curCan=null,l.curSrc=n,l.supported=!(c||o&&!w.supSrcset||a),r&&w.supSrcset&&!l.supported&&(i?(b.call(e,M,i),e.srcset=""):x.call(e,M)),l.supported&&!l.srcset&&(!l.src&&e.src||e.src!==w.makeUrl(l.src))&&(null===l.src?e.removeAttribute("src"):e.src=l.src),l.parsed=!0},w.fillImg=function(e,t){var n,s=t.reselect||t.reevaluate;e[w.ns]||(e[w.ns]={}),n=e[w.ns],(s||n.evaled!==v)&&((!n.parsed||t.reevaluate)&&w.parseSets(e,e.parentNode,t),n.supported?n.evaled=v:r(e))},w.setupRun=function(){(!U||D||B!==e.devicePixelRatio)&&o()},w.supPicture?(et=$,w.fillImg=$):!function(){var n,s=e.attachEvent?/d$|^c/:/d$|^c|^i/,i=function(){var e=t.readyState||"";o=setTimeout(i,"loading"===e?200:999),t.body&&(w.fillImgs(),n=n||s.test(e),n&&clearTimeout(o))},o=setTimeout(i,t.body?9:99),a=function(e,t){var n,s,i=function(){var o=new Date-s;t>o?n=setTimeout(i,t-o):(n=null,e())};return function(){s=new Date,n||(n=setTimeout(i,t))}},r=A.clientHeight,c=function(){D=Math.max(e.innerWidth||0,A.clientWidth)!==H.width||A.clientHeight!==r,r=A.clientHeight,D&&w.fillImgs()};Y(e,"resize",a(c,99)),Y(t,"readystatechange",i)}(),w.picturefill=et,w.fillImgs=et,w.teardownRun=$,et._=w,e.picturefillCFG={pf:w,push:function(e){var t=e.shift();"function"==typeof w[t]?w[t].apply(w,e):(T[t]=e[0],U&&w.fillImgs({reselect:!0}))}};for(;P&&P.length;)e.picturefillCFG.push(P.shift());e.picturefill=et,"object"==typeof module&&"object"==typeof module.exports?module.exports=et:"function"==typeof define&&define.amd&&define("picturefill",function(){return et}),w.supPicture||(k["image/webp"]=i("image/webp","data:image/webp;base64,UklGRkoAAABXRUJQVlA4WAoAAAAQAAAAAAAAAAAAQUxQSAwAAAABBxAR/Q9ERP8DAABWUDggGAAAADABAJ0BKgEAAQADADQlpAADcAD++/1QAA=="))}(window,document))}),Modernizr.on("csstransforms",function(e){if(!e){var t={defaults:{inlineCSS:"*",stylesheets:!0,track:"*",centerOrigin:"margin"},toRadian:function(e){return-1!=e.indexOf("deg")?parseFloat(e,10)*(2*Math.PI/360):-1!=e.indexOf("grad")?parseFloat(e,10)*(Math.PI/200):parseFloat(e,10)},getTransformValue:function(e){return e["-webkit-transform"]||e["webkit-transform"]||e.transform||e.webkitTransform||e["-moz-transform"]||e["moz-transform"]||e.MozTransform||e.mozTransform},track:function(e){jQuery(e).unbind("propertychange").bind("propertychange",function(e){("style.webkitTransform"==e.originalEvent.propertyName||"style.MozTransform"==e.originalEvent.propertyName||"style.transform"==e.originalEvent.propertyName)&&t.applyMatrixToElement(t.computeMatrix(t.getTransformValue(this.style)),this)})},apply:function(e){jQuery(e).each(function(){var e=t.getTransformValue(this.style);e&&t.applyMatrixToElement(t.computeMatrix(e),this)})},parseStylesheets:function(){for(var e=0;e<document.styleSheets.length;e++)if(!document.styleSheets[e].readOnly)for(var n=0;n<document.styleSheets[e].rules.length;n++){var s=t.getTransformValue(document.styleSheets[e].rules[n].style);s&&t.applyMatrixToSelector(t.computeMatrix(s),document.styleSheets[e].rules[n].selectorText)}},applyMatrixToSelector:function(e,n){n.indexOf&&-1!=n.indexOf(":hover")||jQuery(n).each(function(){t.applyMatrixToElement(e,this)})},applyMatrixToElement:function(e,n){n.filters["DXImageTransform.Microsoft.Matrix"]||(n.style.filter=(n.style.filter?"":" ")+"progid:DXImageTransform.Microsoft.Matrix(sizingMethod='auto expand')",t.track(n)),n.filters["DXImageTransform.Microsoft.Matrix"].M11=e.elements[0][0],n.filters["DXImageTransform.Microsoft.Matrix"].M12=e.elements[0][1],n.filters["DXImageTransform.Microsoft.Matrix"].M21=e.elements[1][0],n.filters["DXImageTransform.Microsoft.Matrix"].M22=e.elements[1][1],t.defaults.centerOrigin&&(n.style["margin"==t.defaults.centerOrigin?"marginLeft":"left"]=-(n.offsetWidth/2)+n.clientWidth/2+"px",n.style["margin"==t.defaults.centerOrigin?"marginTop":"top"]=-(n.offsetHeight/2)+n.clientHeight/2+"px")},computeMatrix:function(e){for(var n=e.match(/[A-z]+\([^\)]+/g)||[],s=[],i=0;i<n.length;i++){var o=n[i].split("(")[0],a=n[i].split("(")[1];switch(o){case"matrix":var r=a.split(",");s.push($M([[r[0],r[2],0],[r[1],r[3],0],[0,0,1]]));break;case"rotate":var c=t.toRadian(a);s.push($M([[Math.cos(c),-Math.sin(c),0],[Math.sin(c),Math.cos(c),0],[0,0,1]]));break;case"scale":s.push($M([[a,0,0],[0,a,0],[0,0,1]]));break;case"scaleX":s.push($M([[a,0,0],[0,1,0],[0,0,1]]));break;case"scaleY":s.push($M([[1,0,0],[0,a,0],[0,0,1]]));break;case"skew":var c=t.toRadian(a);s.push($M([[1,0,0],[Math.tan(c),1,0],[0,0,1]]));case"skewX":var c=t.toRadian(a);s.push($M([[1,Math.tan(c),0],[0,1,0],[0,0,1]]));break;case"skewY":var c=t.toRadian(a);s.push($M([[1,0,0],[Math.tan(c),1,0],[0,0,1]]))}}if(s.length){for(var l=s[0],i=0;i<s.length;i++)s[i+1]&&(l=l.x(s[i+1]));return l}}};jQuery(function(){-1!=navigator.userAgent.indexOf("MSIE ")&&(t.defaults.stylesheets&&t.parseStylesheets(),t.inlineCSS&&t.apply(t.inlineCSS===!0?"*":t.inlineCSS),t.defaults.track&&t.track(t.defaults.track))})}})}),function(){}(jQuery,window,document),!function(e,t,n){function s(e,t){return typeof e===t}function i(){var e,t,n,i,o,a,r;for(var c in y)if(y.hasOwnProperty(c)){if(e=[],t=y[c],t.name&&(e.push(t.name.toLowerCase()),t.options&&t.options.aliases&&t.options.aliases.length))for(n=0;n<t.options.aliases.length;n++)e.push(t.options.aliases[n].toLowerCase());for(i=s(t.fn,"function")?t.fn():t.fn,o=0;o<e.length;o++)a=e[o],r=a.split("."),1===r.length?b[r[0]]=i:(!b[r[0]]||b[r[0]]instanceof Boolean||(b[r[0]]=new Boolean(b[r[0]])),b[r[0]][r[1]]=i),$.push((i?"":"no-")+r.join("-"))}}function o(e){var t=x.className,n=b._config.classPrefix||"";if(A&&(t=t.baseVal),b._config.enableJSClass){var s=new RegExp("(^|\\s)"+n+"no-js(\\s|$)");t=t.replace(s,"$1"+n+"js$2")}b._config.enableClasses&&(t+=" "+n+e.join(" "+n),A?x.className.baseVal=t:x.className=t)}function a(){return"function"!=typeof t.createElement?t.createElement(arguments[0]):A?t.createElementNS.call(t,"http://www.w3.org/2000/svg",arguments[0]):t.createElement.apply(t,arguments)}function r(e,t){if("object"==typeof e)for(var n in e)k(e,n)&&r(n,e[n]);else{e=e.toLowerCase();var s=e.split("."),i=b[s[0]];if(2==s.length&&(i=i[s[1]]),"undefined"!=typeof i)return b;t="function"==typeof t?t():t,1==s.length?b[s[0]]=t:(!b[s[0]]||b[s[0]]instanceof Boolean||(b[s[0]]=new Boolean(b[s[0]])),b[s[0]][s[1]]=t),o([(t&&0!=t?"":"no-")+s.join("-")]),b._trigger(e,t)}return b}function c(e,t){return!!~(""+e).indexOf(t)}function l(e){return e.replace(/([a-z])-([a-z])/g,function(e,t,n){return t+n.toUpperCase()}).replace(/^-/,"")}function u(e,t){return function(){return e.apply(t,arguments)}}function d(e,t,n){var i;for(var o in e)if(e[o]in t)return n===!1?e[o]:(i=t[e[o]],s(i,"function")?u(i,n||t):i);return!1}function f(e){return e.replace(/([A-Z])/g,function(e,t){return"-"+t.toLowerCase()}).replace(/^ms-/,"-ms-")}function p(){var e=t.body;return e||(e=a(A?"svg":"body"),e.fake=!0),e}function m(e,n,s,i){var o,r,c,l,u="modernizr",d=a("div"),f=p();if(parseInt(s,10))for(;s--;)c=a("div"),c.id=i?i[s]:u+(s+1),d.appendChild(c);return o=a("style"),o.type="text/css",o.id="s"+u,(f.fake?f:d).appendChild(o),f.appendChild(d),o.styleSheet?o.styleSheet.cssText=e:o.appendChild(t.createTextNode(e)),d.id=u,f.fake&&(f.style.background="",f.style.overflow="hidden",l=x.style.overflow,x.style.overflow="hidden",x.appendChild(f)),r=n(d,e),f.fake?(f.parentNode.removeChild(f),x.style.overflow=l,x.offsetHeight):d.parentNode.removeChild(d),!!r}function h(t,s){var i=t.length;if("CSS"in e&&"supports"in e.CSS){for(;i--;)if(e.CSS.supports(f(t[i]),s))return!0;return!1}if("CSSSupportsRule"in e){for(var o=[];i--;)o.push("("+f(t[i])+":"+s+")");return o=o.join(" or "),m("@supports ("+o+") { #modernizr { position: absolute; } }",function(e){return"absolute"==getComputedStyle(e,null).position})}return n}function g(e,t,i,o){function r(){d&&(delete z.style,delete z.modElem)}if(o=s(o,"undefined")?!1:o,!s(i,"undefined")){var u=h(e,i);if(!s(u,"undefined"))return u}for(var d,f,p,m,g,v=["modernizr","tspan"];!z.style;)d=!0,z.modElem=a(v.shift()),z.style=z.modElem.style;for(p=e.length,f=0;p>f;f++)if(m=e[f],g=z.style[m],c(m,"-")&&(m=l(m)),z.style[m]!==n){if(o||s(i,"undefined"))return r(),"pfx"==t?m:!0;try{z.style[m]=i}catch(w){}if(z.style[m]!=g)return r(),"pfx"==t?m:!0}return r(),!1}function v(e,t,n,i,o){var a=e.charAt(0).toUpperCase()+e.slice(1),r=(e+" "+S.join(a+" ")+a).split(" ");return s(t,"string")||s(t,"undefined")?g(r,t,i,o):(r=(e+" "+M.join(a+" ")+a).split(" "),d(r,t,n))}function w(e,t,s){return v(e,n,n,t,s)}var $=[],y=[],C={_version:"3.3.1",_config:{classPrefix:"",enableClasses:!0,enableJSClass:!0,usePrefixes:!0},_q:[],on:function(e,t){var n=this;setTimeout(function(){t(n[e])},0)},addTest:function(e,t,n){y.push({name:e,fn:t,options:n})},addAsyncTest:function(e){y.push({name:null,fn:e})}},b=function(){};b.prototype=C,b=new b;var x=t.documentElement,A="svg"===x.nodeName.toLowerCase();b.addTest("srcset","srcset"in a("img"));var k;!function(){var e={}.hasOwnProperty;k=s(e,"undefined")||s(e.call,"undefined")?function(e,t){return t in e&&s(e.constructor.prototype[t],"undefined")}:function(t,n){return e.call(t,n)}}(),C._l={},C.on=function(e,t){this._l[e]||(this._l[e]=[]),this._l[e].push(t),b.hasOwnProperty(e)&&setTimeout(function(){b._trigger(e,b[e])},0)},C._trigger=function(e,t){if(this._l[e]){var n=this._l[e];setTimeout(function(){var e,s;for(e=0;e<n.length;e++)(s=n[e])(t)},0),delete this._l[e]}},b._q.push(function(){C.addTest=r}),b.addTest("svgasimg",t.implementation.hasFeature("http://www.w3.org/TR/SVG11/feature#Image","1.1"));var T="Moz O ms Webkit",S=C._config.usePrefixes?T.split(" "):[];C._cssomPrefixes=S;var M=C._config.usePrefixes?T.toLowerCase().split(" "):[];C._domPrefixes=M;var E={elem:a("modernizr")};b._q.push(function(){delete E.elem});var z={style:E.elem.style};b._q.unshift(function(){delete z.style}),C.testAllProps=v,C.testAllProps=w,b.addTest("csstransforms",function(){return-1===navigator.userAgent.indexOf("Android 2.")&&w("transform","scale(1)",!0)}),i(),o($),delete C.addTest,delete C.addAsyncTest;for(var _=0;_<b._q.length;_++)b._q[_]();e.Modernizr=b}(window,document);