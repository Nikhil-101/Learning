// Routers
const {Router} = require('express');
const router = Router();

router.get('/home', (req, res)=>{
  res.send('School Students Home Page')
  console.log(req.cookies);
})
// Route Params
router.get('/home/class/:classNum', (req, res)=>{
  const {classNum} = req.params;
  console.log(classNum);
  res.send(classNum);
})

module.exports=router;