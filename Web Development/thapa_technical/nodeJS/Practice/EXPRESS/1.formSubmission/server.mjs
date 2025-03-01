import e from "express";
import path from 'path'

const app = e();

// Middleware to get POST body data && extended for complex nested objects
app.use(e.urlencoded({extended: true}))

app.get('/', (req, res)=>{
  res.sendFile(path.join(import.meta.dirname, '3.formSubmission.html'));
})
// getting form data using get method via url querry (rarely used now)
app.get('/submit', (req, res)=>{
  console.log(req.query);
  res.redirect('/')
})
// getting data using post method with use of middleware
app.post('/submit', (req, res)=>{
  console.log(req.body);
  res.send('OK');
})


app.use((req, res)=>{
  res.status(404).send('Page Not Found')
})

app.listen(3000, ()=>{
  console.log('listening');
})