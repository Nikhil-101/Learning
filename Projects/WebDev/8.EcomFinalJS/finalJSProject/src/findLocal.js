export const findData = (id, data) =>{
  // index of the matched product
  let index;

  const found = data.some((element, eindex)=>{
    index = eindex;
    return element.id === id;
  })
  // returns false if product not found
  if (!found) {
    index = false;
    return false;
  }

  // return index of the matched product
  return index;
}