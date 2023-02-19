const {Router}=require('express');
const router=Router();

router.get('/', (req, res)=>{
  console.log('testing');
  const {distance}=req.query;
  console.log(distance);
  if(!isNaN(distance)){
    console.log('is a number');
  }
  res.cookie('firstCookie', 'true', {
    maxAge: 30000,
  })
  console.log(req.headers);
  console.log(req.cookies);
  res.send('Testing OK');
})

module.exports = router;