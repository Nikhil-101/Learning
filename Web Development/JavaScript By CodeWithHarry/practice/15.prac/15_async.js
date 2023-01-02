console.log(`Fetch Get using Async`);

let retrieve=async (id)=>{
  let responce= await fetch(`https://jsonplaceholder.typicode.com/posts/${id}`);
  console.log(responce.status);
  let json= await responce.json();
  console.log(json);
}

// retrieve();

let send=async (data)=>{
  let options={
  method: 'POST',
  body: JSON.stringify(data),
  headers: {
    'Content-type': 'application/json; charset=UTF-8',
  },
}
  let res=await fetch('https://jsonplaceholder.typicode.com/posts', options)
  let json=await res.json();
  console.log(json);
}

let data={
  title: 'foo',
  body: 'bar',
  userId: 1,
};

let main=async ()=>{
  await send(data);
  await retrieve(5);
}

main();