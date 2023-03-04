// JSON là gì
/*
1. Là một định dạng dữ liệu (dạng chuỗi)
2. JSON = JavaScipt Object Notation 
3. JSON giúp thể hiện các kiểu dữ liệu: Number, Boolen, Null, Array, Object

-- Có 2 thao tác :Stringify và Parse 
Stringify: từ Javascript Type -> JSON
Parse: từ JSON -> Javascript type
*/

var json = '["java", "c#", "Go"]';
var json2 = '{"name":"Le Ngoc Truong", "age": 20}';


// JSON.Parse
var a ='1';
console.log(JSON.parse(a));
console.log(JSON.parse(json));
console.log(JSON.parse(json2));


// JSON.Stringify
var object = {name:'Lê Ngọc Trường', age: 20};
console.log(JSON.stringify(object));
console.log(JSON.stringify(1));
console.log(JSON.stringify(null));


