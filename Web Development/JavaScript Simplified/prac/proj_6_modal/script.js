let modal = document.querySelector('#modal')
let open_btn = document.querySelector('#open-modal-btn')
let close_btn = document.querySelector('#close-modal-btn')
let overlay = document.querySelector('#overlay')

open_btn.addEventListener('click', () =>{
  modal.classList.add('open')
  overlay.classList.add('open')
})

close_btn.addEventListener('click', closeModal)

overlay.addEventListener('click', closeModal)

function closeModal(){
  modal.classList.remove('open')
  overlay.classList.remove('open')
}