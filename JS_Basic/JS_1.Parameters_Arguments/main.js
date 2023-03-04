// 1 ham co ban
function OutMess(mess) // mess dc goi la parameter (tham so vao) la cac bien dung khi dinh nghia function va dung trong function
{
    //alert(mess);
}

//OutMess('Hello ban nho'); // 'Hello ban nho' dc goi la argument (doi so) la cac bien, cac thu dc dua vao ham do khi su dung ham do

// 1 ham co nhieu tham so 
function MultiMess(mess1, mess2, mess3) // moi parameters cach nhau boi dau ,
{
    console.log(mess1);
    console.log(mess2);
    console.log(mess3);
}

//MultiMess('STRING' , 2, [1,2,3]); // toan tu goi function '()' muon goi function nao thi ten function do + ()

// vay tai sao 1 so function nhu alter() hay console.log() khi ta cho bao nhieu doi so (arguments) thi no van nhan
// trong khi khi dung 1 function thi trc phai dinh nghia function va cac tham so vay chang le ta lai dinh nghia nhieu 
// function voi so luong doi so khac nhau. Dieu nay khong kha thi, va giai phap la dung doi tuong arguments
// Vi du
function TestArguments()
{
    console.log(arguments);
}

//TestArguments('String', 1, [3,4,5]); // khi ta truyen bao nhieu doi so thi doi tuong arguments deu nhan duoc

// Dung for of de hien thi 1 dong doi so truyen vao
function Writelog()
{
    var write = '';
    for (param of arguments)
    {
        write  += param + ' - ';
    }
    console.log(write);
}

Writelog('mess1','mess2', 'mess3');