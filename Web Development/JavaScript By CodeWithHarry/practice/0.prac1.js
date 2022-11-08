// Operaors & Condition Practice
// Q1-> weather age is btw 10 & 20
let age=14;
console.log(age>10 && age<20 ? 'True':'False');
// Q-> 2 switch case usage
switch(age){
    case age<5:
        console.log('You are an infact');
        break;
    case 14:
        console.log('You are a child');
        break;
    case age>18:
        console.log('You are an adult now');
        break;
    default:
        console.log('Invalid Age Entered!!!');
}

// Q-> 3 find divisibility by 2 & 3
let num = 18;
console.log(num%2==0?'Divisible by 2':'Not Divisible by 2');
console.log(num%3==0?'Divisible by 3':'Not Divisible by 3');

// Q-> 4 find divisibility by 2 or 3
console.log(num%2==0 && num%3==0? 'Both divisible by 2 & 3':'Not divisible by 2 & 3');

// Q-> 5 Driving Valid
age=30
console.log(age<18? 'You cannot Drive':'You can Drive');