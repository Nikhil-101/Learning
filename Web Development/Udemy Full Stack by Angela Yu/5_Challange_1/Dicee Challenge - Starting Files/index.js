var roll1=Math.floor(Math.random()*6)+1;
var roll2=Math.floor(Math.random()*6)+1;

document.querySelector(".img1").setAttribute("src", "./images/dice"+roll1+".png");
document.querySelector(".img2").setAttribute("src", "./images/dice"+roll2+".png");

if(roll1>roll2){
    document.querySelector("h1").innerText="🚩Player 1 Wins!!!"
}
else if(roll1<roll2){
    document.querySelector("h1").innerText="Player 2 Wins!!!🚩"
}
else{
    document.querySelector("h1").innerText="It's a Draw. Please Reload!!!"
}