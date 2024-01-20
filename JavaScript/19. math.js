var randomNumberBetween0and19 = Math.floor(Math.random() * 20);

function randomWholeNum() {
    
      // Only change code below this line.
    
      return Math.floor(Math.random() * 10);
    }

// Math.random() generates a random decimal number between 0 (inclusive) and not quite up to 1 (exclusive). Thus Math.random() can return a 0 but never quite return a 1
// Math.floor() rounds down to the nearest whole number, and Math.ceil() rounds up to the nearest whole number.
// Math.random() can be used together with Math.floor() to generate random whole numbers.
// Use this technique to generate and return a random whole number between 0 and 9.

console.log(randomWholeNum());

function ourRandomRange(ourMin, ourMax) {
    return Math.floor(Math.random() * (ourMax - ourMin + 1)) + ourMin;
}
// Math.floor(Math.random() * (max - min + 1)) + min

console.log(ourRandomRange(1, 9));

function randomRange(myMin, myMax) {
    // Only change code below this line.
    return Math.floor(Math.random() * (myMax - myMin + 1) + myMin);
    // Only change code above this line.
}

console.log(randomRange(5, 15));