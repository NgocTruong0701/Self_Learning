/*  Vong lap - Loop

    1. for - lap voi dieu kien dung
    2. for/in - lap qua key cua doi tuong
    3. for/of - lap qua value cua doi tuong
    4. while - lap khi dieu kien dung
    5. do/while - lap it nhat 1 lan, sau do lap khi dieu kien dung
*/

// For loop
// VD 1
function getRandNumbers(min, max, length)
{
    var a = [];
    for(var i = 0; i < length; i++)
    {
        a.push(Math.floor(Math.random() * (max - min) + min));
    }
    
    return a;
}

console.log(getRandNumbers(1, 10, 5));

// VD 2
function getTotal(arr) {
    var total = 0;
    for(var i = 0 ;i < arr.length;i++)
    {
        total += arr[i];
    }
    return total;
}

var a = [1,2,3,4];
console.log(getTotal(a));

// VD 3
var orders = [
    {
        name: 'Khóa học HTML - CSS Pro',
        price: 3000000
    },
    {
        name: 'Khóa học Javascript Pro',
        price: 2500000
    },
    {
        name: 'Khóa học React Pro',
        price: 3200000
    }
]

function getTotal2(arr)
{
    var total = 0;
    for(var i = 0; i < arr.length; i++)
        total += arr[i].price;

    return total;
}

// Expected results:
console.log(getTotal2(orders)); // Output: 8700000

/*-----------------------------------------------------------------------------------------------------*/

// For/In Loop -- lay ra key cua doi tuong
var myInfor = 
{
    name: 'Le Ngoc Truong',
    age: 20,
    address: 'Thanh Hoa'
};

var myArr = [
    'PHP',
    'C++',
    'Java',
    'C#'
];

var myString = 'Javascript';
// VD 1:
function getKeyInfor(obj)
{
    for(var key in obj) // lap qua so luong key cua doi tuong do
    {
        console.log(key); // dua ra cac keyy cua doi tuong
    }
}
getKeyInfor(myInfor);

// VD 2:
function getInforFromKey(obj)
{
    for(var key in obj) // lap qua so luong key cua doi tuong do
        console.log(obj[key]); // dua ra value cua key do
}
getInforFromKey(myInfor);

// VD 3:
function getIndex(arr)
{
    for(var index in arr) // lap qua so luong index cua arr
        console.log(index); // dua ra gia tri index cua arr
}
getIndex(myArr);

// VD 4:
function getValueFromIndex(arr)
{
    for(var index in arr) // lap qua so luong index cua arr
        console.log(arr[index]); // dua ra value cua phan tu trong mang
}
getValueFromIndex(myArr);

// VD 5:
function getIndexinString(string)
{
    for(var index in string)
        console.log(index);
}
getIndexinString(myString);

// VD 6:
function getValueString(string)
{
    for(var index in string)
        console.log(string[index]);
}
getValueString(myString);


// VD 7:
function run(obj)
{
    var arrInfor = [];
    for(var key in obj)
    {
        arrInfor.push(`Thuoc tinh ${key} co gia tri ${obj[key]}`);
    }

    return arrInfor;
}
console.log(run(myInfor));
/*-----------------------------------------------------------------------------------------------------*/
// For/of Loop -- lay phan tu cua mot mang, tung chu cua 1 chuoi, muon dung cho object can bien doi them, tai no lay gia tri
var languages = [
    'Javascript',
    'PHP',
    'C#'
];

function getValueArr(arr)
{
    for(var value of arr)
        console.log(value);
}
getValueArr(languages);

function getValueStr(string)
{
    for(var value of string)
        console.log(value);
}
getValueStr(myString);
// trong truong hop la object 
// dung phuong thuc Object.keys or Object.values
for(var value of Object.keys(myInfor))
{
    console.log(myInfor[value]);
}
for(var value of Object.values(myInfor))
{
    console.log(value);
}

/*-----------------------------------------------------------------------------------------------------*/
// While - Loop
function writeNumber()
{
    var i = 0
    while(i < 10)
    {
        console.log(i);
        i++;
    }
}
writeNumber(); // 0 1 2 3 4 5 6 7 8 9

function writeArr(myArr)
{
    var i = 0;
    while(i < myArr.length)
    {
        console.log(myArr[i]);
        i++;
    }
}
writeArr(myArr);

/*-----------------------------------------------------------------------------------------------------*/
// Do/While Loop
function DoWhileLoop()
{
    var i = 0;
    do
    {
        console.log(i);
        i++;
    }
    while(i < 3);
}
DoWhileLoop(); // 0 1 2

/*-----------------------------------------------------------------------------------------------------*/
// Nested Loop - lap long
var myArray = [
    [1,2],
    [3,4],
    [5,6]
];
function getArraywithNested(arr)
{
    for(var i = 0; i < arr.length;i++)
    {
        for(var j = 0 ; j < arr[i].length; j++)
            {
                console.log(arr[i][j]);
            }
    }
}
getArraywithNested(myArray);