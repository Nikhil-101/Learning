const periodicBodyRef = document.querySelector(".ptable-body")

let elementNum = 50
let limit = Array.from(Array(elementNum))

for (let key in limit) {
    const elementDiv = document.createElement("div")
    const elementPara = document.createElement("p")
    
    elementDiv.classList.add("element-div")
    elementPara.classList.add("element-para")
    
    elementPara.innerText = `Elem${+key+1}`

    periodicBodyRef.appendChild(elementDiv)
    elementDiv.appendChild(elementPara)
}

periodicBodyRef.addEventListener('click', (e)=>{
    const elementRef = e.target;
    let elementNum = elementRef.innerText
    if (isNaN(elementNum.at(-2))){
        elementNum = elementNum.slice(-1)
    }
    else{
        elementNum = elementNum.slice(-2)
    }
    console.log(`Atomic No: ${elementNum}`)
    console.log(`Element name: ${e.target.innerText}`)
})