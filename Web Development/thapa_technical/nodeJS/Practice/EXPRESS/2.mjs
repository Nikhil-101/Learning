import e from "express";
import fs from 'fs';
import path from "path";
import { PORT } from "./0.PORTValidation.mjs";

const app = e();
// middleware
// app.use('/game', e.static(path.join(import.meta.dirname, 'public')));
app.use(e.static(path.join(import.meta.dirname, 'public')));

app.get('/', (req, res)=>{
  console.log(import.meta.filename);
  
  res.sendFile(path.join(import.meta.dirname, 'public', 'index.html'));
})
// Dynamic Routes | URL Params
app.get('/profile/:username', (req, res)=>{
  console.log(req.params);
  // res.send(`Hello ${req.params}`)
  res.send();
})

app.get('/search', (req, res)=>{
  // console.log(req.query.name, req.query.page);
  console.log(req.query);
  
  res.send('Success');
})

app.listen(PORT, ()=>{
  console.log(`PORT: ${PORT}`);
})