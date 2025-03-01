import e from "express";
import {z} from 'zod';

const portSchema = z.coerce.number().min(1).max(65535).default(3000);
const PORT = portSchema.parse(process.env.PORT);

const app = e();

app.get('/', (req, res)=>{
  return res.send('Hello World!!!');
})

app.listen(PORT, ()=>{
  console.log(`Server Started at port: ${PORT}`);
  
})