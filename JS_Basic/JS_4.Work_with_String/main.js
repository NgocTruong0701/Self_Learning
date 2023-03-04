// LAM VIEC VOI CHUOI

// chuoi nguon de lam viec
var myString = '     Work with JS in JS JS JS F8    ';

// Keyword: JavaScript string methods (phuong thuc string cua js)
// 1. length 
console.log(myString.length);

// 2. Find index  (indexOf()) tra ve vi tri dau tien cua chuoi dua vao
console.log(myString.indexOf('JS'));
// muon tim them js o vi tri khac thi dung them so bat dau vi tri tim kiem
console.log(myString.indexOf('JS', 12));
// tim thang cuoi cung thi
console.log(myString.lastIndexOf('JS'));
// ngoai ra con method search, diem khac biet cua search va indexOf la search k cho them tham so thu 2 de them vi tri bat dau va
// search dung cho bieu thuc chinh quy
console.log(myString.search('JS'));

// 3. Cut string - slice
console.log(myString.slice(15,17));

// 4. Replace  
console.log(myString.replace('JS', 'JavaScript')); // chi sua cai JS dau
// tuy nhien muon sua toan bo cai JS thi sao => dung bieu thuc chinh quy
console.log(myString.replace(/JS/g, 'JavaScript'));

// 5. Convert to upper case 
console.log(myString.toUpperCase());

// 6. Convert to lower case
console.log(myString.toLowerCase());

// 7. Trim - loai bo khoang trang
console.log(myString.trim());

// 8. Split - tach chuoi ra va bo vao trong array, can tim diem chung de cat
var languages = 'JavaScript, PHP, C++';
console.log(languages.split(', '));
var language = 'JavaScript';
console.log(language.split(''));

// 9. Get a character by index 
const myString1 = 'Ngoc Truong';
console.log(myString1.charAt(0));
console.log(myString.charAt(100));
console.log(myString1[0]);
console.log(myString1[100]);


