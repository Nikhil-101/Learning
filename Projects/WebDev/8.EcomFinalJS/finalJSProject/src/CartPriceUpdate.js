import { getLocalData } from "./getLocalData";
import { saveLocalData } from "./saveLocalData";

export const cartPriceUpdate = (productPriceRef, products, productIndex, localIndex, productQuantityRef) => {
  let localData = getLocalData();
  localData[localIndex].productQuantity = Number(productQuantityRef.innerText);
  saveLocalData(localData);
  productPriceRef.innerText = (Number(products[productIndex].price) * Number(localData[localIndex].productQuantity)).toFixed(2);
}