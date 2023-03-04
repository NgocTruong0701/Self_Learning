// Object constructor -- Phuong thuc khoi tao (Declaration function or Expression function)

// ly do dung nay do 1 ban ghi co the tao nhieu doi tuong, k dai dong....

// Tao Object constructor -- chi chua thuoc tinh chung
function User(firstname, lastname, avatar)
{
    var FirstName;
    var LastName;
    var Avatar;

    this.FirstName = firstname;
    this.LastName = lastname;
    this.Avatar = avatar;

    this.getName = function(){
        return `${this.FirstName} ${this.LastName}`;
    }
}

// tao nhanh doi tuong (object)
var author = new User('Le', 'Ngoc Truong', 'Avatar');
var user = new User('Nguyen', 'Thi Thuy Linh', 'Avatar');

// Them thuoc tinh rieng cua moi object 
author.title = 'Yeu Doi';
user.comment = 'Yeu Anh';

console.log(author);
console.log(user);

