function convertToInteger(str) {
  return parseInt(str);
}

console.log(convertToInteger("56"));

function binaryStringToInteger(str) {
  return parseInt(str, 2);
}

console.log(binaryStringToInteger("10011"));

function ternaryOperator(a, b) {
  return (a>b) ? "Yes" : "No";
}   

console.log(ternaryOperator(100 , 20));

function checkSign(num) {
  return (num > 0) ? "positive" : (num < 0) ? "negative" : "zero";
}

console.log(checkSign(-10));

// let - block scope

let catName = "Quincy";
let quote;

// catName = "Beau";

function catTalk() {
    "use strict";
    
    catName = "Oliver";
    quote = catName + " says Meow!";
    }

function checkScope() {
    "use strict";
    let i = "function scope";
    if (true) {
      let i = "block scope";
      console.log("Block scope i is: ", i);
    }
    console.log("Function scope i is: ", i);
    return i;
}

checkScope();


function printManyTimes(str) {
    "use strict";
  
    // change code below this line
  
    const SENTENCE = str + " is cool!";
    for(let i = 0; i < str.length; i+=2) {
      console.log(SENTENCE);
    }
  
    // change code above this line
  
  }

printManyTimes("freeCodeCamp");

const s = [5, 7, 2];
function editInPlace() {
  "use strict";
  // s = [2, 5, 7]; <- this is invalid
  
    s[0] = 2;
    s[1] = 5;
    s[2] = 7;
}

editInPlace();

console.log(s);