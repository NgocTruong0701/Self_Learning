// DOM EVENT: su kien dien ra khi nguoi dung tuong tac voi website + su kien cua trinh duyet (bat dau tai web, dang tai web, tai web xong...)

// 1. Attributes Event -- dinh nghia thang even vao attribute cua elemnt , them on vao truoc event 
// 2. Assign event using the element node 

var nodeElement = document.querySelector(".event");

nodeElement.onclick = function()
{
    console.log(this);
}

var listNodeElements = document.getElementsByTagName('h2');
for(var index in listNodeElements)
{
    listNodeElements[index].onclick = function(e)
    {
        console.log(e.target);
        //console.log(this) // same result 
    }
}