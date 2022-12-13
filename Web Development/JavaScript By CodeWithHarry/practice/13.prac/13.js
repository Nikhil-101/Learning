console.log(`Practice Set: Promises`);
// Q-1: Program to load js with promises & use .then in it to display an alert
// let loadscript=(src)=>{
//   return new Promise((resolve, reject)=>{
//     console.log(`Starting loading`);
//     let script=document.createElement('script');
//     script.src=src;
//     script.onload=()=>{
//       setTimeout(() => {
//         console.log(`Script Loaded`);
//         resolve(`Done`);
//       }, 4000);
//     }
//     document.head.append(script); // TODO: find why this works with this line but not with its absence
//     script.onerror=()=>{
//       reject(new Error(`Cannot Load Script`))
//     }
//   })
// }

// let result=loadscript("https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.min.js");
// result.then((value)=>{
//   console.log(`Resolved: ${value}`);
// }, (error)=>{
//   console.log(`Error: ${error}`);
// })
// .catch((error)=>{
//   console.log(`Error: ${error}`);
// })

// Q-2: Do same as ques 1 but with async and await
// let loadscript=async (src)=>{
//   return new Promise((resolve, reject)=>{
//     let script=document.createElement('script');
//     script.src=src;
//     script.onload=()=>{
//       setTimeout(() => {
//         console.log(`Script Loaded`);
//         resolve(`Done`);
//       }, 4000);
//     }
//     document.head.append(script);
//     script.onerror=()=>{
//       reject(new Error('Script Not Loaded'));
//     }
//   })
// }

// let result=async ()=>{
//   let r= await loadscript("https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.min.js");
//   console.log(`Value is: ${r}`);
// }
// result();

// Q-3 Create a promise which rejects after 3 sec. use async & await to get the values and try and catch to handle its error
// let p=async()=>{
//   return new Promise((resolve, reject)=>{
//     console.log(`Starting`);
//     setTimeout(()=>{
//       try{
//         console.log(`Rejecting after 3 sec`);
//         reject(new Error(`Rejected`));
//       }catch(error){
//         console.log(`Error caught: ${error}`);
//       }
//     }, 3000)
//     setTimeout(()=>{
//       console.log(`Resolved`);
//       resolve(`Done`);
//     }, 2000);
//   })
// }

// let result=async()=>{
//   let r=await p();
//   console.log(`Result: ${r}`);
// }

// result();

// Q-4 Use promise.all inside async & await to await 3 promises & compare where we await them 1 by 1
let p1=()=>{
  return new Promise((resolve, reject)=>{
    setTimeout(() => {
      console.log(`inside p1`);
      resolve(`p1`);
    }, 4000);
  })
}

let p2=()=>{
  return new Promise((resolve, reject)=>{
    setTimeout(()=>{
      console.log(`inside p2`);
      resolve(`p2`);
    }, 2000);
  })
}

let p3=()=>{
  return new Promise((resolve, reject)=>{
    setTimeout(()=>{
      console.log(`inside p3`);
      resolve(`p3`);
    }, 3000);
  })
}

// let result=async()=>{
//   let r1=await p1();
//   console.log(r1);
//   let r2=await p2();
//   console.log(r2);
//   let r3= await p3();
//   console.log(r3);
// }

// result();

let P=Promise.all([p1(), p2(), p3()]);
P.then((value)=>{
  console.log(value);
})