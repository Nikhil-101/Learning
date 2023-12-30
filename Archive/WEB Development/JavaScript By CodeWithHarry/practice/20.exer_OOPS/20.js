console.log(`Practice Set`);
// Q-1: Create a class constructor to set Complex Number
// Q-2: Method to add 2 Complex Number
// Q-5 Use get & set to change the complex number
// Ans -------------------------------------------------------------------------------------
// class Complex{
//   constructor(real, img){
//     this.real=real;
//     this.img=img;
//   }

//   get number(){
//     return `Number: ${this.real}+i${this.img}`;
//   }

//   set numberReal(r){
//     this.real=r;
//   }
  
//   set numberImg(i){
//     this.img=i;
//   }

//   static add(o1, o2){
//     return `SUM: ${o1.real+o2.real}+i${o1.img+o2.img}`;
//   }
// }

// let n=new Complex(3, 10);
// console.log(n.number);
// let m=new Complex(6, 20);
// console.log(m.number);
// m.numberReal=3;
// m.numberImg=10;
// console.log(Complex.add(n, m));

// Q-3 Create a class student from class human and override a function
class Human{
  constructor(name, age){
    this.name=name;
    this.age=age;
  }

  greet(){
    console.log(`Hello there, i am a human`);
  }

  get name(){
    return this._name;
  }
  get age(){
    return this._age;
  }
  set name(newName){
    this._name=newName;
  }
  set age(newAge){
    this._age=newAge;
  }
}

class Student extends Human{
  constructor(sname, age, school, sclass){
    super(sname, age);
    this.school=school;
    this.sclass=sclass;
  }

  greet(){
    console.log(`Hello there, i am a human & a student`);
  }

  get school(){
    return this._school;
  }
  get class(){
    return this.sclass;
  }
  set school(newSchool){
    this._school=newSchool;
  }
  set class(newClass){
    this._sclass=newClass;
  }
}

let s=new Student('Nikhil', 15, 'VPS', 7);
s.greet();
console.log(s.name);
console.log(s.age);
console.log(s.school);
console.log(s.class);

console.log(s instanceof Student);
console.log(s instanceof Human);