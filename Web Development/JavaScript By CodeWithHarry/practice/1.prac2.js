let prompt=require('readline-sync');
let arr=[1,2,3,4,5,6];

let arr10=arr.forEach((element)=>{
    console.log(element);
})
// As this does not return any new created array
console.log(arr10);
// MAP
// Creates new array while performing some operations on it
let arr1= arr.map((element, index, array)=>{
    return element + index;
})
console.log(arr1);
// Filter
// Returns an array with elements whose return conditions are true
let arr2= arr.filter((element)=>{
    return element>3;
})
console.log(arr2);
// REDUCE
// Returns an array by performing some operations on 2 elements then use the result as `element1` with next element from array as element2 until array is traversed
let arr3= arr.reduce((element1, element2)=>{
    return element1 + element2;
})
console.log(arr3);

console.log('Practice Set');
// Practice
let newArr=[];
// Q-> 1
// let arrq1=[1, 2, 3, 4];
// // let num=prompt.question('Enter the num: ');
// let ansq1=arrq1.map((element)=>{
//     return element+Number.parseInt(num);
// })
// console.log(ansq1);
// // Q-> 2
// do{
//     // num=prompt.question('Enter number: ');
//     newArr.push(Number.parseInt((num)));
// }while(num!=0)
// newArr.pop();
// console.log(newArr);
// Q->3
arr=[1, 5, 10, 15, 20, 25, 30];
newArr=arr.filter((element)=>{
    return element%10==0;
})
console.log(newArr);
// Q-> 4
newArr=arr.map((element)=>{
    return element*element;
})
console.log(newArr);
// Q-> 5
arr=[];
num=5;
while(num!=0){
    arr.push(num);
    num--;
}
console.log(arr);
newArr=arr.reduce((element1, element2)=>{
    return element1 * element2;
})
console.log(newArr);

// Guess the number
console.log('Guess the number game!!!');
num=Math.round(Math.random()*100);
console.log('Number: ', num);
let guess=-1, count=-1;
do{
    guess=prompt.question('Enter num: ');
    count++;
    if (guess<num) {
        console.log('Guess higher number');
    } else if(guess>num) {
        console.log('Guess smaller number');
    }
    // console.log(`${ guess<num ? 'Guess higher number' : 'Guess smaller number'}`);
}while(guess!=num)
console.log(`The result score is: ${100-count}`);