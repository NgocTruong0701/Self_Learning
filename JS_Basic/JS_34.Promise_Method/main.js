/*
    1. Promise.resolve -- promise xac dinh thanh cong
    2. Promise.reject -- promise xac dinh that bai
    3. Promise.all -- dung de chay song song cac promise khong phu thuoc vao nhau
*/

var promise_resolve = Promise.resolve('Success!')
    .then(function(result)
    {
        console.log(result);
    })

var promise_reject = Promise.reject('Error');

promise_reject
    .catch(function(err)
    {
        console.log(err);
    })

var promise_all1 = new Promise(
    function(resolve, reject)
    {
        setTimeout(function()
        {
            resolve([1])
        },1000)
    }
)

var promise_all2 = new Promise(
    function(resolve, reject)
    {
        setTimeout(function()
        {
            resolve([2,3])
        },2000)
    }
)

Promise.all([promise_all1, promise_all2])
    .then(function(result) {
        var result_1 = result[0];
        var result_2 = result[1];
        
        console.log(result_1.concat(result_2));
    })

