function nextInLine(arr, item) {
    arr.push(item);
    return arr.shift();
}

var arr = [1, 2, 3, 4, 5];

// stringify - change array into string
console.log("Before: " + JSON.stringify(arr));
console.log(nextInLine(arr, 6));
console.log("After: " + JSON.stringify(arr));

