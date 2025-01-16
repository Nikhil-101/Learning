const stopWatchBtn = document.querySelector('.stopwatch');
const timerBtn = document.querySelector('.timer');
const displayDigitRef = document.querySelector('.displayDigits');
const btnContainerRef = document.querySelector('.btnContainer');

const playPauseBtn = document.createElement('button');
playPauseBtn.innerText = 'Start';
btnContainerRef.appendChild(playPauseBtn)
const resetBtn = document.createElement('button');
resetBtn.innerText = 'Reset'
btnContainerRef.appendChild(resetBtn);

let hour = 0, min = 0, sec = 0, totalSeconds = 0, stopWatchInterval, timerInterval;

const updateDisplay = () => {
    displayDigitRef.innerText = `${hour.toString().padStart(2, '0')}:${min.toString().padStart(2, '0')}:${sec.toString().padStart(2, '0')}`;
}

const resetDigits = () => {
    hour = 0, min = 0, sec = 0;
    updateDisplay();
    playPauseBtn.innerText = 'Start';
    totalSeconds = 0;
}


const stopWatchLogic = () => {
    playPauseBtn.addEventListener('click', ()=>{
        console.log('Play Pause Button Clicked');
        
        if (playPauseBtn.innerText == 'Start' || playPauseBtn.innerText == 'Play') {
            console.log('StopWatch Started');
            playPauseBtn.innerText = 'Pause';
            stopWatchInterval = setInterval(() =>{
                totalSeconds += 1000;
                let time = new Date(totalSeconds);
                hour = time.getUTCHours();
                min = time.getUTCMinutes();
                sec = time.getUTCSeconds();
                updateDisplay();
            }, 1000)
        }else{
            playPauseBtn.innerText = 'Play';
            clearInterval(stopWatchInterval);
        }
    })
    resetBtn.addEventListener('click', () => {
        resetDigits()
        // totalSeconds = 1000 * 60 * 25;
        clearInterval(timerInterval);
        clearInterval(stopWatchInterval);
    })
}

const timerLogic = () => {
    totalSeconds = 1000 * 60 * 25;
    playPauseBtn.addEventListener('click', () => {
        console.log('Play Pause Button Clicked');

        if (playPauseBtn.innerText == 'Start' || playPauseBtn.innerText == 'Play') {
            console.log('Timer Started');
            playPauseBtn.innerText = 'Pause';
            timerInterval = setInterval(() => {
                totalSeconds -= 1000;
                let time = new Date(totalSeconds);
                hour = time.getUTCHours();
                min = time.getUTCMinutes();
                sec = time.getUTCSeconds();
                updateDisplay();
            }, 1000)
        } else {
            playPauseBtn.innerText = 'Play';
            clearInterval(timerInterval);
        }
    })

    resetBtn.addEventListener('click', () => {
        resetDigits();
        totalSeconds = 1000 * 60 * 25;
        let time = new Date(totalSeconds);
        hour = time.getUTCHours();
        min = time.getUTCMinutes();
        sec = time.getUTCSeconds();
        updateDisplay();
        clearInterval(timerInterval);
        clearInterval(stopWatchInterval);
    })
}



const handleStopClick = ()=>{
    resetDigits();
    stopWatchLogic();
    stopWatchBtn.removeEventListener('click', handleStopClick);
}

stopWatchBtn.addEventListener('click', handleStopClick);

resetDigits()
// stopWatchLogic();

const handleTimerClick = ()=>{
    resetDigits();
    timerLogic();
    let time = new Date(totalSeconds);
    hour = time.getUTCHours();
    min = time.getUTCMinutes();
    sec = time.getUTCSeconds();
    updateDisplay();
    timerBtn.removeEventListener('click', handleTimerClick)
}
timerBtn.addEventListener('click', handleTimerClick)