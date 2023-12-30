// Callback function -  taking another function as a parameter in a function
// function sum(a, b, callback){
//   console.log("Sum is: ", a+b);
//   let script = document.createElement("script");

//   script.onload=()=>{
//     console.log("Successfully Loaded");
//   }
//   script.onerror=()=>{
//     console.log("Error Occured");
//   }

//   callback();
// }

// function success(){
//   console.log("Executed Sucessfully");
// }

// sum(2, 4, success);

function f1(callback){
  alert(`How are you`);
  console.log(`Hello 2`);
  callback();
}

function call(){
  console.log(`Inside Callback`);
  alert(`Inside callback`);
}

console.log(`Hello 1`);
f1(call);
console.log(`Hello 3`);
