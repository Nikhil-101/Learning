console.log('TODO App Started!!!');

let element=document.querySelector('#submit');
element.addEventListener('click', ()=>{
  let title=document.querySelector('#newHeading').value;
  let body=document.querySelector('#newBody').value;
  if(title==='' && body===''){
    console.log(`Title & Body can't be both empty`);
  }
  else{
    localStorage.setItem(title, body);
    location.reload();
  }
})

element=document.querySelector('#clearAll');
element.addEventListener('click', ()=>{
  localStorage.clear();
  location.reload();
})

let iHTML="";
let length=localStorage.length;
if(length==0){
  iHTML=`Nothing to show!!!`;
}
else{
  iHTML=`<p>Title: Task</p>`
  for (let i = 0; i < length; i++) {
    let key=localStorage.key(length-i-1);
    let value=localStorage.getItem(key);
    console.log(key, value);
    iHTML+=`<p>${key}:  ${value}</p>`
  }
}

document.querySelector('#allTasks').innerHTML=iHTML;