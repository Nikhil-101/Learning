const EventEmitter = require('events')
const fs = require('fs/promises');

const emitter = new EventEmitter();
let loginCount=0, logoutCount=0, purchaseCount=0, profileCount=0, loggingCount=0;

emitter.on('loggingEvent', (msg)=>{
  loggingCount++;
  let data = `\n${msg.action}: ${msg.value}`;
  fs.appendFile('logData.txt', data)
    .then(()=>{
      console.log(`${data} Login: ${loginCount} Logout: ${logoutCount} Purchase: ${purchaseCount} Profile: ${profileCount} Logging: ${loggingCount}`)
    })
    .catch((err)=>{console.error(err);
    })
})

emitter.on('loginEvent', ()=>{
  loginCount++;
  emitter.emit('loggingEvent',{ action: 'Login', value: 'Nikhil' });
})

emitter.on('logoutEvent', ()=>{
  logoutCount++;
  emitter.emit('loggingEvent', { action: 'Logout', value: 'Nikhil' });
})
emitter.on('purchaseEvent', ()=>{
  purchaseCount++;
  emitter.emit('loggingEvent', { action: 'Purchased', value: 'Laptop' });
})
emitter.on('profileEvent', ()=>{
  profileCount++;
  emitter.emit('loggingEvent', { action: 'Profile Update', value: 'Nikhil' });
})

emitter.emit('loginEvent');
emitter.emit('profileEvent');
emitter.emit('purchaseEvent');
emitter.emit('purchaseEvent');
emitter.emit('logoutEvent');