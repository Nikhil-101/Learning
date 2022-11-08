let colorBox=[];
let lvl=1, started=false, check=0;
let turnsNumberArray=[];

for (let i = 0; i < $(".btn").length; i++) {
     colorBox.push($(".btn")[i].id);
}
// console.log(colorBox);
$("body").keydown(function(){
        if (!started) {
            console.log("Starting!!!");
            nextTurn();
            started=true;
        }
    })

$(".btn").click(function(){
    if (started) {
        let userChoice=$(this).attr("id");
        animateClick(userChoice);
        playSound(userChoice);
        checkColor(userChoice);
    }
})

function checkColor(userChoice){
    if (turnsNumberArray[check]===userChoice) {
        check++;
        if (check>=turnsNumberArray.length) {
            lvl++;
            check=0;
            nextTurn();
        }
    }
    else{
        gameOver();
    }
}

function nextTurn(){
    let rand=Math.floor((Math.random()*10)%4);
    let randColor=colorBox[rand];
    turnsNumberArray.push(randColor);
    $("#"+randColor).fadeIn(150).fadeOut(150).fadeIn(150);
    $("#level-title").text("Level "+lvl);
}

function gameOver(){
    $("body").addClass("game-over");
    playSound("wrong");
    setTimeout(function(){
        $("body").removeClass("game-over");
    }, 150);
    $("#level-title").text("Game Over, Press Any Key to Restart!!!");
    lvl=1;
    check=0;
    turnsNumberArray.splice(0, turnsNumberArray.length);
    started=false;
}

function animateClick(userChoice){
    $("#"+userChoice).addClass("pressed");
    setTimeout(function(){
        $("#"+userChoice).removeClass("pressed");
    }, 150);
}

function playSound(userChoice){
    new Audio("sounds/"+userChoice+".mp3").play();
}