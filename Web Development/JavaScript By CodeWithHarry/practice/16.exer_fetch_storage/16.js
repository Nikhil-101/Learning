console.log(`starting`);
// Q-1 Get data from an API

// let get=async ()=>{
//   let res=await fetch(`https://dummyjson.com/products/`);
//   let json=await res.json();
//   console.log(json);
// }

// get();

let get=async()=>{
  let res=await fetch(`https://kontests.net/api/v1/all`);
  let json=await res.json();
  // console.log(json);
  let iHTML="";
  for(let val of json){
    console.log(val);
    iHTML+=`
      <div class="card" style="width: 22rem;">
        <img src="https://spaces-wp.imgix.net/2016/06/coding-in-the-classroom.png?auto=compress,format&q=50" class="card-img-top" alt="coding-img">
        <div class="card-body">
          <h5 class="card-title">${val.name}</h5>
          <p>Starts at ${val.start_time}</p>
          <p>Endss at ${val.end_time}</p>
          <a href="${val.url}" class="btn btn-primary">Visit Competition Page</a>
        </div>
      </div>
      `
      cardContainer.innerHTML=iHTML;
  }
}

get();


// Q-2-4 Save note to local storage of browser
// let key=`first`;
// console.log(`Write your Note here`);
// let value=prompt(`Enter note: `);
// localStorage.setItem(key, value);
// console.log(localStorage.length);
// console.log(localStorage.getItem(key));
// localStorage.removeItem(key);
// console.log(localStorage.length);
