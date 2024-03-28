console.log('Event Handling');

let btnEvent=document.querySelector('.btn');

btnEvent.addEventListener('click', ()=>{
  document.querySelector('.child').innerHTML='Namaste Dunia!!!';
})

let inc = 1;
let text = btnEvent.innerHTML;

// -------------------------
setInterval(() => {
  btnEvent.innerHTML=`${text} ${inc}`;
  inc++;
}, 1000);

// -------------------------
setTimeout(() => {
  let newDiv = document.createElement('div');
  newDiv.innerText = "Loading...";
  document.querySelector('.child').after(newDiv);
}, 5000);
