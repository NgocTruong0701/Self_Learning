/*
    LAM VIEC VOI ARRAY

    1. toString -- Chuyen mang thanh 1 chuoi co dinh
    2. Join -- Chuyen mang thanh 1 chuoi (nhu toString), nhưng có thể chỉ định dấu phân tách giữa các thành phần
    3. Pop -- Xoa phan tu cuoi cua mang va dua ra phan tu do, khi xoa het tra ve undefined 
    4. Push -- Them phan tu cuoi cung, co the them nhieu phan tu 1 luc
    5. Shift -- Xoa phan tu dau tien cua mang va dua ra phan tu dc xoa do, khi xoa het tra ve undefined
    6. Unshift -- Them phan tu dau vao vi tri dau tien cua mang, co them them nhieu phan tu 1 luc
    7. Splice -- Co the xoa, chen, sua , cat , copy chuoi 
    8. Concat -- Ghep 2 mang lai voi nhau
    9. Slice -- Cat mang, no se tao ra 1 mang khac, k anh huong den mang ban dau
*/

var arr = [
    'PHP',
    'Java',
    'C#',
    'JavaScript'
];

// toString
console.log(arr.toString()); // PHP,Java,C#,JavaScript

// Join
console.log(arr.join(' - ')); //PHP - Java - C# - JavaScript

// Pop
console.log(arr.pop()); //JavaScript
console.log(arr); //['PHP', 'Java', 'C#']

// Push
arr.push('Ruby', 'C++');
console.log(arr); // ['PHP', 'Java', 'C#', 'Ruby', 'C++']

// Shift 
console.log(arr.shift());
console.log(arr); // ['Java', 'C#', 'Ruby', 'C++']

// Unshift 
arr.unshift('PHP', 'Python');
console.log(arr); // ['PHP', 'Python', 'Java', 'C#', 'Ruby', 'C++']

// Splice
//- xoa
arr.splice(0, 2); // vi tri bat dau 0, xoa 2 phan tu
console.log(arr); //['Java', 'C#', 'Ruby', 'C++']
// - chen
arr.splice(1, 0, 'C', 'Go'); // vi tri bat dau 1,xoa 0 phan tu, them 2 phan tu (co the them tuy thich)
console.log(arr); //['Java', 'C', 'Go', 'C#', 'Ruby', 'C++']
// - sua
arr.splice(0, 2, 'JS', 'Python'); // vi tri bat dau 0, xoa 2 phan tu, them 2 phan tu tai vi tri bat dau la 0
console.log(arr); // ['JS', 'Python', 'Go', 'C#', 'Ruby', 'C++']

// Concat 
var arr2 = [
    'LOL',
    'CSGO',
    'CF'
]
console.log(arr.concat(arr2)); // [#0'JS', #1'Python', #2'Go', 'C#', 'Ruby', 'C++', 'LOL', 'CSGO', 'CF'] - 1 chuoi moi k anh huong chuoi cu

// Slice
//[#0'JS', #1'Python', #2'Go', 'C#'#-2, 'Ruby'#-1, 'C++'#0]
console.log(arr.slice(0, 2)); // vi tri bat dau 0, ket thuc la 2 -- ['JS', 'Python']
console.log(arr.slice(-2, -1)); // Ruby
