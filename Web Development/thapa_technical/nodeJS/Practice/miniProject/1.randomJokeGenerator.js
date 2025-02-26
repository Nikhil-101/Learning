import https from 'https';

const getJoke = async() => {
  const jokeURL = 'https://official-joke-api.appspot.com/random_joke'

  // using get method
  // https.get(jokeURL, (res)=>{
  //   let data;
  //   console.log('statusCode:', res.statusCode);
  //   console.log('headers:', res.headers);

  //   res.on('data', (chunk)=>{
  //     data=chunk;
  //   })
    
  //   res.on('end', ()=>{
  //     const joke = JSON.parse(data);
  //     console.log(joke);
  //   })

  //   res.on('error', (err)=>{
  //     console.error('Error: ',err);
  //   })
  // })

  // using fetch method
  try {
    const res = await fetch(jokeURL);
    const data = await res.json();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

getJoke();