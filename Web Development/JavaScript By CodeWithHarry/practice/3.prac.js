// JavaScript in Browser 2
console.log(window.document.body);

// Practivr Set
// Q-1
// let b=true;
// while (b) {
//     let a=Number.parseInt(prompt("Enter age: "));
//     if(a<0){
//         console.error('Age cannot be negative');
//     }else{
//         alert(a>=18?'You can Drive':'You cannot drive');
//     }
//     b=confirm('Do you want to see the prompt again??');
// }
a=Number.parseInt(prompt('Enter number greater than 4 to redirect: '));
if (a>4) {
    location.href="http://www.google.com";
}

// Changing color of page
a=prompt('Input a color name: ');
document.body.style.backgroundColor=a;