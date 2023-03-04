// Object Prototype -- nguyen mau doi tuong

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

// Khi ta muon them thuoc tinh vao trong constructor thi phai dung prototype chu k dung them binh thuong nhu them thuoc tinh rieng ddc

var author = new User('Le', 'Ngoc Truong', 'Avatar');
var user = new User('Nguyen', 'Thi Thuy Linh', 'Avatar');

// neu ta them the nay se k dc
User.email = 'abc@gmail.com';
console.log(author.email) // undefined

// Ta phai dung Prototype moi co the them vao constructor
User.prototype.email = 'abc@gmail.com';
console.log(author.email);  // 'abc@gmail.com'

User.prototype.getEmail = function() {
    return this.email;
}
console.log(user.getEmail()); // 'abc@gmail.com'