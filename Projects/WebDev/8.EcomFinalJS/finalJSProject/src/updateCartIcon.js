import { getLocalData } from "./getLocalData"

export const updateCartIcon = (cartBtn) => {
  const data = getLocalData().length;
  cartBtn.innerHTML = `&emsp;${data}`;
}