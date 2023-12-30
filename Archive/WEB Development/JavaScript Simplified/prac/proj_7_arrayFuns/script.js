const a1 = [1, 2, 3, 4, 5];

let result;
// For Each
a1.forEach((element, index) => console.log(element + ' '+ index))
// Opration on whole array
result = a1.map(element => element*2)
console.log(result);

// Filter out the array based on a situation
result = a1.filter(element => element >= 2)
console.log(result);
