/* Math Object
    Property
        - Math.Pi -- So Pi
    
    Method
        - Math.round(); -- lam tron gia tri thap phan >= 5 thi len con k thi lam tron xuong
        - Math.abs(); -- gia tri tuyet doi
        - Math.ceil(); -- lam tron len, bat ki gia tri thap phan
        - Math.floor(); -- lam tron duoi, bat ki gia tri thap phan
        - Math.random(); -- cho ngau nhien 1 so thap phan bat ki
        - Math.min(); -- dua ra gia tri nho nhat
        - Math.max(); -- dua ra gia tri lon nhat
*/
// Round
console.log(Math.round(5.4)); // 5
console.log(Math.round(5.6)); // 6

// Abs
console.log(Math.abs(-3)); // 3

// Ceil
console.log(Math.ceil(5.00001)); // 6

// Floor
console.log(Math.floor(5.999999)) // 5
console.log(Math.floor(0.3234434 * 100)) // 0.3234434 * 100 = 32 lam tron xuong la 32 tiep

// Random
console.log(Math.random());
// random trong  1 khoang (0 - 99)
console.log(Math.floor(Math.random() * 100)); // vi du so do la 0.1234342, * 100 = 12.34342 lam tron xuong la 12

// Min
console.log(Math.min(1,2,3,4,5,-10)); // -10

// Max
console.log(Math.max(1,2,3,4,5,-10)) // 5