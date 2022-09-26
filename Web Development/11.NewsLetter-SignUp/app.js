const express = require('express')
const https = require('https')
const app = express()
// use this on local machine
// const port=3001
// used for online website deployment
const port = process.env.port

app.use(express.static('public'))
app.use(express.urlencoded({ extended: true }))
// app.use(express.json())

app.get('/', (req, res) => {
    res.sendFile(`${__dirname}/signup.html`)
})

app.post('/', (req, res) => {
    // console.log(req.body);
    const firstName = req.body.fname;
    const lastName = req.body.lname;
    const email = req.body.email;
    // Configuring data according to the API's way
    const data = {
        members: [
            {
                email_address: email,
                status: "subscribed",
                merge_fields: {
                    FNAME: firstName,
                    LNAME: lastName,
                },
            }
        ]
    };
    const jsonData = JSON.stringify(data);    // Data ready to be sent
    const url = 'https://us17.api.mailchimp.com/3.0/lists/e2bef3f389'
    // const aptKey='2983871e9b4b3493ee7260e1fbe45724-us17'
    const options = {
        method: 'POST',
        auth: 'nikhil:2983871e9b4b3493ee7260e1fbe45724-us17'
        // auth: 'nikhil:2983871e9b4b3493ee7260e1fbe457-us17'
    }
    const request = https.request(url, options, (responce) => {
        if (responce.statusCode === '200') {
            res.sendFile(`${__dirname}/success.html`)
        } else {
            res.sendFile(`${__dirname}/failure.html`)
        }
        responce.on("data", (data) => {
            console.log(JSON.parse(data));
        })
    })
    request.write(jsonData)
    request.end()
})

app.post('/failure', (req, res) => {
    //this is also correct
    // res.sendFile(`${__dirname}/signup.html`
    res.redirect('/')
})

app.listen(port, () => console.log(`Server running at port: ${port}.`))

// Unique ID for audiance
// e2bef3f389

// API key
// 2983871e9b4b3493ee7260e1fbe45724-us17