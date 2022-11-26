// Practice Set CH-8
// Show alert when btn click
let fbtn=document.querySelector(".first-btn");
fbtn.addEventListener('click', ()=>{
  alert("You clicked first button");
})
let sbtn=document.querySelector(".second-btn");
sbtn.addEventListener('click', ()=>{
  alert("You clicked second button");
})

// Storing bookmarks of fav. website using eventListener
let btnArr=document.querySelector(".bookmark-js").getElementsByTagName("button");
btnArr[0].addEventListener('click', ()=>{
  window.location.href="https://www.google.com";
})

btnArr[1].addEventListener('click', ()=>{
  window.location.href="https://www.zoro.to";
})

// Fetching content of a website every 5 sec
// setInterval(()=>{
//   window.location.href="https://www.google.com"
  
// },5000);

let bulbDiv=document.querySelector(".bookmark-js")
setInterval(() => {
  bulbDiv.classList.toggle("red");
}, 200);