CKEDITOR.addStylesSet( 'my_styles',
[
    // Block Styles
    { name : 'Blue Title', element : 'h2', styles : { 'color' : 'Blue' } },
    { name : 'Red Title' , element : 'h3', styles : { 'color' : 'Red' } },

    // Inline Styles
//    { name : 'CSS Style', element : 'span', attributes : { 'class' : 'my_style' } },
    { name : 'Marker: Yellow', element : 'span', styles : { 'background-color' : 'Yellow' } },
    
    // Object Styles
    { name : 'Image left' , element : 'img', attributes : { 'class' : 'wysiwyg-left' } },
    { name : 'Image center' , element : 'img', attributes : { 'class' : 'wysiwyg-center' } },
    { name : 'Image right' , element : 'img', attributes : { 'class' : 'wysiwyg-right' } }
    // Object Styles
//    { name : 'Image left' , element : 'img', styles : { 'float' : 'left' } },
//    { name : 'Image right' , element : 'img', styles : { 'float' : 'right' } }
]);