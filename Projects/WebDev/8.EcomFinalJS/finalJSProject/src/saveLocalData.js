export const saveLocalData = (localData) => {
  localStorage.setItem('storeCartList', JSON.stringify(localData));
}