// const http = require('http');
import http from 'http'

const PORT = '3000'

// Server is like an EventEmitter
const server = http.createServer((req, res)=>{
  // creating routes
  if(req.url === '/'){
    // To show what type of data is send (html or plain or others)
    res.setHeader('Content-Type', 'text/html')
    // store data to send in writable
    // res.write('<h1>Hello World!!!</h1><br /><a href="localhost:3000/contact">Contact</a>');
    // send the data
    // res.end();
    res.end('<h1>Hello World!!!</h1><br /><a href="localhost:3000/contact">Contact</a>');
  }
  if(req.url === '/contact'){
    res.setHeader('Content-Type', 'text/html')
    res.write('<h1>Contact Page: Hello World!!!</h1><br /><a href="localhost:3000">Home</a>');
    res.end();
  }
})

// like an emitter.on
server.listen(PORT, ()=>{
  console.log(`Server is listening at ${PORT}`);
})