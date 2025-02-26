const http = require('http');

const PORT = '3000'

const server = http.createServer((req, res)=>{
  if(req.url === '/'){
    // To show what type of data is send (html or plain or others)
    res.setHeader('Content-Type', 'text/html')
    res.write('<h1>Hello World!!!</h1><br /><a href="localhost:3000/contact">Contact</a>');
    res.end();
  }
  if(req.url === '/contact'){
    res.setHeader('Content-Type', 'text/html')
    res.write('<h1>Contact Page: Hello World!!!</h1><br /><a href="localhost:3000">Home</a>');
    res.end();
  }
})

server.listen(PORT, ()=>{
  console.log(`Server is listening at ${PORT}`);
})