/* KIEU SO (NUMBER
    Co 2 loai:
    1. Các số thông thường trong Javascript được lưu trữ dưới dạng 64 bit IEEE-754 (còn được gọi là các số phẩy động). 
    Trong hầu hết các trường hợp khi làm việc với Javascript là chúng ta sử dụng loại số này.
    2. Số BigInt là loại số sử dụng để biểu thị số nguyên có độ dài tùy ý.

    kieu 1: var million = 1000000;
    kieu 2: var million = 1e6; // tương tự: 1000000
            var billion = 2e9; // tương tự: 2000000000 (hai tỏi à nhầm hai tỉ)
    
    Doi tuong Number:
    Number.isFinite()	Xác định xem giá trị đã cho có phải là số hữu hạn hay không. Trả về boolean
    Number.isInteger()	Xác định xem giá trị đã cho có phải là số nguyên hay không. Trả về boolean
    Number.parseFloat()	Chuyển đổi chuỗi đã cho thành một số dấu phẩy động
    Number.parseInt()	Chuyển đổi chuỗi đã cho thành một số nguyên
    Number.toFixed()	Chuyển đổi và trả về chuỗi đại diện cho số đã cho, có số chữ số chính xác sau dấu thập phân
    Number.toString()	Chuyển đổi và trả về số đã cho dưới dạng chuỗi
*/

Number.isFinite(2 / 0); // false
Number.isFinite(20 / 5); // true
Number.isFinite(0 / 0); // false

Number.isInteger(999999999); // true
Number.isInteger(0.2);       // false
Number.isInteger(Math.PI);   // false

Number.parseFloat('10') // 10
Number.parseFloat('10.00') // 10
Number.parseFloat('238,21') // 238
Number.parseFloat('237.22') // 237.22
Number.parseFloat('34 56 78') // 34
Number.parseFloat(' 37 ') // 37
Number.parseFloat('18 is my age') // 18

Number.parseInt('10') // 10
Number.parseInt('10.00') // 10
Number.parseInt('238,21') // 238
Number.parseInt('237.22') // 237
Number.parseInt('34 56 78') // 34
Number.parseInt(' 37 ') // 37
Number.parseInt('18 is my age') // 18

var numberObject = 1234.56789;

numberObject.toFixed(); // '1235'
numberObject.toFixed(1); // '1234.6'
numberObject.toFixed(6); // '1234.567890'

(11).toString();    // '11'
(18).toString();     // '18'
(17.3).toString();   // '17.3'
