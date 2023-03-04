// Add element vao trong 1 elemnt

// dung innerHTML - ghi vao ben trong cua element chua no va outerHTML - ghi ben ngoai (ghi de - thay the) len element chua no

var boxElement = document.querySelector('.box');

boxElement.innerHTML = '<h1>Da them 1 the heading 1 ben trong box</h1>'; // setter innerHTML

// getter innerHTML 
console.log(boxElement.innerHTML); // <h1>Da them 1 the heading 1 ben trong box</h1>

// va ta da biet them element thi trong element chua text va attribute vay nen ta co the them ca text va attribute, o the
// h1 kia da them text, bay h ta them attribute
boxElement.innerHTML = '<h2 title="add attribute">Add them attribute title</h2>'; //<h2 title="add attribute">Add them attribute title</h2>

// outerHTML - ghi de hay ghi ben ngoai cua the do
var box2Element = document.querySelector('.box2');
box2Element.outerHTML = '<h3 title="ghide">Da ghi de</h3>'; // setter outerHTML -- thay the luon .box2 va the h2.test ben trong 
// thanh the h3.title

//getter outerHTML
console.log(box2Element.outerHTML); 
/*<div class="box2">
        <h1 class="test">The bi ghi de</h1>
    </div>
*/// ly do tai sao lai k chua gia tri kia do box2Element la bien gan gia tri ben tren, no chua gia tri query tu truoc do


// --------------------------------- BAI TAP -----------------------------
/*Sử dụng phương thức map kết hợp với join để tạo chuỗi HTML từ mảng courses.
Gán chuỗi HTML vừa tạo vào thuộc innerHTML của thẻ ul giống bài trước nhé.
*/
var courses = ['HTML & CSS', 'Javascript', 'PHP', 'Java']

function render(courses) {
    var newArray = courses.map(function(value, index){
        return [
            `<li>${value}</li>`
        ];
    });

    var coursesString = newArray.join(' ');

    var List = document.querySelector('ul');
    List.innerHTML = coursesString;
};

render(courses);

// render(courses)

