/**
 * Copyright
 */
if (typeof DEBUG === 'undefined') {
    DEBUG = true;
}
if (typeof FOO === 'undefined') {
    FOO = 1;
}

(function() {

var foo = new Array(FOO, 2, 3, 4);
var bar = Array(a, b, c);
var var1 = new Array(5);
var var2 = new Array(a);

function bar(foo) {
    var2.push(foo);
    return foo;
}

// comment
var foo = function (var1) {
    DEBUG && console.log('hellow world');
    return var1;
}

foo('abc123')
bar('abc123')

})()
