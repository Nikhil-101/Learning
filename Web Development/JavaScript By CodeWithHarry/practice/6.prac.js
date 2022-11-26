// Creating a new Element Node
let last_text=document.querySelector("footer");
let new_Element=document.createElement("div");
new_Element.innerHTML="<h2>Good Bye</h2>";
last_text.before(new_Element);

// setTimeout(()=>{
//     console.log("Inside setTimeout");
// }, 4000);

// setInterval(()=>{
//     console.log("Inside setInterval");
// }, 4000);