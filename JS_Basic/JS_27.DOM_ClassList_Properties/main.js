// ClassList Properties

// add -- them class
// remove -- xoa class
// contains -- kiem tra xem ton tai class ay khong
// toggle -- neu class ay da ton tai thi xoa, khong thi them

var boxElement = document.querySelector('.box');
// add class
boxElement.classList.add('red'); // mau chu da doi

// remove -- xoa class
setTimeout(() => {
    boxElement.classList.remove('red');
}, 3000) // setTimeout hanh dong sau n giay se dc thuc thi, sau 3s xoa class

// contains -- kiem tra xem ton tai class ay chua
console.log(boxElement.classList.contains('red')) // true

// toggle -- them / xoa
setInterval(() => {
    boxElement.classList.toggle('red');
}, 5000); // setInterval lap di lap lai 1 hanh dong sau n giay


