let btn_array = document.querySelectorAll(".drum");
// Detecting key press
document.addEventListener("keydown", function(Event){
    btnClick(Event.key);
});
// Detecting button press
for(let i=0 ; i<btn_array.length ; i++){
    btn_array[i].addEventListener("click", function(){
        btnClick(this.innerText);
    });
}

// document.querySelectorAll("button").addEventListener("click", btnClick);

function btnClick(key){
    btnAnimation(key);
    switch (key) {
        case "w":
            playSound("sounds/tom-1.mp3");
            break;
        case "a":
            playSound("sounds/tom-2.mp3");
            break;
        case "s":
            playSound("sounds/tom-3.mp3");
            break;
        case "d":
            playSound("sounds/tom-4.mp3");
            break;
        case "j":
            playSound("sounds/kick-bass.mp3");
            break;
        case "k":
            playSound("sounds/crash.mp3");
            break;
        case "l":
            playSound("sounds/snare.mp3");
            break;
    
        default:
            alert("ERROR!!!");
            break;
    }
}

// Applying button animations
function btnAnimation(key){
    document.querySelector("."+key).classList.add("pressed");
    setTimeout(function(){
        document.querySelector("."+key).classList.remove("pressed")
    }, 100);
}

function playSound(url) {
    new Audio(url).play();
}