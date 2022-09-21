const express=require("express")
const bodyParser=require('body-parser')
const https=require('https')
// const { response } = require("express")
const app=express()
const port=3000

app.use(bodyParser.urlencoded({extended: true}));

app.get('/', (req, res) => {
    res.sendFile(`${__dirname}/index.html`)
})

app.post('/', (req, res) => {
    const cityLocation=req.body.cityName
    const apiKey='21377d4942eeeab5eb00565723bf15e2'
    const units='metric'
    const url=`https://api.openweathermap.org/data/2.5/weather?q=${cityLocation}&appid=${apiKey}&units=${units}`
    https.get(url, (response) => {
        console.log(`Status Code: ${response.statusCode}`);
        response.on('data', (data) => {
            // console.log(data);
            const weatherData=JSON.parse(data);
            // console.log(jsonData);
            const cityTemp=weatherData.main.temp;
            const weatherDescription=weatherData.weather[0].description
            const weatherIcon=weatherData.weather[0].icon
            console.log(cityTemp + cityLocation + weatherDescription + weatherIcon);
            res.write(`<h1>Weather Status</h1>`);
            res.write(`<p>Temperature at ${cityLocation} is ${cityTemp} degree celcius with ${weatherDescription}</p>`);
            res.write(`<img src="https://openweathermap.org/img/wn/${weatherIcon}@2x.png">`);
            res.send();
        })
    })
})

app.listen(port, () => {
    console.log(`Server is running on ${port} port.`);
})