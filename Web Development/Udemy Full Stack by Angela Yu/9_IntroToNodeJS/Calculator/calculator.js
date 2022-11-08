const express=require("express");
const bodyParser=require("body-parser");
const app=express();
const port=3000;

app.use(bodyParser.urlencoded({extended: true}));

app.listen(port, () =>{
    console.log(`Server running at port: ${port}`);
})

app.get('/', (req, res) =>{
    // res.send("<h1>Calculator Web Application</h1>");
    res.sendFile(`${__dirname}/index.html`);
})

app.post('/', (req, res) => {
    let n1=Number(req.body.num1);
    let n2=Number(req.body.num2);

    res.send(`The sum is: ${n1+n2}`);
    // res.send("Thanku for your corporation!!!");
})