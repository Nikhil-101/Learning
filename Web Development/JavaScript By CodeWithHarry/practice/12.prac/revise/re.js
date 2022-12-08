console.log(`hello world`);
let p1=new Promise((resolve, reject)=>{
  console.log(`Promise`);
  // resolve(`hello`);
  console.log(`Rejection`);
  reject(new Error(`Raising Error`));
})

// p1.then((value)=>{
//   console.log(value);
// })
// .catch((error)=>{
//   console.log(`some error occured`);
// })

p1.then((value)=>{
  console.log(`success`);
}, (err)=>{
  console.log(`error`);
})