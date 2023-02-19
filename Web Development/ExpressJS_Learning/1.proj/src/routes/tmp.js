const {Router} = require('express');
const router=Router();

router.get('/:user/posts/:postNum', (req, res)=>{
  const {user, postNum} = req.params;
  console.log(`${user}: ${postNum}`);
  res.sendStatus(200);
})

module.exports = router;
