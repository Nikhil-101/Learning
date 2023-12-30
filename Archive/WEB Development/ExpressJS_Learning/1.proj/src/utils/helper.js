const bcrypt=require('bcryptjs');
const saltRounds = 10;


let hashPassword = (password) =>{
  return bcrypt.hashSync(password,saltRounds);
}

let comparePassword = (raw, hashedPass)=>{
  return bcrypt.compareSync(raw, hashedPass);
}

module.exports={
  hashPassword,
  comparePassword
};