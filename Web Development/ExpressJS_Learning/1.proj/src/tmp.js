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
let item='oranges';
// const gItem=groceries.find((g)=> g.item === item)
const gItem=groceries.find((g)=>g.item===item)
console.log(gItem);
