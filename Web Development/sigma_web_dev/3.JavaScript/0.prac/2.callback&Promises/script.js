console.log('Callback & Promises');

// Callback (passing a function)

let loadScript = (src, callback)=>{
  let script = document.createElement('script');
  script.src = src;
  script.onload = callback(script);
}

loadScript("http://www.google.com", (e)=>{
  console.log(e.src);
})


// Promise (prevents callback hell)

let p1 = new Promise((resolve, reject)=>{
  setTimeout(()=>{
    console.log('Promise Running!!!');
    resolve("Success!!!");
  }, 2000);
})

p1.then((para)=>{
  console.log(para);
})
