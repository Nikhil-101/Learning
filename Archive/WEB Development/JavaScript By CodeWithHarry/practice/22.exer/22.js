let data={
  name: "Nikhil Dhiman",
  age: 25,
};

let data2=["hello", " world"];

let [a, b]=data2;
console.log(a, b);

let [c, d, , ...extra]=[1, 2, 3, 4, 5];
console.log(c, d, extra);

let {name, age}=data;
console.log(name, age);

// Spread Operator

let arr=[20,30,40];

console.log(...arr);

function sum(n1, n2, n3){
  console.log(n1+n2+n3);
}

sum(...arr);

let obj1={ ...arr };
console.log(obj1);


// Miscellenous
console.log({...data, name:"Nitin"});     //Overriding Certain Values
