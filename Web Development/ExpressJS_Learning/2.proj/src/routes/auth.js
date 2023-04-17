const {Router} = require('express');
const User=require('../database/schemas/User')
const router=Router();

router.post('/auth/signin', (req, res)=>{
  let {username, passkey} = req.body;
  if(username, passkey){
    if(req.session.user){
      res.send(req.session.user);
    }else{
      req.session.user=username;
      res.send(req.session);
    }
  }else{
    res.sendStatus(401);
  }
})

router.post('/auth/signup', (req, res)=>{
  const {username, passkey, email}=req.body;

})
module.exports=router;