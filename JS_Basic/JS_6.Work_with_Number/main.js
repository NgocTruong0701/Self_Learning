/* 
    Kieu so (number) trong JavaScript

    1. Tao gia tri Number
    2. Lam viec voi Number
        - toString -- dua ra chuoi dai dien so do
        - toFixed -- lam tron so thap phan, van la dua ra chuoi dai dien so do dc lam tron (neu co)
*/

var age = 20;
var PI = 3.14;
var numberO = 32.2342343;
var otherNum = new Number(20); // tranh dung, khoi tao 1 doi tuong,kieu object

// toString
console.log(age.toString());
console.log(PI.toString());

// toFixed
console.log(PI.toFixed()) // cac gia tri falsy nhu k co gi, 0 , ''... thi se lam tron het
console.log(numberO.toFixed(4));
