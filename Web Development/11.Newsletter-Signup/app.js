const express=require('express')
const bodyParser=require('body-parser')
const port=3000
const app=express()

app.use(bodyParser.urlencoded({extended: true}))

app.get('/', (req, res) => {
    res.send("Running!!!")
})


app.listen(port, () => {
    console.log(`Server is running at port: ${port}`);
})