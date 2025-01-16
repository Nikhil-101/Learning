date = new Date(1000*60*60*2);
let hour = date.getUTCHours()
let min = date.getUTCMinutes()
let sec = date.getUTCSeconds()

console.log(`${hour.toString().padStart(2, '0')}:${min.toString().padStart(2, '0')}:${sec.toString().padStart(2, '0')}`);


const abc = setInterval(() => {
    console.log('hello');
}, 2000);
const ab = setInterval(() => {
    console.log('hello');
}, 2000);

console.log(abc);
console.log(ab);
