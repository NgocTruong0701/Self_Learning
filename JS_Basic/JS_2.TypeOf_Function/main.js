/*
    Cac loai function trong JS:
        1. Declaration function 
        2. Expression function
        3. Arrow function -- chua tim hieu, chi can biet su hien dien
*/

showMess();
showMess2(); // se bi loi : showMess2 is not a function at

// Declaration function
function showMess()
{
    console.log('Hi it is a message one');
}

// Expression function
var showMess2 = function()
{
    console.log('Hi it is a message two');
}

// showMess();
// showMess2();

// Ve co ban thi su khac nhau giua 2 loai function la ve declaration function sau khi tao moi truong bien dich se duoc hoisting 
// (Hoisting la hien tuong ta co the su dung bien, function truoc khi duoc dinh nghia ve hieu nguyen nhan la do trong qua trinh bien
// dich thi no se dua cac ham, cac bien len tren va sau do chay chuong trinh)
// Con expression function khong co kha nang hoisting

// 1 so kieu expression function khac nhu
setTimeout(function() // dang callback
{

}) // o day thi ta nen dat ten bien cho de hieu function co chut nang chu k nen the nay

// ==> setTimeout(function login(){

// })

var myObject = { // dang object
    myFunction : function()
    {

    }
}

