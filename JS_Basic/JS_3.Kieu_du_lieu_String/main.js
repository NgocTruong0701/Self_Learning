/*
CHUOI TRONG JAVASCRIPT

    1. Tao chuoi
    2. Mot so case su dung backslash (\)
    3. Xem do dai cua chuoi
    4. Template string (string format)
*/

// Co 2 cach tao chuoi

var myString = "Le Ngoc Truong";
console.log(myString);

var myString2 = new String("Nguyen Thi Thuy Linh");
console.log(myString2);

//  Backslash la 1 so ki tu dac biet 
var th1 = "Day la \"con cho\'"; // \" \' dung de hien thi ki tu " va '

var th2 = 'Day la dau \\'; // \\ dung de hien thi ki tu \

console.log(th1);
console.log(th2);

// Do dai chuoi ta dung property length de dem
console.log(myString.length);

// Template string hay string format de dinh dang kieu string, tim hieu them
var lastName = 'Truong';
var firstName = 'Ngoc';

var fullName = 'Ten toi la: ' + firstName + ' ' + lastName; // co the dung cach nay de noi chu
var fullName2 = `Ten toi la: ${firstName} ${lastName}`;
console.log(fullName);
console.log(fullName2);
