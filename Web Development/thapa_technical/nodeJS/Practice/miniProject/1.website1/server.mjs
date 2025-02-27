import { readFile, writeFile } from 'fs/promises';
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

  if (req.method === 'POST' && req.url === '/add') {
    let formData;
    req.on('data', (data)=>{
      formData=data;
    })
    req.on('end', async ()=>{
      console.log(formData.toString());
      const { formHeading, formBody } = JSON.parse(formData.toString());
      let prevData = await readFile('storage.json', 'utf-8');
      prevData = JSON.parse(prevData);
      console.log(formHeading, formBody);
      console.log(prevData);
      if (prevData[formHeading]) {
        console.log('Entry Already Exists');
        res.writeHead(400, {'Content-Type': 'text/pain'});
        return res.end('Entry Already Exists')
      }
      prevData[formHeading] = formBody;
      prevData = JSON.stringify(prevData)
      await writeFile('storage.json', prevData);
      
      res.writeHead(200, {'Content-Type': 'application/json'});
      res.end(JSON.stringify({ success: true , formHeading: formBody}));
    })
  }
})

server.listen(PORT, ()=>{
  console.log(`PORT Listening at: ${PORT}`);
})