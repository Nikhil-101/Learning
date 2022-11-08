const express=require("express");
const app=express();
const port=3000;

app.get('/', (req, res) => {
    // console.log(req);
    res.send('<h1>Hello World!!!</h1>');
})

app.get('/contact', (req, res) => {
    res.send('Contact me at: nikhil@gmail.com');
})

app.get('/about', (req, res) => {
    res.send('Hello there, my name is Nikhil Dhiman.');
})

app.listen(port, () => {
    console.log(`Express server listening at ${port}`);
});