class firstClass{
  constructor(){
    console.log('Parent Constructor Called');
  }
  book(name){
    this.name=name;
    console.log(this.name+' your Train is booked');
  }
  cancel(){
    console.log(this.name+' your Train is cancelled');
  }
  get name(){
    return this._name;
  }

  set name(nName){
    this._name=nName;
  }
}

class secondClass extends firstClass{
  constructor(){
    super();
    console.log(`Child Constructor Called`);
  }
  abc(){
    console.log(`second class function abc`);
  }

  static smethod(){
    console.log(`this is a static method`);
  }
}

let tk1=new firstClass;
let tk2=new firstClass;
let secondObject=new secondClass;
tk1.book('nikhil');
tk2.book('nik');
tk1.cancel();
tk2.cancel();
secondObject.abc();
secondClass.smethod();
// secondObject.smethod();
console.log(tk1.name);

console.log(tk2 instanceof firstClass);