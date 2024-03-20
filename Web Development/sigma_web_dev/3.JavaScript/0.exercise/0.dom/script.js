console.log("Script Started");

let bodyArrow=document.body;

bodyArrow.firstElementChild.children[0].style.backgroundColor="grey";

document.querySelectorAll(".box").forEach(e=>{
  e.style.backgroundColor="grey";
})
