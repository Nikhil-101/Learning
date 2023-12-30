function playAudio(){
  let a=new Audio("https://cdn.pixabay.com/download/audio/2021/08/19/audio_78204325f6.mp3?filename=dark-sitar-7546.mp3");
  a.play();
}


let time=prompt("Enter remaining time: ");
setTimeout(() => {
  playAudio()
}, time*1000);