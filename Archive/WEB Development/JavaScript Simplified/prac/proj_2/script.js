// let btn = document.querySelector('[data-btn]')
// console.log(btn);

// btn.addEventListener('click', ()=>{
//   console.log('Clicked');
// })

let form = document.querySelector('[data-form]')
form.addEventListener('submit', e =>{
  e.preventDefault()
  console.log('Form Submitted');
})

let anchor = document.querySelector('a')
anchor.addEventListener('click', e =>{
  e.preventDefault()
  console.log('Link Clicked');
})