import './style.css';
import products from "../api/products.json";
import { updateCartIcon } from './updateCartIcon';
import { getLocalData } from './getLocalData';
import { findData } from './findLocal';
import { incDecFun } from './incDec';
import { cartPriceUpdate } from './CartPriceUpdate';
import { deleteLocalData } from './deleteLocalData';
import { cartBill } from './cartBill';
import { showToast } from './showToast';

// load necessary references
const cartListRef = document.querySelector('.product-list');
const templateBoxRef = document.querySelector('.template-box');
const cartBtn = document.querySelector('.cart-btn');
const cartSubTotal = document.querySelector('.sub-total-num');
const cartTax = document.querySelector('.tax-num');
const cartTotal = document.querySelector('.bill-total');
let localData = getLocalData();
const toastTemplateRef = document.querySelector('.toast-template');

// load all cart Products from localStorage
localData.forEach((product, lindex) => {
  // Dynamically create Product Cards
  const clone = templateBoxRef.content.cloneNode(true);

  // load necessary references from template
  const productCategoryRef = clone.querySelector('.product-category');
  const productImgRef = clone.querySelector('.product-img');
  const productNameRef = clone.querySelector('.product-name');
  const productPriceRef = clone.querySelector('.product-price');
  const incDecBtnRef = clone.querySelector('.inc-dec-btn');
  const productQuantityRef = clone.querySelector('.product-quantity');
  const removeBtnRef = clone.querySelector('.remove-product');

  let index = findData(product.id, products);

  productCategoryRef.innerText = products[index].category;
  productImgRef.src = products[index].image;
  productImgRef.alt = products[index].name;
  productNameRef.innerText = products[index].name;
  productPriceRef.innerText = Number(products[index].price) * Number(product.productQuantity);
  productQuantityRef.innerText = product.productQuantity;

  incDecBtnRef.addEventListener('click', (event) => {
    event.preventDefault();
    incDecFun(event, product.id, products[index].stock);
    cartPriceUpdate(productPriceRef, products, index, lindex, productQuantityRef);
    cartBill(cartSubTotal, cartTax, cartTotal);
  })

  removeBtnRef.addEventListener('click', (event)=>{
    event.preventDefault();
    showToast(document.body, toastTemplateRef);
    event.target.parentNode.remove();
    deleteLocalData(product.id);
    updateCartIcon(cartBtn);
    cartBill(cartSubTotal, cartTax, cartTotal);
  })
  
  cartListRef.appendChild(clone);
});

updateCartIcon(cartBtn);
cartBill(cartSubTotal, cartTax, cartTotal);