// De Quy

// 1. Xac dinh diem dung
// 2. Logic handle => tao ra diem dung

function countDown(num)
{
    if(num >= 0)
    {
        console.log(num);
        return countDown(num - 1); // logic chay
    }
    else // xac dinh diem dung
        return num; // logic dung
}

countDown(10);

function GiaiThua(n)
{
    if(n == 0 || n == 1) // xac dinh diem dung
        return 1; // logic dung
    else
        return n * GiaiThua(n - 1); // logic chay
}

console.log(GiaiThua(3));