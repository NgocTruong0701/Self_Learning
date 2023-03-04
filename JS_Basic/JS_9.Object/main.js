// Object trong Javascript 

var mySingle = 'status';

var myInfo = {
    'full-name': 'Le Ngoc Truong', // truong hop key khong tuan thu quy tac
    age: 20,
    address: 'Thanh Hoa, VN',
    [mySingle]: true,
    getName: function()
    {
        return this["full-name"];
    }
};

console.log(myInfo);

// Them key moi
myInfo.email = 'ngoctruong@gmail.com';
myInfo['my-school'] = 'HaNoi university of Industry';


// Lay key
console.log(myInfo["full-name"]);
console.log(myInfo.age);
console.log(myInfo.khongco); // undefined

// Lay key qua bien -> ly do dung cach nay object[] thay vi object.key
var keyAge = 'age';
console.log(myInfo[keyAge]);

// function --> phuong thuc / method
// other --> thuoc tinh / property
console.log(myInfo.getName());
