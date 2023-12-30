// Practice Set

// Create a navbar
// let navbarList=document.body.querySelector(".nav-ul");
let navbarList=document.body.querySelector(".nav-ul").querySelectorAll("li");
navbarList[0].style.color="red";

let headerTag=document.querySelector(".header-tag");
headerTag.firstElementChild.style.color="green";
headerTag.lastElementChild.style.color="green";

let liTags=document.querySelectorAll("li");
for(let element of liTags){
    element.style.background="cyan";
}
