const { Router } = require('express');
const router=Router();

const marketList=[
  {
    id: 1,
    name: 'Walmart',
    distance: 4
  },
  {
    id: 2,
    name: 'Reliance Store',
    distance: 2
  },
  {
    id: 3,
    name: 'Fresh Veggies',
    distance: 6
  }
];

router.get('/', (req, res)=>{
  res.cookie('visited', true, {
    maxAge: 100000
  });
  // console.log(req.headers.cookie);
  // console.log(req.cookies);
  const {distance}=req.query;
  const parseDistance=parseInt(distance);

  if(!isNaN(parseDistance)){
    res.send(marketList.filter((s)=>s.distance <= parseDistance));
  }else{
    res.send(marketList);
  }
})

router.get('/:store', (req, res)=>{
  console.log(req.cookies);
  let {store}=req.params;
  let foundStore=marketList.find((m)=> m.name===store);
  res.send(foundStore);
})

router.post('/', (req, res)=>{
  marketList.push(req.body);
  res.send(marketList);
  res.sendStatus(201);
})

module.exports = router;