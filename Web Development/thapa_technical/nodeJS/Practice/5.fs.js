const { error, log } = require('console');
const fs = require('fs');
const path = require('path')
const filePath = path.join(__dirname, '5.fs.txt')

// Writing File
// fs.writeFileSync(filePath, 'Hello World!!! (Updated)');

// Append to File
// fs.appendFileSync(filePath, '\n(Appended Data Again)')

// Deleting File
// fs.unlinkSync(filePath)

// Reading File
// console.log(fs.readFileSync(filePath, 'utf-8'));

// Folder Creation
// fs.mkdirSync('abc/xyz/mno', { recursive: true })

// Folder Remove
// fs.rmSync('abc', {recursive:true})


// Async Ops

// Async Write
// fs.writeFile('abc.txt', 'Hello World!!!', 'utf-8', (err)=>{
//   console.log(err);
//   return true
// })

// Async Read
// fs.readFile('abc.txt', 'utf-8', (err, data)=>{
//   if (err) {
//     console.log(err);
//   }else{
//     console.log('Data: ',data);
//   }
// })

// Async Delete
// fs.unlink('abc.txt', (err)=>{
//   if(err) console.error(err);
//   else console.log('File Deleted');
// })


// Promises

// Writing File
// fs.promises.writeFile('abc.txt', 'Hello World')
//   .then(()=>console.log('Success'))
//   .catch((err)=>console.error(err));

// Reading File
// fs.promises.readFile('abc.txt', 'utf8')
//   .then((data)=>console.log(data))
//   .catch((err)=>console.error(err));

// Deleting File
// fs.promises.unlink('abc.txt')
//   .then(()=>console.log('Success'))
//   .catch((err)=>console.error(err))

// Async Await

// Read Dir | Also do similarly for read write update delete(unlink)
// const readDir = async () => {
//   try{
//     const data = await fs.promises.readdir('.');
//     console.log(data);
//   }catch(err){
//     console.error(err);
//   }
// }
// readDir()