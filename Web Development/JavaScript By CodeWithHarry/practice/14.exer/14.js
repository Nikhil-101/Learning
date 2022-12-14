console.log(`Hackerman Starting`);
let a=()=>{
  return new Promise((resolve, reject)=>{
    setTimeout(()=>{
      console.log(`Initializing hack program`);
      let h3Tag=document.createElement('h3');
      h3Tag.innerText="Initializing hack program";
      let node=document.querySelector("main");
      node.appendChild(h3Tag);
      resolve(1);
    }, 1000);
  })
}
function newh3Tag(msg){
  let h3Tag=document.createElement("h3");
  h3Tag.innerText=msg;
  // let ah3Tag=document.querySelectorAll("h3")    // all h3 tag
  // let arrh3Tag=Array.from(ah3Tag);
  // let length=arrh3Tag.length;
  // let finalTag=arrh3Tag[length-1];
  // finalTag.elem
  let mainTag=document.querySelector("main");
  mainTag.appendChild(h3Tag);
}
let b=()=>{
  return new Promise((resolve, reject)=>{
    setTimeout(()=>{
      console.log(`Hacking Akash username`);
      newh3Tag("Hacking Akash username");
      resolve(1);
    }, 1000);
  })
}
let c=()=>{
  return new Promise((resolve, reject)=>{
    setTimeout(()=>{
      console.log(`Username found akash69`);
      newh3Tag(`Username found akash69`);
      resolve(1);
    }, 1000);
  })
}
let d=()=>{
  return new Promise((resolve, reject)=>{
    setTimeout(()=>{
      console.log(`Connecting to Facebook`);
      newh3Tag(`Connecting to Facebook`);
      resolve(1);
    }, 1000);
  })
}
let e=()=>{
  return new Promise((resolve, reject)=>{
    setTimeout(()=>{
      console.log(`Facebook Hacking Successfull`);
      newh3Tag(`Facebook Hacking Successfull`);
      resolve(1);
    }, 1000);
  })
}

let run=async()=>{
  let r1=await a();
  let r2=await b();
  let r3=await c();
  let r4=await d();
  let r5=await e();
}

run();