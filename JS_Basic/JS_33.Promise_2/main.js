
// 1. new Promise
// 2. Excutor

var promise = new Promise(
    // Executor
    function(resolve, reject)
    {
        // logic su ly
        // Thanh cong : resolve()
        // That bai: reject()
        resolve([
            {
                id: 1,
                name: 'JavaScript'
            }
        ])

    }
);

/* 
    3 trang thai cua promise
    - 1 Pendding: dang cho promise co nghia la cho no resolve hay reject 
    - 2 Fulfilled: promise da thanh cong (logic thanh cong)
    - 3 Rejected : promise da that bai
*/

// promise
//     .then(function(courses) { // Khi logic thanh cong thi chay then
//         console.log(courses);
//     })
//     .catch(function() { // khi logic that bai thi chay catch
        
//     })
//     .finally(function() { // chay khi 1 trong 2 cai kia dc goi
//         console.log('Done!')
//     });


// -- Ly thuyet, cach hoat dong


promise
    .then(function(data)
    {
        console.log(data);
        return new Promise(
            function( resolve, reject)
            {
                setTimeout(function()
                {
                    resolve([1,2,3]);
                }, 3000)
            }
        )
    })
    .then(function(data)
    {
        console.log(data);
    })


function sleep(ms)
{
    return new Promise(
        function(resolve, reject)
        {
            setTimeout(function()
            {
                resolve()
            },ms)
        }
    )
}

sleep(1000)
    .then(function()
    {
        console.log(1)
        return sleep(1000);
    })
        .then(function(){
            console.log(2)
            return sleep(1000);
        })
        .then(function(){
            console.log(3)
            return sleep(1000);
        })