//  Callback - Goi lai

//  La ham (function) duoc truyen qua doi so khi goi ham khac

//  1. La ham
//  2. Duoc truyen qua doi so
//  3. Duoc goi lai (trong ham nhan doi so)

/* vi du:
    function Write()
    {
        console.log("Callback");
    };

    function Execute(callback)
    {

    };
    
    Execute(Write); // Callback
*/


function myCallback(value){
    console.log('Hien thi: ' + value);
};

function myFunction(value)
{
    if(typeof value === 'function')
        value('Da callback function myCallback thong qua tham so cua myFunction'); // goi function myCallback bang doi so value
};

myFunction(myCallback);

// ------------------------------------------------------------------------------------
function sumCb(a, b) {
    return a + b;
}

function caculate(a, b, cb) {
    return cb(a, b);
}

console.log(caculate(1, 2, sumCb));

// ------------------------------------------------------------------------------------------------------------
// Tao method Array

// For in -- ly do dung do trong mang dung length se k chinh sac boi ta co the gan length cua mang bang 1 gia tri xac dinh
// khi ay mang se tao them cac phan tu trong de bo sung vao mang, khi ta dung for thong thuong thi no se duyet ca cac pt empty do
// hasOwnProperty - kiem tra xem cac phan tu gan nhat khong(bac gan nhat), tai vi khi ta tao 1 constructor o Object constructor
// no se duoc dua vao _proto_ dieu nay khi duyet array bang for in se thay vi duyet cac phan tu trong mang thoi, no se duyet
// cac cac method (key or name) cua medthod do nen phai dung hasOwnProperty de kiem tra

// Resource
const sports = [
    {
        name: 'Bóng rổ',
        like: 0
    },
    {
        name: 'Bơi lội',
        like: 5
    },
    {
        name: 'Bóng đá',
        like: 10
    },
]

// forEach()
// tao 1 method trong object constructor
Array.prototype.forEach2 = function(callback) // callback phai la 1 functon, hay kiem tra xem
{
    if(typeof callback === 'function')
    {
        // method map la duyet mang
        // cac hoat dong cua no la  duyet qua tung phan tu cua array goi toi method map2 
        for(var index in this)
        {
            // kiem tra xem co phai phan tu bac gan nhat k
            if(this.hasOwnProperty(index))
            {
                // goi lai ham callback de thuc hien nhiem vu cua ham do, truyen phan tu do va index phan tu do la doi so cua callback
                callback(this[index], index);
            }
        }
    }
    else
        console.error('Day khong phai function');
};
sports.forEach2(function(value, index){ // tao ham function la doi so cua forEach2 va ham nay co 2 tham so la value va index
    // nhiem vu cua ham nay
    console.log(index, value);
});

// ------------------------------------------------
// every -- tra ve boolean, true khi moi phan tu trong mang thoa man dieu kien
// tao 1 method trong object constructor
Array.prototype.every2 = function (callback) // method co doi so phai la 1 function giai quyet
{
    // van la duyet mang
    if(typeof callback === 'function')
    {
        for(var index in this)
        {
            if(this.hasOwnProperty(index))
            {
                if(callback(this[index], index))
                {
                    continue;
                }
                return false;
            }
        }
        return true;
    }
};
var isTrue = sports.every2(function(value, index){
    return value.like === 0;
});
console.log(isTrue); // false

// --------------------------------------------------

// some -- tra ve boolean, true khi co it nhat 1 phan tu thoa man dieu kien
// tao 1 method cho Array constructor
Array.prototype.some2 = function(callback)
{
    for(var index in this)
    {
        if(this.hasOwnProperty(index))
        {
            if(callback(this[index])){
                return true;
            }
        }
    }
    return false;
};
// dung method nay
var isFalse = sports.some2(function(value){
    return value.like === 0;
});
console.log(isFalse) // true;

// -----------------------------------------------------
// Find -- duyet mang va tra phan tu dau tien thoa man dieu kien
// tao 1 method cho Array constructor
Array.prototype.find2 = function(callback)
{
    var result = [];
    for(var index in this)
    {
        if(this.hasOwnProperty(index))
        {
            if(callback(this[index], index, this))
            {
                result.push(this[index]);
                return result;
            }
        }
    }
    return;
};
// dung method nay
console.log(sports.find2(function(value, index, thisArray){
    return value.like != 0;
}));

// -----------------------------------------------------------------
// Filter -- duyet mang va tra ve cac phan tu thoa man
Array.prototype.filter2 = function(callback)
{
    var result = [];
    for(var index in this)
    {
        if(this.hasOwnProperty(index))
        {
            if(callback(this[index], index, this))
            {
                result.push(this[index]);
            }
        }
    }
    return result;
}
// dung method nay
var filterArr = sports.filter2(function(value, index, thisArray){
    return value.like != 0;
});
console.log(filterArr);

// -------------------------------------------------------------------
// Map -- kha giong forEach nhung ma Map tao ra mang moi dua tren function ben trong, forEach thi k the return gia tri
// tao Array constructor
Array.prototype.map2 = function(callback)
{
    var result = [];
    for(var index in this)
    {
        if(this.hasOwnProperty(index))
        {
            result.push(callback(this[index], index, this));
        }
    }
    return result;
};
// Dung method nay
var map2Arr = sports.map2(function(value, index, thisArray)
{
    return {
        name: `Day la mon ${value.name}`,
        like: value.like
    };
})
console.log(map2Arr);




