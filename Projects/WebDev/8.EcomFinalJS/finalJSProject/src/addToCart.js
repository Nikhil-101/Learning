import { findData } from "./findLocal";
import { getLocalData } from "./getLocalData";
import { saveLocalData } from "./saveLocalData";

export const addToCart = (event, id) =>{
  // load necessary references
  const productBox = event.target.parentNode;
  const productQuantityRef = productBox.querySelector('.product-quantity');

  const quantityNum = Number(productQuantityRef.innerText);

  // load Local Storage
  const localData = getLocalData()

  // Search for Already present entry
  let productFound = findData(id, localData)

  // if found increment local storage by user quantity
  if (productFound) {
    localData.at(productFound).productQuantity += quantityNum;
  }

  // entry not found in localStorage. So, create a new entry
  else{
    const obj = {
      id: id,
      productQuantity: quantityNum,
    }
    localData.push(obj)
  }

  // save data into localStorage
  saveLocalData(localData);
  // localStorage.setItem('storeCartList', JSON.stringify(localData));
}