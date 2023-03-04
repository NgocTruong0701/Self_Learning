// Object Date

var date = new Date(); // tra ra full tu ngay thang nam, gio phut giay hien tai

var year = date.getFullYear(); // tra ra nam hien tai
var month = date.getMonth() + 1; // tra ra thang hien tai 0 - 11 --> phai cong them 1 cho hop le
var dayofmonth = date.getDate(); // tra ve ngay trong thang 1 - 31;
var day = date.getDay() + 1; // tra ra ngay trong tuan 0 - 6 --> cong them 1 cho dung
var hour = date.getHours() ; // Tra ve gio 1 - 24 --> cong 1 cho dung 
var minutes = date.getMinutes() + 1; // tra ve phut 0 - 59 --> cong them 1
var second = date.getSeconds() + 1; // tra ve giay trong phut 0 - 59 --> cong them 1
var mili = date.getMilliseconds() + 1; // tra ve mili giay 0 - 999 --> cong them 1

// 1 so method khac
var Time = date.getTime(); //Trả về giá trị số của ngày được chỉ định dưới dạng số mili giây kể từ 
//ngày 1 tháng 1 năm 1970, 00:00:00 UTC.  (Giá trị âm được trả lại cho lần trước.)

// 1 so method tra ve chuan quoc te, o tren la gio dia phuong --> Them UTC vi du date.getUTCDay() hay date.getUTCHours()...
console.log(year);
console.log(month);
console.log(dayofmonth);
console.log(day);
console.log(hour);
console.log(minutes);
console.log(second);
console.log(mili);

