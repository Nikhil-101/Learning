const express=require("express");
const https=require("https");
const bodyParser=require("body-parser")
const app=express();
const port=3000;

app.use(bodyParser.urlencoded({extended: true}))

app.get("/", (req, res) => {
    res.sendFile(`${__dirname}/index.html`);
});

app.post('/', (req, res) => {
    const city=req.body.cityName
    console.log(city);
    const key='21377d4942eeeab5eb00565723bf15e2';
    const units='metric';
    const url=`https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${key}&units=${units}`;
    https.get(url, (response) => {
            console.log(response.statusCode);
            response.on('data', (data) => {
                const weatherData=JSON.parse(data);
                console.log(weatherData);
                console.log(weatherData.main.temp);
                console.log(weatherData.weather[0].description);
                res.write(`<h1>The temperature at ${weatherData.name} is ${weatherData.main.temp} degree celcius.</h1>`);
                res.write(`<img src="http://openweathermap.org/img/wn/${weatherData.weather[0].icon}@2x.png">`);
                res.write(`<p>The weather is currently ${weatherData.weather[0].description}.</p>`);
                res.send();
            })
        }
    )
})

app.listen(port, () => {
    console.log(`Surver running on port: ${port}`);
});