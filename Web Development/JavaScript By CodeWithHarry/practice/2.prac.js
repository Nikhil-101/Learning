// JavaScript in Browser 1
console.log(document);
// Use for checking the speed or time taken by any piece of code
console.time("for loop");
for(let i=0; i<100000; i++){
    
}

console.timeEnd("for loop");
// Alert
alert("Enter value!!!");
// Prompt with Default value 20
const a=prompt("Enter a: ", "20");
console.log(a);
// Confirm
const ques=confirm("Do you agree??");
console.log(ques==true?"You agree":"You Disagree");
