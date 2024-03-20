console.log("Script Started");

let bodyArrow=document.body;

bodyArrow.firstElementChild.children[0].style.backgroundColor="grey";

document.querySelectorAll(".box").forEach(e=>{
  e.style.backgroundColor="grey";
})

// Create an element
let div = document.createElement("div");
div.innerHTML="<h2>Heading 2</h2>";
document.body.appendChild(div);
