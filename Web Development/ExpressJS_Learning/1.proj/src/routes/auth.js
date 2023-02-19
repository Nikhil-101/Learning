const { Router }= require('express');
const router=Router();

router.get('/login', (req, res)=>{
  let {user, password}=req.body;
  if (user && password) {
    if(req.session.user){
      // res.send('Logged in Successfull');
    }else{
      req.session.user=user;
      // res.send('Login Successfull');
    }
    res.send(req.session);
  }else{
      res.sendStatus(401);
    }
})

module.exports=router;