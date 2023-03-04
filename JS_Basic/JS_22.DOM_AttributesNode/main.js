// Attribute
// Text

// DOM attributes

var element = document.querySelector('h2');

// Add Attributes 
element.title = 'add-title';
element.className = 'heading2';
// tuy nhien neu muon them 1 so attribute khong hop le, vi du them attribute href cho element h1 thi k hop le
// nhung ta co the dung 1 method setAttribute('attribute', 'value') thi co the dc (co the them bat ki cai gi)
element.setAttribute('href', 'facebook.com');
element.setAttribute('class', 'redColor');
//element.className = 'redColor';

// Get Attribute -- dung khi cac attribute khong hop le hoac hop le
console.log(element.getAttribute('title')); // add-title
console.log(element.href) // undefined
// dung khi attribute hop le
console.log(element.className); // redColor


