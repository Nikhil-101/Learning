// Callback funtion
function printVariable(name){
  console.log(name);
}

function yourName(n, callback){
  callback('Hello ' + n);
}

yourName('Nikhil', printVariable);

// Arrow function
let printName = name => console.log(name);

printName('Nikhil')

// Implicit type conversion
let printHi = name => 'Hi ' + name;

console.log(printHi('Nikhil'));

// Object creaction
let car = {
  make: 'Maruti Suzuki',
  model: '800',
  isUsed: true,
  makeNoise(){
    console.log('Vroom');
  },
  aMakeNoise: function(){
    console.log('Vroom 2');
  }
}

console.log(car.make);
car.makeNoise();
car.aMakeNoise();

const book={
  title: 'My Life',
  author: {
    name: 'Nikhil',
    age: 25
  }
}

console.log(book.author.age);

// Array Methods
// Map, forEach, find, some, all, filter, includes, reduce
const items = [
  {price: 10},
  {price: 20},
  {price: 30},
  {price: 5}
]

const s = items.reduce((sum, item)=>{
  return sum + item.price;
}, 0);
console.log('Sum: ', s);

// Creating Constructor
function User(name, age){
  this.name=name;
  this.age=age;
}

const u1=new User('Nikhil', 25);
const u2=new User('Chhaya', 22);
console.log(u1.name);
console.log(u2.name);