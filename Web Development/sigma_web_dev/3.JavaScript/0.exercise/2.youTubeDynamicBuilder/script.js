console.log('Script Started!!!');

function createVideoCard(videoThumbnail, titleName, duration, channelName, views, dateUploaded){
  if(views>999 && views<999999){
    views=`${views/1000}K`;
  }
  else if(views>999999){
    views=`${views/1000000}M`;
  }

  if(dateUploaded>7 && dateUploaded<31){
    dateUploaded=`${(dateUploaded/7).toFixed(1)} weeks ago`;
  }
  else if(dateUploaded>30){
    dateUploaded=`${(dateUploaded/30).toFixed(0)} months ago`;
  }

  /** @type {HTMLDivElement} */
  let container = document.querySelector('.container');
  let thumbnail = document.createElement('div');
  let time = document.createElement('div');
  let titleBody = document.createElement('div');
  let title = document.createElement('h3');
  let para = document.createElement('p');
  
  container.insertAdjacentElement('afterbegin', thumbnail);
  container.insertAdjacentElement('beforeend', titleBody);
  titleBody.insertAdjacentElement('beforeend', para);
  titleBody.insertAdjacentElement('afterbegin', title);
  thumbnail.appendChild(time);
  
  container.style.display = 'flex';
  container.style.minWidth = '100vw';
  container.style.justifyContent = 'center';
  
  thumbnail.setAttribute('class', 'thumbnail');
  thumbnail.style.width = '18rem';
  thumbnail.style.height = '10rem';
  thumbnail.style.position = 'relative';
  thumbnail.style.display = 'inline-block';
  thumbnail.style.backgroundImage = videoThumbnail;
  thumbnail.style.backgroundRepeat = 'no-repeat';
  thumbnail.style.backgroundSize = 'contain';
  thumbnail.style.borderRadius = '.7em';
  thumbnail.style.marginRight = '.7em'
  
  time.setAttribute('class', 'videoTime');
  time.innerText = duration;
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
  title.innerText = titleName;
  title.style.marginTop = '.2em';
  title.style.marginBottom = '.1em';
  // document.querySelector('.title').style.marginTop = '.1em';
  
  para.setAttribute('class', 'metaData');
  para.style.marginTop = '.7em';
  para.style.marginBottom = '0';
  para.innerText=`${channelName} ▪️ ${views} views ▪️ ${dateUploaded}`
}
createVideoCard('url("resources/hqdefault.webp")', 'Installing VS Code & How Websites Work | Sigma Web Development Course - Tutorial #1', '31:20', 'CodeWithHarry', 250000, 200);
