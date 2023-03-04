/*
    Promise 
        - Sync: đồng bộ nghĩa là câu lệnh nào viết trước thì thực hiện trước, viết sau thì thực hiện sau
        - Async: bất đồng bộ là sự không theo thứ tự thực hiện của mã lệnh viết
    - Các hàm gây ra sự bất đồng bộ
        + setTimeout
        + setInterval 
        + fetch
        + XMLHttpRequest 
        + đọc file 
        + request animation frame 

    - Callback 
*/

// example for Sync
console.log(1);
console.log(2);

// example for Async 
setTimeout(function(){
    console.log(3);
},1000);
console.log(4);

