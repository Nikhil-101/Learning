function abc(){
  let a=10;
  function xyz(){
    console.log(a);
  }
  a=11;
  return xyz;
  // xyz();
}

let z=abc()
z();