// Async -> Runs code parallely and returns a promise
async function weather(){
  let delhiP= new Promise((resolve, reject)=>{
    setTimeout(()=>{
      resolve(`21 degree`);
    }, 2000)
  })
  let unaP=new Promise((resolve, reject)=>{
    setTimeout(()=>{
      resolve(`16 degree`);
    }, 4000)
  })
  // await -> pauses the execution of a function until the line execution is completed
  let delhiWeather=await delhiP;
  let unaWeather=await unaP;
  return [delhiWeather, unaWeather];
}
// 
let weatherArr=weather();
weatherArr.then((value)=>{
  console.log(value);
})