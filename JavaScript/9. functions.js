var myGlobal = 10;
console.log("myGlobal (outside): " + myGlobal);

function diff(a ,b) {
    return a - b;
}

// var difference = diff(10, 5);

// console.log(difference);

function fun1() {
    console.log("myGlobal (before): " + myGlobal);
    myGlobal = 5;
    console.log("myGlobal (after): " + myGlobal);
}

fun1();
console.log("myGlobal (outside): " + myGlobal);


function fun2() {
    var oopsGlobal = 5; // becomes local
    smartGlobal = 10; // becomes global
}

fun2();
console.log(typeof oopsGlobal=="undefined");
console.log(typeof smartGlobal=="undefined");




var outerWear = "T-Shirt";

function myOutfit() {
    var outerWear = "sweater";
    return outerWear;
}

console.log(myOutfit());
console.log(outerWear);


