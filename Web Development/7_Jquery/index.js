// $("h1").css("color", "red");
$(document).keypress(function(Event){
    $("h1").text(Event.key);
})