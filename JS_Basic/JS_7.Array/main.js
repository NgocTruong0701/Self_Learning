/*
    Mang trong JavaScript - Array

    1. Tao mang
    2. Truy xuat mang
        - lay do dai
        - lay phan tu theo index
*/

// 2 cach tao array

var languages = [
    "JS",
    "C++",
    "PHP",
    null,
    undefined,
    function(){

    },
    {}
]

var languages1 = new Array(
    "JS",
    "C++",
    "PHP",
    null,
    undefined,
    function(){

    },
    {}
) // khong nen dung cach nay

console.log(languages);
console.log(languages1);

// Kiem tra xem do la object hay array
console.log(Array.isArray(languages));

// Lay do dai mang
console.log(languages.length);

// lay phan tu theo index, (key doi voi object). Su khac nhau giua object va array doi voi js la object ta co the danh key cho gia tri do, khong nhu array
console.log(languages[0]);
console.log(languages[100]); // underfined