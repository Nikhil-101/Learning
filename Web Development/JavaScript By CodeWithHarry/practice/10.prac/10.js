// Promises - Solution to CallBack Hell & Pyramid of Hell
let p1=new Promise((resolve, reject)=>{
  let a=prompt(`enter p1`);
  resolve(a);
})
let p2=new Promise((resolve, reject)=>{
  let b=prompt(`enter p2`);
  reject(new Error(`Error Occured`));
})

p1.then((value)=>{
  console.log(value);
})
p2.then((value)=>{
  console.log(value);
})
p2.catch((error)=>{
  console.log(error);
})

// let p = new Promise((resolve, reject)=>{
//   console.log(`Promise is pending`);
//   setTimeout(()=>{
//     console.log(`Promise is not fulfilled`);
//     resolve(true);
//     // reject(new Error(`Promise is Rejected`));
//   }, 5000);
// })
// p.then((value)=>{
//   console.log(`Inside p then: ${value}`);
// })