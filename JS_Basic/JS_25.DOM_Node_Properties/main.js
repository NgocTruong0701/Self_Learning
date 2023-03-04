
// Node Properties

/*
    attribute : trả về các thuộc tính của element

    childElementCount : số element con
    children : trả về mảng htmlcollection[ chứa element bên trong]

    draggable : kéo thả element

    firstElementchild : lấy ra element con đầu tiên
    lastElementchild : 

    hidden : element ẩn hay ko

    clientHeight, clientWidth: Thuộc tính cua Node thể hiện chiều cao, chiều rộng của element

    localName : trả về tên thẻ của element hiện tại
    nextElementSibling : trả về thể liền kề(bên dưới nó)
    nodeType : 1-2-3(element-attr-textnode)
    offsetHeight/ width : kích thước cao,ngang của elementh + px
    tương tự vs left/top: vị trí trên và trái
    offsetParent : đang là con của thẻ nào
    parentElement : thẻ cha là gì
    ownerDocument : chủ sở hữu của element hiện tại(documebt)

    scrollHeight : vị trí hành động kéo thả
*/

var boxNode = document.querySelector('.box');
console.log([boxNode]); // dung mang vi du boxNode la 1 object nhung trinh duyet mac dinh no hien luon 1 element o desktool

