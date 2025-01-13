/** @type {HTMLDivElement} */
let inputSection = document.querySelector('.input-text')
/** @type {HTMLDivElement} */
let submitBtn = document.querySelector('.submit-btn')
/** @type {HTMLDivElement} */
let displayList = document.querySelector('.display-list')

let todoMemory = [];

const addEntry = (newValue) => {
    let newTodoDiv = document.createElement('div')
    let newTodoText = document.createElement('p')
    let newTodoBtn = document.createElement('button')
    newTodoBtn.innerText = 'Remove'
    newTodoBtn.addEventListener('click', (e) =>{
        console.log(e.target.parentElement);
        let removeEntry = Array.from(e.target.parentElement.parentElement.children).indexOf(e.target.parentElement);
        todoMemory.splice(removeEntry, 1)
        localStorage.setItem('TODOList', JSON.stringify(todoMemory))
        localStorage.removeItem(key)
        displayList.removeChild(e.target.parentElement)
        console.log('Deleted');
    })

    newTodoText.innerText = newValue

    newTodoDiv.appendChild(newTodoText)
    newTodoDiv.appendChild(newTodoBtn)
    displayList.appendChild(newTodoDiv)
}

const btnPressed = () => {
    let newValue = inputSection.value
    inputSection.value = ''
    if (newValue!='') {
        todoMemory.push(newValue)
        localStorage.setItem('TODOList', JSON.stringify(todoMemory))
    
        addEntry(newValue)
    }else{
        alert('Task Field is Empty');
    }
}

(function () {
    let loadedData = JSON.parse(localStorage.getItem('TODOList'))
    if (loadedData!=null) {
        todoMemory = loadedData
        console.log('Data Loaded');
        for (const entry of todoMemory) {
            addEntry(entry)
        }
    } else {
        console.log('No Data Found');
    }
})();

submitBtn.addEventListener('click', btnPressed)
