import './style.css';
import products from "../api/products.json";

console.log('Started')


const productListRef = document.querySelector('.selling-product-list');
const templateRef = document.getElementById("template-product");

products.forEach((product)=>{
  const clone = templateRef.content.cloneNode(true);
  const productCategoryRef = clone.querySelector('.product-category');
  const productImgRef = clone.querySelector('.product-img');
  const productNameRef = clone.querySelector('.product-name');
  const productDescriptionRef = clone.querySelector('.product-description');
  const productPriceRef = clone.querySelector('.product-price');
  const actualPriceRef = clone.querySelector('.actual-price');
  const stocksNumRef = clone.querySelector('.stocks-num');
  // Product increment and decrement btns
  const addCartBtnRef = clone.querySelector('.add-cart-btn');

  productCategoryRef.innerText = product.category;
  productImgRef.src = product.image;
  productNameRef.innerText = product.name;
  productDescriptionRef.innerText = product.description;
  productPriceRef.innerText = `₹${product.price}`;
  actualPriceRef.innerText = `₹${(Number(product.price)*3).toFixed(2)}`;
  stocksNumRef.innerText = product.stock;

  productListRef.appendChild(clone);
})





console.log(products);
console.log('Ended');


// let clone = 