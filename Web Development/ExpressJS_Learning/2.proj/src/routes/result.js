const { Router } = require('express');
const router=Router();
// Querry Params
router.get('/result', (req, res)=>{
  console.log(req.query);
  // Cookie
  res.cookie('Visited', true, {
    maxAge: 60000,
  })
  // Parsing Cookies
  console.log(req.headers.cookie);
  console.log(req.cookies);
  res.send('Success!!!')
})

module.exports = router;