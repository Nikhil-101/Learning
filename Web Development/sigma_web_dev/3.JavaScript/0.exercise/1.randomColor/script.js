console.log('Random Color');

function randomNumber(){
  return Math.random()
}

let obj = {
  1: 1,
  2: 2,
  3: 3,
  4: 4,
  5: 5,
  6: 6,
  7: 7,
  8: 8,
  9: 9,
  10: 'A',
  11: 'B',
  12: 'C',
  13: 'D',
  14: 'E',
  15: 'F'
};

document.querySelectorAll(".box").forEach(e=>{
  let rand1 = Math.trunc(Math.random()*15);
  let rand2 = Math.trunc(Math.random()*15);
  let rand3 = Math.trunc(Math.random()*15);
  let rand4 = Math.trunc(Math.random()*15);
  let rand5 = Math.trunc(Math.random()*15);
  let rand6 = Math.trunc(Math.random()*15);
  e.style.backgroundColor=`#${obj[rand1]}${obj[rand2]}${obj[rand3]}`;
  e.style.color=`#${obj[rand4]}${obj[rand5]}${obj[rand6]}`;

})
