console.log('Script Started!!!');

/** @type {HTMLDivElement} */
let container = document.querySelector('.container');
let thumbnail = document.createElement('div');
let time = document.createElement('div');
let titleBody = document.createElement('div');
let title = document.createElement('h3');
let para = document.createElement('p');

container.appendChild(thumbnail);
container.append(titleBody);
thumbnail.appendChild(time);

container.style.display='flex';
container.style.justifyContent='center';

thumbnail.setAttribute('class', 'thumbnail');
thumbnail.style.width='18rem';
thumbnail.style.height='10rem';
thumbnail.style.position='relative';
thumbnail.style.display='inline-block';
thumbnail.style.backgroundImage='url("resources/hqdefault.webp")';
thumbnail.style.backgroundRepeat='no-repeat';
thumbnail.style.backgroundSize='contain';
thumbnail.style.borderRadius='.7em';

time.setAttribute('class', 'videoTime');
time.innerText='31:20'
time.style.backgroundColor='#111';
time.style.color='white';
time.style.display='inline';
time.style.paddingTop='.1em';
time.style.paddingBottom='.2em';
time.style.borderRadius='.3em';
time.style.position='absolute';
time.style.right='.6em';
time.style.bottom='.5em';

titleBody.setAttribute('class', 'titleBody');
titleBody.style.display='inline-block';
titleBody.style.marginLeft='.4em';

title.setAttribute('class', 'title');
title.style.marginTop='.2em';
title.style.marginBottom='0';

para.setAttribute('class', 'metaData');
para.style.marginTop='.7em';
para.style.marginBottom='0';
// thumbnail.style.='';
// let imgThumbnail = document.createElement('img');
// let imgTime = document.createElement('div');

// imgThumbnail.setAttribute('src', 'https://i.ytimg.com/vi/KtL-SQ20Q0s/hqdefault.jpg?sqp=-oaymwEbCKgBEF5IVfKriqkDDggBFQAAiEIYAXABwAEG&rs=AOn4CLABJhdIBqlilwXKzJqa6StynbJT4Q');
// imgThumbnail.style.position='relative';
// imgThumbnail.setAttribute('class', 'thumbnail')
// document.querySelector('.container').appendChild(imgThumbnail);

// document.querySelector('.thumbnail').appendChild(imgTime);
// imgTime.style.width='1.5rem';
// imgTime.style.height='.5rem';
// imgTime.style.backgroundColor='#222';
// imgTime.style.color='white';
// imgTime.style.zIndex='2';
// imgTime.style.position='absolute';
// imgTime.style.bottom='10px';
// imgTime.style.right='10px';
// imgTime.innerText='31:20';
