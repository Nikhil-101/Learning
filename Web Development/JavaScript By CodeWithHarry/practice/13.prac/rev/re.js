console.log(`starting revision`);
let p1= ()=>{
  return new Promise((resolve, reject)=>{
    console.log(`starting p1`);
    setTimeout(()=>{
      console.log(`inside p1 setimeout`);
      resolve(`p1`);
    }, 5000);
    console.log(`ending p1`);

  })
}

let p2= ()=>{
  return new Promise((resolve, reject)=>{
    console.log(`starting p2`);
    setTimeout(()=>{
      console.log(`inside p2 setimeout`);
      resolve(`p2`);
    }, 5000);
    console.log(`ending p2`);
  })
}

let run=async()=>{
  p1().then((value)=>{
    console.log(value);
  })
  p2().then((value)=>{
    console.log(value);
  })
}

run();



