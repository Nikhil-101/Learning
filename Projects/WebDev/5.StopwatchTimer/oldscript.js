console.log('started');

const pausePlayBtn = document.createElement('button');
const resetBtn = document.createElement('button');
const displayDigitRef = document.querySelector('.displayDigits');
const btnContainerRef = document.querySelector('.btnContainer');

let hour = 0;
let min = 0;
let sec = 0;
let secInterval, minInterval, hourInterval;


const resetDigits = () => {
    hour = 0;
    min = 0;
    sec = 0;
    displayDigitRef.innerText = `${hour}:${min}:${sec}`
}

const updateDigitsSW = () => {
    if (hour == 60) {
        hour = 0;
    }
    if (min == 60) {
        min = 0;
    }
    if (sec == 60) {
        sec = 0;
    }
    displayDigitRef.innerText = `${hour}:${min}:${sec}`
}

const updateDigitsT = () => {
    
}

const clearIntervalFunc = () => {
    pausePlayBtn.innerText = 'Play';
    clearInterval(secInterval);
    clearInterval(minInterval);
    clearInterval(hourInterval);
}

pausePlayBtn.innerText = 'Start';
btnContainerRef.appendChild(pausePlayBtn);
pausePlayBtn.addEventListener('click', ()=>{
    if (pausePlayBtn.innerText == 'Play' || pausePlayBtn.innerText == 'Start') {
        
        pausePlayBtn.innerText = 'Pause'
        secInterval = setInterval(() => {
            sec += 1;
            updateDigitsSW();
        }, 1000);
        minInterval = setInterval(() => {
            min += 1;
        }, 60000);
        hourInterval = setInterval(() => {
            hour += 1;
        }, 3600000);
    }else{
        console.log('Paused');
        clearIntervalFunc();
    }
})

resetBtn.innerText = 'Reset';
btnContainerRef.appendChild(resetBtn);
resetBtn.addEventListener('click', () => {
    console.log('Stopped');
    
    resetDigits();
    clearIntervalFunc();
})


resetDigits()