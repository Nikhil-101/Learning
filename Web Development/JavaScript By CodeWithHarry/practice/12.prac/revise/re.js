// console.log(`hello world`);
// let p1=new Promise((resolve, reject)=>{
//   console.log(`p1 1`);
//   console.log(`p1 2`);
//   console.log(`p1 3`);
//   console.log(`p1 4`);
//   console.log(`p1 5`);
//   setTimeout(()=>{
//     console.log(`Inside timeout under P1`);
//   }, 5000)
//   console.log(`after timeout P1`);
//   resolve(1);
// })

// let p2=new Promise((resolve, reject)=>{
//   console.log(`p2 1`);
//   console.log(`p2 2`);
//   console.log(`p2 3`);
//   setTimeout(()=>{
//     console.log(`Inside timeout under P2`);
//   }, 5000);
//   console.log(`after timeout P2`);
//   resolve(2);
// })

async function fun1(){
  console.log(`Starting fun1`);
  let ifun1= new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log(`inside fun1 settimeout 1`);
      resolve(`fun1_1`);
    }, 4000);
  })

  console.log(`inbetween both settimeout`);

  let ifun2=new Promise((resolve, reject)=>{
    setTimeout(() => {
      console.log(`inside fun1 settimeout 2`);
      resolve(`fun1_2`);
    }, 7000);
  })

  let a=await ifun1;
  let b=await ifun2;
  console.log(`end of fun1`);
  return [a, b];
}

async function fun2(){
  console.log(`starting fun2`);
  let jfun1=new Promise((resolve, reject)=>{
    setTimeout(() => {
      console.log(`inside fun2 settimeout 1`);
      resolve(`1fun2`);
    }, 2000);
  })
  console.log(`end of fun2`);
  let x=await jfun1;
  return [x];
}


fun1().then((value)=>{
  console.log(`function 1 resolved: ${value}`);
})

fun2().then((value)=>{
  console.log(`function 2 resolved: ${value}`);
})