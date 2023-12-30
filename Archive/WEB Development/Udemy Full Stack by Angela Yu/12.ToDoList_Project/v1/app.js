const express=require('express')
const dateM=require(`${__dirname}/date.js`);
const app=express()
const port=3001

let items=[]

app.listen(port, () => console.log(`Server is running at port: ${port}`))

app.use(express.urlencoded({extended: true}))
app.use(express.static('public'));
app.set('view engine', 'ejs')

app.get('/', (req, res) => {
    
    //here, using userMade modules named `dateM`
    res.render('list', {
        date: dateM.getDate(),
        newItems: items
    });
})

app.post('/', (req, res) => {
    items.push(req.body.userInput);
    res.redirect('/');
})


// History
// res.send('working!!!')
    // const days=['sunday', 'monday', 'tuesday', 'wednesday', 'thursday', 'friday', 'saturday']
    // const random=Math.floor(Math.random()*10)%6;
    // console.log(days[random]);
    // res.send('0'+random)

    // res.render('list', {day: days[random]})