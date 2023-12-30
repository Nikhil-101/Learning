const {Router} = require('express');
const router= Router();

router.get('/store/cart', (req, res)=>{
  const {cart} = req.session;
  // Checking Cart is present or not
  if(cart){
    const items = cart.items;
    console.log(items);
  }else{
    res.send('Cart is Empty');
  }
  res.send('Stored Items');
})

router.post('/store/cart', (req, res)=>{
  let {item, quantity}=req.body;
  const cartItem={item, quantity};
  console.log(cartItem);
  const {cart} = req.session;
  // Adding items to cart if it exits in Sessions
  if(cart){
    console.log('Cart is Present');
    req.session.cart.items.push(cartItem);
  }else{
    console.log('Cart is Empty');
    // Creating cart in session object -- Priority 0
    req.session.cart = {
      items: [cartItem]
    }
  }
  res.send('OK!!');
})

module.exports=router;