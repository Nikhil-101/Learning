console.log(`Fetch API`);
console.log(`Using GET Method`);
// GET Request
fetch("https://jsonplaceholder.typicode.com/posts")
  .then((res)=>{
    console.log(res.status);
    return res.json();
  })
  .then((json)=>{
    console.log(`Success`);
    console.log(json);
  });

console.log(`***************************************************`);
console.log(`Using POST Method`);
// POST Request
let options={
  method: 'POST',
  headers: {
    'Content-type': 'application/json; charset=UTF-8'
  },
  body: JSON.stringify({
    title: 'abc',
    body: 'xyz xyz',
    userID: 1,
  }),
};

fetch("https://jsonplaceholder.typicode.com/posts", options)
.then((res)=>{
  console.log(res.status);
  return res.json();
})
.then((json)=>{
  console.log(json);
})