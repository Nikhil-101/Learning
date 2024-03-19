let num=5, arr=[];

function fact(arr){
  let ans=arr.slice(1, ).reduce((e1, e2)=> e1*e2 )
  return ans;
}

// for(let i=0; num>0; i++){
//   arr.push(num);
//   num--;
// }

// let ans=arr.reduce((e1, e2)=>{
//   return e1*e2;
// })
// console.log(ans);

// let key=Array(num).keys
// !Important -----------------------------------**********
let a=Array.from(Array(num+1).keys());
// ----------------------------------------------**********
console.log(fact(a));
// console.log(a);
