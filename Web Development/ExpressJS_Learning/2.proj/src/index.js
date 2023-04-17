const express = require('express');
const app=express();
// Importing Routes
const studHome = require('./routes/students');
const studResult = require('./routes/result');
const schoolStore = require('./routes/store');
const auth = require('./routes/auth');
// Importing Middleware
const cookieParser = require('cookie-parser');
const session = require('express-session')

const PORT=3000;

// mongoose.connect('mongodb://username:passkey@localhost:27017/');
require('./database');

// Middleware Section
app.use((req, res, nxt)=>{
  console.log('First Middleware Called!!!');
  nxt();
})

app.use(express.json());
app.use(cookieParser());
app.use(session({
  secret: 'ALKJJBAJLKGA;,.,.//JKJKLA33729JLAKJDBBNN',
  resave: false,
  saveUninitialized: false
}))
// Special Case
// Used for Authentication
app.use('/api/v1/school/', auth);
// Used for Protecting rest of the Middleware's
app.use((req, res, nxt)=>{
  if(req.session.user){
    nxt();
  }else{
    res.sendStatus(401);
  }
})

// Routes Middleware
app.use('/api/v1/school/', studHome);
app.use('/api/v1/school/', studResult);
app.use('/api/v1/school/', schoolStore);



app.listen(PORT, ()=>console.log(`Server Running at: ${PORT}`));