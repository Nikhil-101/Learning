const inputDataRef = document.getElementById('input-field')
// const cityNameRef = document.getElementsByClassName('city-name')
const cityNameRef = document.querySelector('.city-name')
const syncTimeRef = document.querySelector('.sync-time')
const weatherStatusRef = document.querySelector('.weather-status')
const weatherImgRef = document.querySelector('.weather-img')
const currentTmpRef = document.querySelector('.current-temp')
const minTmpRef = document.querySelector('.min-temp')
const maxTempRef = document.querySelector('.max-temp')
const feelImgRef = document.querySelector('.feel-img')
const feelValueRef = document.querySelector('.feel-value')
const humidValueRef = document.querySelector('.humid-value')
const windValueRef = document.querySelector('.wind-value')
const pressureValueRef = document.querySelector('.pressure-value')
const apiKey = '21377d4942eeeab5eb00565723bf15e2';
let data;

console.log("Started");

const displayResult = () =>{
    cityNameRef.innerText = `${data.name}, ${data.sys.country}`;
    let date = new Date();
    syncTimeRef.innerText = date.toUTCString();
    // console.log(`${data.name}, ${data.sys.country}`);
    weatherStatusRef.innerText = data.weather[0].main;
    // weatherImgRef
    currentTmpRef.innerText = data.main.temp;
    minTmpRef.innerText = data.main.temp_min;
    maxTempRef.innerText = data.main.temp_max;
    
    feelValueRef.innerText = data.main.feels_like;
    humidValueRef.innerText = data.main.humidity;
    windValueRef.innerText = data.wind.speed;
    pressureValueRef.innerText = data.main.pressure;

    console.log('Query Ended');
}

const fetchData = async (cityName) => {
    const apiURL = `https://api.openweathermap.org/data/2.5/weather?q=${cityName}&appid=${apiKey}`
    const res = await fetch(apiURL, {
        headers: {
            Accept: 'application/json',
        },
    });
    data = await res.json();
    displayResult()
}

const enterData = () => {
    console.log(inputDataRef.value);
    fetchData(inputDataRef.value);
}

inputDataRef.addEventListener('keyup', (e)=>{
    if(e.key === 'Enter'){
        console.log('Enter key pressed!');
        enterData();
    }
})

fetchData('delhi');