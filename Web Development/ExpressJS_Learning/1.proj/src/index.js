const express = require('express');
const cookieParser = require('cookie-parser');
const session = require('express-session')
const groceriesRoute = require('./routes/groceries');
const marketRoute = require('./routes/markets');
const tmpRoute=require('./routes/tmp');
const tmp2Route=require('./routes/tmp2');
const sessionRoute=require('./routes/session');
const authRoute=require('./routes/auth');
const app = express();
const PORT = 3000;
require('./database')

app.use(express.json());
app.use(express.urlencoded({extended: true}));
app.use(cookieParser());
// app.use(mongoose.connect('mongodb://username:password@localhost:27017/expressJS_tutorial'))
app.use((req, res, nxt)=>{
  console.log(`First Middleware`);
  nxt();
})
app.use(
  session({
    secret: 'RIFKJGALNEUPAALKJCNRHGAFHKJK',
    resave: false,
    saveUninitialized: false
}))

app.use('/api/v1/auth', authRoute);   // Authenticate user login

app.use((req, res, nxt)=>{      // Check if user is logged in
  if (req.session.user) {
    nxt();
  }else{
    res.sendStatus(401);
  }
})

app.use((req, res, nxt)=>{
  console.log(`Authorised access: ${req.session.user}`);
  nxt();
})

app.use('/api/v1/grocery', groceriesRoute);
app.use('/api/v1/markets', marketRoute);
app.use('/tmp', tmpRoute);
app.use('/api/tmp/', tmp2Route);
app.use('/api/session/', sessionRoute);
app.use((req, res, nxt)=>{
  console.log(`${req.method}: ${req.url}`);
  nxt();
})

// console.log(`Hello World`);



app.listen(PORT, () => console.log(`Server running on port: ${PORT}`));
