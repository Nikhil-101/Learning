import { findData } from "./findLocal";
import { getLocalData } from "./getLocalData";
import products from '../api/products.json';

export const cartBill = (cartSubTotal, cartTax, cartTotal) =>{
  let localData = getLocalData();
  let tax = 0;
  let totalPayment = localData.reduce((accu, product) => {
    tax += 25;
    let index = findData(product.id, products);
    return accu += Number(products[index].price) * Number(product.productQuantity);
  }, 0);
  cartSubTotal.innerText = totalPayment.toFixed(2);
  cartTax.innerText = tax;
  cartTotal.innerText = (totalPayment + tax).toFixed(2);
}