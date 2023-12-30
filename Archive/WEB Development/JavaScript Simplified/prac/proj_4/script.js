let gp = document.querySelector('#grand-parent')
console.log(gp);
gp.style.color = 'brown';

const parentOne = gp.firstElementChild;
parentOne.style.color = 'red';

parentSecond = parentOne.nextElementSibling;
parentSecond.style.color = 'blue';

childrenOne = parentOne.firstElementChild;
childrenOne.style.color = 'green';

childrenSecond = parentOne.lastElementChild;
childrenSecond.style.color = 'yellow';

