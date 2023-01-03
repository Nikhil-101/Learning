// Practice Set
// Q-1: Print Hello World in 2 sec
// setTimeout(()=>{
//   console.log("Hello\nWorld");
// }, 2000);
// Q-2: Avg. of numbers using Spread method in an array
// let arr=[1,2,3,4,5];
// function average(a1, a2, a3, a4, a5){
//   let avg=(a1+a2+a3+a4+a5)/5;
//   console.log(avg);
// }

// average(...arr)
// console.log(...arr);
// Q-3: Write a fun that resolve a promise after n sec and takes n as a parameter. Use IIFE to execute the function with different values of n

// function abc(n){
//   return new Promise((resolve, reject)=>{
//     setTimeout(()=>{
//       resolve("True");
//     }, n*1000);
//   });
// }

// (
//   async ()=>{
//     let res=await abc(4);
//     console.log(res);
//   }
// )()

// Q-4: Simple Intrest Calculator using JS
// let principalAmount, time, rateofInterest=3.3;
// principalAmount=Number.parseInt(prompt("Enter the amount: "));
// time=Number.parseInt(prompt("Enter the time: "));
// let simpleInterest=(principalAmount*time*rateofInterest)/100;
// console.log(`Interest Amount payable: ${simpleInterest}`);
// console.log(`Total Amount Payable: ${principalAmount+simpleInterest}`);