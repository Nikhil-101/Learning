const express = require('express');
const cookieParser = require('cookie-parser');
const session = require('express-session')
const groceriesRoute = require('./routes/groceries');
const marketRoute = require('./routes/markets');
const app = express();
const PORT = 3000;

app.use(express.json());
app.use(express.urlencoded({extended: true}));
app.use(cookieParser());
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

app.use('/api/v1/grocery', groceriesRoute);
app.use('/api/v1/markets', marketRoute);

// console.log(`Hello World`);



app.listen(PORT, () => console.log(`Server running on port: ${PORT}`));
