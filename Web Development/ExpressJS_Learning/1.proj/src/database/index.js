const mongoose = require('mongoose');

mongoose.connect('mongodb://localhost:27017/expressJS')
  .then(()=> console.log('Connected to db'))
  .catch((err)=> console.log(err))