const {Router} = require('express');
const router=Router();

const groceries=[
  {
    item: 'carrot',
    quantity: 5
  },
  {
    item: 'apple',
    quantity: 10
  },
  {
    item: 'oranges',
    quantity: 7
  }
]


router.get('/', (req, res)=>{
  res.send(groceries);
})

router.get('/:item', (req, res)=>{
  let {item}=req.params;
  let searchItem=groceries.find((g)=> g.item===item);
  res.send(searchItem);
})

router.get('/shopping/cart', (req, res)=>{
  const {cart}=req.session;
  if(!cart){
    res.send('You have no Cart Session');
  }else{
    res.send(cart);
  }
})

router.post('/shopping/cart/item', (req, res)=>{
  const {item, quantity} = req.body;
  const cartItem= {item, quantity};
  const {cart}=req.session;
  if(cart){
    req.session.cart.items.push(cartItem);
  }else{
    req.session.cart ={
      items: [cartItem]
    }
  }
  res.sendStatus(201);
})

router.post('/', (req, res)=>{
  const groceryItem=req.body;
  groceries.push(groceryItem);
  res.send(groceries);
})

module.exports = router;
