const { Router }= require('express');
const User= require('../database/schemas/user');
const { hashPassword }= require('../utils/helper');

const router=Router();

router.get('/login', (req, res)=>{
  let {user, password}=req.body;
  if (user && password) {
    if(req.session.user){
    }else{
      req.session.user=user;
    }
    res.send(req.session);
  }else{
      res.sendStatus(401);
    }
})

router.post('/register', async (req, res)=>{
  const {username, email}=req.body;
  const userDB= await User.findOne({$or: [ {username}, {email} ]});
  if(userDB){
    res.sendStatus(400);
  }else{
    const password = hashPassword(req.body.password);
    console.log(`Hashed Pass: ${password}`);
    const newUser = await User.create({ username, password, email });
    res.sendStatus(201);
  }
})

module.exports=router;