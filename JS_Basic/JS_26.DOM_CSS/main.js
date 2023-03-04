// DOM CSS - Style
// camelCase - dung chu cai dau tu chu thu 2 tro di viet hoa

var boxElement = document.querySelector('.box');
console.log(boxElement.style);

//boxElement.style.width = '100px';
//boxElement.style.height = '200px';
//boxElement.style.backgroundColor = 'red';
// bat tien vi kha dai dong


Object.assign(boxElement.style, {
    width: '100px',
    height: '200px',
    backgroundColor: 'red'
});
// ket qua nhu nhau -- tuy nhien cach nay se dung CSS inline chu k dung internal hay external

// lay ra gia tri thuoc tinh css inline
console.log(boxElement.style.width);








