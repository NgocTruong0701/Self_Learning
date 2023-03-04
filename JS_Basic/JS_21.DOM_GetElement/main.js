// HTML DOM - DOM : Document Object Model hay la mo hinh cac doi tuong tai lieu. La 1 chuan duoc dinh nghia boi W3C 
// Cac phan tu ben trong 1 tai lieu co cau truc duoc dinh nghia thanh cac doi tuong,phuong thuc va thuoc tinh
// de truy xuat de dang ma van dam bao cau truc

// HTML DOM dung de truy van va thao tac tren cac tai lieu co dang cau truc nhu HTML, XML bang cac
// ngon ngu lap trinh nhu JS,PHP

// Đối với HTML DOM, mọi thành phần đều được xem là một node (nút), được biểu diễn trên 1 cây cấu trúc dạng cây gọi là DOM Tree.
// Các phần tử khác nhau sẽ được phân loại node khác nhau nhưng quan trọng nhất là 3 loại: node gốc (document node),
// node phần tử (element node), node văn bản (text node).

// Node gốc: chính là tài liệu HTML, thường được biểu diễn bởi thẻ <html>.
// Node phần tử: biểu diễn cho 1 phần tử HTML.
// Node văn bản: mỗi đoạn kí tự trong tài liệu HTML, bên trong 1 thẻ HTML đều là 1 node văn bản. Đó có thể là tên trang web trong thẻ <title>, tên đề mục trong thẻ <h1>, hay một đoạn văn trong thẻ <p>.
// Ngoài ra còn có node thuộc tính (attribute node) và node chú thích (comment node).

// 1. Element: ID, class, tag, CSS selector, HTML collection

// 2. Attribute

// 3. Text

// ---------------------------------------------------------------------------------------------------------------
// Get Element:

// ID:
var headingNodeID = document.getElementById('headingId'); // so it, chi co 1
console.log(headingNodeID); 
console.log({
    element: headingNodeID
});

// Class:
var headingNodesClass = document.getElementsByClassName('headingClass'); // so nhieu
console.log(headingNodesClass);

// Tag(ten cua the do):
var headingNodesTag = document.getElementsByTagName('h2'); // so nhieu
console.log(headingNodesTag)

// CSS selector 
// -- query selector chi lay ra 1 phan tu, va lay ra phan tu dau tien
var headingNodebyCSS = document.querySelector('#headingId');
console.log(headingNodebyCSS);

var heading2 = document.querySelector('.heading2');
var heading22 = document.querySelector('.box .heading2');
console.log([heading2, heading22]) // giong nhau

// lay ra dua con thu 1 cua box
var child2Heading = document.querySelector('.box .heading2:first-child');
console.log(child2Heading);
// lay ra dua con thu 2 cua box
var child2Heading = document.querySelector('.box .heading2:nth-child(2)');
console.log(child2Heading);

// -- query selector all thi lay ra tat ca phan tu cung css selector nay, tra ve NodeList
var nodeListHeading2All = document.querySelectorAll('.box .heading2');
console.log(nodeListHeading2All);

// HTML collecion (froms, a, img)
// 1 so the html dc quy dinh la html collection nhu form hay the a(co attribute la name). cach nay giup truy van nhanh hon thoi
var listForms = document.forms;
console.log(listForms); // mang cac form trong html
console.log(document.forms.formTest1); // co the lay bang index, key = id

console.log(document.anchors); // HTMLCollection [a, youtobe: a], k co facebook do k co attribute name

// ----------------------
// Get element method 2 
// lay cac li trong box1
// cach 1:
var listBox1 = document.querySelectorAll('.box1 li');
console.log(listBox1);
// cach 2:
var listBox1C2 = document.querySelector('.box1');
console.log(listBox1C2.querySelectorAll('li'));










