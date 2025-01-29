export const getLocalData = () => {
   // load Local Storage
  const localData = JSON.parse(localStorage.getItem('storeCartList')) || [];
  // returns the data
  return localData;
}