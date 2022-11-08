const express=require("express");
const bodyParser=require("body-parser");
const app=express();
const port=3000;

app.listen(port, () => {
    console.log(`Server running at port ${port}`);
})

app.use(bodyParser.urlencoded({extended: true}));

app.get('/', (req, res) => {
    res.sendFile(`${__dirname}/index.html`);
})

app.post('/', (req, res) => {
    let weight=Number(req.body.w);
    let height=Number(req.body.h);
    
    res.send(`BMI value is: ${weight/height}`);
})