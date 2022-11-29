//Promise API

let P1=new Promise((resolve, reject)=>{
  setTimeout(()=>{
    resolve(1);
  }, 1000)
})

let P2=new Promise((resolve, reject)=>{
  setTimeout(()=>{
    // resolve(2);
    reject(new Error(`Error Occured`));
  }, 2000)
})

let P3=new Promise((resolve, reject)=>{
  setTimeout(()=>{
    resolve(3);
  }, 3000)
})

// P1.then(()=>{
//   console.log(`P1 resolved`);
// })
// P2.then(()=>{
//   console.log(`P2 resolved`);
// })
// P3.then(()=>{
//   console.log(`P2 resolved`);
// })

// 1-> If all Promises Resolved only then this Promise is Resolved
// let P=Promise.all([P1, P2, P3]);
// P.then((value)=>{
//   console.log(value);
// })

// 2-> To get the final Promise to run with their status to show in its value
// let P=Promise.allSettled([P1, P2, P3]);
// P.then((value)=>{
//   console.log(value);
// })

// 3-> Show the value of the Promise that is finished First of given array of Promises
// but error if the first completed Promise returns an error or reject
// let P=Promise.race([P1, P2, P3]);
// P.then((value)=>{
//   console.log(value);
// })

// 4-> Show the value of any Promise that is Resolved first and ignore any rejection if returns first
let P=Promise.any([P1, P2, P3]);
P.then((value)=>{
  console.log(value);
})

// 5-> 