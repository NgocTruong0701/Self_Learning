// Includes method -- return boolean

// string
var myString = 'Web designer by Le Ngoc Truong'
console.log(myString.includes('Le Ngoc Truong')); // true
console.log(myString.includes('Web', 2)); // false, doi so kia la vi tri bat dau tim chu do
console.log(myString.includes('abcsadf')); // false

// array
var myArray = ['PHP','C#', 'Javascript', 'Ruby'];
console.log(myArray.includes('PHP')); // true
console.log(myArray.includes('PHP',1));// false , tuong tu nhu string, myArray[0] = 'PHP' k phai myArray[1]
console.log(myArray.includes('sahfhdsf')); //false

