console.log('Started');

const clockFaceRef = document.querySelector('.clockFace')

const digiWatch = () => {
    let presentDate = new Date();
    let hour = presentDate.getHours();
    let min = presentDate.getMinutes();
    let sec = presentDate.getSeconds();

    clockFaceRef.innerText = `${hour}:${min}:${sec}`
}

const clockHeartRef = setInterval(() => {
    digiWatch();
}, 1000);

const digiWatchStop = () => {
    clearInterval(clockHeartRef);
}
