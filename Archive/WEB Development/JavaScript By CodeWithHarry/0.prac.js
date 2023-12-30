console.log("Hello World!!!");
let a=1;
// Ternary Operator
console.log(a>9 ? 'a is greater' : 'a is smaller');

// let b = prompt('Hii!!how are you??')

function avg(num1, num2){
    console.log('Sum of 2 number is', num1+num2);
    return;
}

avg(1, 2);

let obj={
    a: 10,
    b: 20,
    c: 30
}

for(let i=0; i<Object.keys(obj).length; i++){
    console.log(Object.keys(obj)[i], ' : ', obj[Object.keys(obj)[i]]);
}

for(let key in obj){
    console.log(obj[key]);
}

const num=5;
let guess=0;
// while(guess!=num){
//     // guess=prompt('Enter again');
// }

function mean(num1, num2, num3, num4, num5){
    console.log('Mean: ', (num1+num2+num3+num4+num5)/5);
}

mean(1, 2, 3, 4, 5);

let name='Nikhil'
console.log(name.length);
// String Interpolation
console.log(`My name is ${name}`);
let naam='Shavi';
naam=naam.toUpperCase();
console.log(naam);

// Extract the amount
let str='Amount is Rs. 3000';
console.log(str.substring(14));

const fruits=['Apple', 'Oranges', 'PineApple'];
console.log(fruits);
console.log(fruits.toString());
console.log(fruits.toString().split(","));
console.log(fruits.join(' | '));
