
// DOM EVENTS

// 1.Input / select
// 2.Key up / down


// ------------------- INPUT
var inputValue;
var inputElement = document.querySelector('input[type="text"]');

inputElement.onchange = function(e) // lay gia tri sau khi tro ra khoi input
{
    inputValue = e.target.value;
    console.log(e.target.value);
}


/*inputElement.oninput = function(e) // lay gia tri ngay khi go 
{
    console.log(e.target.value);
}
*/

// ------------------- CHECKBOX
var checkboxElement = document.querySelector('input[type="checkbox"]');

checkboxElement.onchange = function(e)
{
    console.log(e.target.checked);
}


// -------------------- SELECT 
var selectElement = document.querySelector('select');

selectElement.onchange = function(e)
{
    console.log(e.target.value);
}


// ------------ KEY UP nhac phim thuc thi / DOWN an xuong thuc thi/ PRESS khi an giu nut
// tra ve keyboard envent
document.onkeyup = function(e)
{
    //console.log(e.target);
    console.log(e.which);
    switch(e.which)
    {
        case 27:
            console.log('Exit');
            break;
        case 13:
            console.log('Send chat');
            break;
    }
}