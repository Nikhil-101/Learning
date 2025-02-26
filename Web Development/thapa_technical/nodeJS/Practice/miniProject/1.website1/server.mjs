import { readFile } from 'fs/promises';
import http from 'http';

const PORT = '3000';

const server = http.createServer((req, res)=>{
  console.log('Server Started');
  // Funtion to send files
  const sendFile = async (filePath, contentType) => {
    const file = await readFile(filePath);
    res.writeHead(200, {'Content-Type': contentType});
    res.end(file);
  }
  
  if (req.method === 'GET') {
    if (req.url === '/') {
      sendFile('./index.html', 'text/html');
    }
    if (req.url === '/style.css') {
      sendFile('./style.css', 'text/css');
    }
  }
})

server.listen(PORT, ()=>{
  console.log(`PORT Listening at: ${PORT}`);
})