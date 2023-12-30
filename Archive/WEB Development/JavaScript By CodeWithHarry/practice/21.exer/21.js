class Password{
  constructor(){
    // this.numString='0123456789';
    // this.sAlphaString='abcdefghijklmnopqrstuvwxyz';
    // this.cAlphaString='ABCDEFGHIJKLMNOPQRSTUVWXYZ';
    this.weakAlphaNum="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    this.strongAlphaNum="abcdefghijklmnopqrstuvwxyz!@#$%^&*()ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    // this.specialCharString='!@#$%^&*()'
    this.strongPassLength=12;
    this.weakPassLength=8;
  }

  generateStrongPass(){
    let spass="";
    for(let i=0;i<this.strongPassLength;i++){
      spass+=(this.strongAlphaNum[Math.floor(Math.random()*72)])
    }
    return spass;
  }

  get strongPass(){
    return this.generateStrongPass();
  }
  // weak pass can also be done the same way
}

let p=new Password;
console.log("Starting...");
console.log(`Strong Pass: ${p.strongPass}`);