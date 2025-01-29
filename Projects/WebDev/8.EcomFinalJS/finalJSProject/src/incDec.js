export const incDecFun = (event, id, stock) =>{
  // load necessary referances
  const productBoxRef = event.target.parentNode.parentNode;
  const productQuantityRef = productBoxRef.querySelector('.product-quantity');
  
  // quantity loaded & converted to numbers
  let quantityNum = Number(productQuantityRef.innerText);

  // checked trigger for '+' btn
  if (event.target.className === 'inc-btn' && quantityNum < Number(stock)) {
    quantityNum += 1;
  }
  // checked trigger for '-' btn
  else if(event.target.className === 'dec-btn' && quantityNum > 1){
    quantityNum -= 1;
  }
  // updated value of quantity after incr or decr
  productQuantityRef.innerText = quantityNum;
}