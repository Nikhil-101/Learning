// Snake, Water & Gun Game
console.log('Game Starting!!!');
const arr=['Snake', 'Water', 'Gun'];
const randomNum=Math.round((Math.random()*10)%2);

const choice=()=>{
    console.log('1. Snake');
    console.log('2. Water');
    console.log('3. Gun');

    console.log('Press any key from above choice');
    const num=Number.parseInt(prompt('Press any key from above choice: '))-1;
    return arr[num];
}

const compare=(user1, user2)=>{
    console.log(`User: ${user1} & PC: ${user2}`);
    if(user1=='Snake' && user2=='Water' || user1=='Water' && user2=='Snake'){
        return 'Snake';
    }
    else if(user1=='Gun' && user2=='Water' || user1=='Water' && user2=='Gun'){
        return 'Water';
    }
    else if(user1=='Snake' && user2=='Gun' || user1=='Gun' && user2=='Snake'){
        return 'Gun';
    }
    else if(user1==user2){
        return 'Draw';
    }
}

const userInput=choice();
const pcInput=arr[randomNum];

const result=compare(userInput, pcInput);

if (userInput===result) {
    console.log('User Wins!!!');
}else if(result==='Draw'){
    console.log('Its Draw!!!');
}else {
    console.log('PC Wins!!!');
}

