// Select all elements
let form = document.querySelector('#new-item-form')
let list = document.querySelector('#list')
let input = document.querySelector('#item-input')

form.addEventListener('submit', e =>{
  e.preventDefault()
  let item = document.createElement('div')
  item.innerText = input.value;
  item.classList.add('list-item')

  list.appendChild(item)

  input.value = ''

  item.addEventListener('click', e =>{
    list.removeChild(item)
  })
})
