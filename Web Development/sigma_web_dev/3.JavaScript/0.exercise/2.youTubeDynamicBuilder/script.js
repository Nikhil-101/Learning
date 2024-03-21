console.log('Script Started!!!');

/** @type {HTMLDivElement} */
let container = document.querySelector('.container');
let thumbnail = document.createElement('div');
let time = document.createElement('div');
let titleBody = document.createElement('div');
let title = document.createElement('h3');
let para = document.createElement('p');

// container.appendChild(thumbnail);
container.insertAdjacentElement('afterbegin', thumbnail);
// container.append(titleBody);
container.insertAdjacentElement('beforeend', titleBody);
thumbnail.appendChild(time);

container.style.display = 'flex';
container.style.justifyContent = 'center';

thumbnail.setAttribute('class', 'thumbnail');
thumbnail.style.width = '18rem';
thumbnail.style.height = '10rem';
thumbnail.style.position = 'relative';
thumbnail.style.display = 'inline-block';
thumbnail.style.backgroundImage = 'url("resources/hqdefault.webp")';
thumbnail.style.backgroundRepeat = 'no-repeat';
thumbnail.style.backgroundSize = 'contain';
thumbnail.style.borderRadius = '.7em';
thumbnail.style.marginRight = '.7em'

time.setAttribute('class', 'videoTime');
time.innerText = '31:20'
time.style.backgroundColor = '#111';
time.style.color = 'white';
time.style.display = 'inline';
time.style.paddingTop = '.1em';
time.style.paddingBottom = '.2em';
time.style.paddingLeft = '.2em';
time.style.paddingRight = '.2em';
time.style.borderRadius = '.3em';
time.style.position = 'absolute';
time.style.right = '.6em';
time.style.bottom = '.5em';

titleBody.setAttribute('class', 'titleBody');
titleBody.style.display = 'inline-block';

title.setAttribute('class', 'title');
document.querySelector('.title').style.marginTop = '.4em';
// title.style.margin = '0em';

para.setAttribute('class', 'metaData');
para.style.marginTop = '.7em';
para.style.marginBottom = '0';
