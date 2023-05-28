let btns = document.querySelectorAll('button')

btns.forEach(btn =>{
  btn.addEventListener('click', e =>{
    let currentClick = parseInt(btn.dataset.clicks)
    btn.dataset.clicks = currentClick + 1
  })
})


