// PreventDefault
// StopPropagation

// PreventDefault
var aElements = document.links;

// kiem tra xem co an dung link href la facebook.com k, dung for va event
for (var i = 0 ;i < aElements.length;i++)
{
    aElements[i].onclick = function(e)
    {
        if(!e.target.href.startsWith('https://www.facebook.com')){
            e.preventDefault();
        }
    }
}


// StopPropagation
var divElement = document.querySelector('div');
var btnElement = document.querySelector('button');

btnElement.onclick = function(e)
{
    console.log('Click me!');
    e.stopPropagation();
}

divElement.onclick = function(e)
{
    console.log('DIV');
}


