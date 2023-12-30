const mongoose = require('mongoose');
// mongoose.connect('mongodb://username:passkey@localhost:27017/');
mongoose
  .connect('mongodb://localhost:27017/school')
  .then(()=> console.log('Connected to DB'))
  .catch((err)=> console.log(err));