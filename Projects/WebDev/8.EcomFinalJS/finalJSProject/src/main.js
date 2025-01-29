import './style.css';
import products from "../api/products.json";
import { incDecFun } from './incDec';
import { addToCart } from './addToCart';
import { updateCartIcon } from './updateCartIcon';

// load necessary references
const productListRef = document.querySelector('.selling-product-list');
const templateRef = document.getElementById("template-product");
const cartBtn = document.querySelector('.cart-btn');

products.forEach((product)=>{
  // dynamically cards are created
  const clone = templateRef.content.cloneNode(true);
  // load necessary references
  const productCategoryRef = clone.querySelector('.product-category');
  const productImgRef = clone.querySelector('.product-img');
  const productNameRef = clone.querySelector('.product-name');
  const productDescriptionRef = clone.querySelector('.product-description');
  const productPriceRef = clone.querySelector('.product-price');
  const actualPriceRef = clone.querySelector('.actual-price');
  const stocksNumRef = clone.querySelector('.stocks-num');
  const incDecBtnRef = clone.querySelector('.inc-dec-btn');
  const incrementBtnRef = clone.querySelector('.inc-btn');
  const productQuantityRef = clone.querySelector('.product-quantity');
  const decrementBtnRef = clone.querySelector('.dec-btn');
  const addCartBtnRef = clone.querySelector('.add-cart-btn');
  
  // values are assigned to cards from an api
  productCategoryRef.innerText = product.category;
  productImgRef.src = product.image;
  productNameRef.innerText = product.name;
  productDescriptionRef.innerText = product.description;
  productPriceRef.innerText = `₹${product.price}`;
  actualPriceRef.innerText = `₹${(Number(product.price)*3).toFixed(2)}`;
  stocksNumRef.innerText = product.stock;

  // '+' & '-' btns are configured for clicks
  incDecBtnRef.addEventListener('click', (event)=>{
    // preventing clicking btn reloading current page
    event.preventDefault();
    incDecFun(event, product.id, product.stock);
  })
  
  // 'Add to Cart' btn is configured for click
  addCartBtnRef.addEventListener('click', (event)=>{
    event.preventDefault();
    addToCart(event, product.id);
    updateCartIcon(cartBtn);
  })

  
  // insert new card into the flow of the document
  productListRef.appendChild(clone);
})
// cartIcon.addEventListener('click', (event)=>{
//   event.preventDefault();
// })

updateCartIcon(cartBtn);