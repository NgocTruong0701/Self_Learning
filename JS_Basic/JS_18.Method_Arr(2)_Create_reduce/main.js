// Create Reduce

var array = [1,2,3,4,5];

// them 1 phuong thuc vai lop Array
Array.prototype.reduce2 = function (callback, result)
{
    let i = 0;

    if(arguments.length < 2)
    {
        i = 1;
        result = this[0];
    }
    
    for(; i < this.length; i++){ // this nay la cai array goi toi method nay
        result = callback(result, this[i], i, this); // de quy, cac doi so: result  la ket qua dan dan, this[i] la phan tu thu i
        // i la vi tri, this la mang do (theo dung cua reduce la bien tich tru, gia tri cua mang, index, va mang do)
    };

    return result;
}

var total = array.reduce2(function(result, value, index, thisArray)/*callback*/{
    return result + value;
},0/*initia value*/);
console.log(total);// 15

var total2 = array.reduce2(function(result, value, index, thisArray){
    return result + value;
});
console.log(total2);//15

// cach hoat dong khi truyen initial value:
/* dau tien khi goi toi redude2 thi no se goi toi fuction (callback, result),
duyet mang bat dau vao phan tu tu nhat initial value luc nay la 0 = callback(result, this[i] la phan tu thu nhat, 0, va mang do)
o khi do cac doi so nay se duoc dua vao ham o function(result, value, index, thisArray)
trong ham nay return result + value hay 0 + value hay la 0 = 0 + this[0];
tuong tu cu the tang dan vong lap cho het mang, moi lan duyet mang thi goi toi function ay moi lan

// cach hoat dong khi k truyen initial value:
gan nhu tuong tu cach tren, chi khac o lan duyet dau tien thi duyet o phan tu thu 2, con result cua reduce2(callback, result)
luc nay la phan tu dau tien, de kiem tra no truyen may tham so ta dung arguments.length
*/


// On tap 
function arrToObj(arr){
    var object = arr.reduce(function(obj, valueArr){
        obj[valueArr[0]] = valueArr[1];
        return obj;
    },{});

    return object;
}
// Expected results:
var arr = [
    ['name', 'Sơn Đặng'],
    ['age', 18],
];
console.log(arrToObj(arr)); // { name: 'Sơn Đặng', age: 18 }
