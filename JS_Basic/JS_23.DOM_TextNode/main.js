// Text Node - DOM

// innerText : tra ve text nhung cai gi nhin thay tren trinh duyet
// textContent : tra ve text that su du no co bi an

var heading = document.querySelector('.heading');

// getter ra text cua heading
console.log(heading.innerText);
console.log(heading.textContent);

// setter text 
heading.innerText = 'New Heading';
// se hien thi la New Heading
heading.textContent = 'New Heading'; // deu nhu nhau

// khac biet ro rang cua innerText va textContent la cach get va set noi dung
// innerTex get chi la gia tri duoc hien thi len trinh duyet
// textContext thi dua ra tat ca cac gi duoc xem la text ben trong(loai bo cac the(tag) phan ben trong la text)

// con setter cua innerText no se dua tat ca cac thu gi ben trong neu co khoang cach ra br
// con setter cua textContent thi khoang cach HTML van bo qua va chi giu text

// cu the innerText là những thứ được nhìn thấy trên trang web . textContent là những thứ mình nhìn thấy trong html 
// innerText viet vao trinh duyet -> HTML phải theo, textContent viet vao HTML cho trinh duyet hien

// 1 so vi du chung minh
var heading2 = document.querySelector('.headingTest');

// setter innerText
console.log(heading2.innerText); // Test Test

// setter textContent 
console.log(heading2.textContent); 
/*      Test
            class="color">Test

        
            .color{
                color: red;
            }
        
*/

// ve getter
var heading3 = document.querySelector('h3');

heading3.innerText = `


        Test


`; // ket qua cac enter la cac br

heading3.textContent = `

            test

`; // test, khong co khoang cach nao hay dong nao




