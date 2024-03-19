console.log("Hello World!!!")

let str='Hello World!!!';
// for (const key in str){
//   console.log(key, str[key]);
// }

// for (const value of str){
//   console.log(value);
// }

// let arrayList = Array.from(str);
// console.log(arrayList);

// arrayList.forEach(element=>{
//   console.log(element);
// })

// Doing mfr - reduce, map & filter

let arr = [1, 2, 3, 4, 5];
let arr2;

// MAP Function
arr2 = arr.map((element, index, array)=>{
  console.log(element, index, array);
  return element*2;
})
console.log(arr2);

// Filter Function
arr2= arr.filter(element=>{
  return (!(element%2) ? true : false);
})
console.log(arr2);

// Reduce Function
let n=arr.reduce((e1, e2)=>{
  return e1*e2;
})
console.log(n);
