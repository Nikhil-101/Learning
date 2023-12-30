// let id = document.getElementById('div-id')
let id = document.querySelector('#div-id')
id.style.color='red'
console.log(id)

// let class1 = Array.from(document.getElementsByClassName('div-class'))
let class1 = document.querySelectorAll('.div-class')
class1.forEach(element => {
  console.log(element)
});

let data_attr = document.querySelector('[data-attr]')
console.log(data_attr)

let input = document.querySelector("body > input[type='text']")
console.log(input);