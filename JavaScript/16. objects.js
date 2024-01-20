// objects are a collection of properties
// properties are a key value pair
// objects can hold any type of data
// objects are mutable
// objects are unordered
// objects are accessed by key
// objects are stored in memory
// objects are passed by reference
// objects can be nested
// objects can be iterated over
// objects can be used to create other objects


var ourDog = {
    "name": "Camper",
    "legs": 4,
    "tails": 1,
    "friends": ["everything!"]
};

var myDog = {
    "name": "Quincy",
    "legs": 3,
    "tails": 2,
    "friends": []
};

console.log(ourDog);
console.log(myDog);

// Accessing Object Properties with Dot Notation
var testObj = {
    "hat": "ballcap",
    "shirt": "jersey",
    "shoes": "cleats"
};

var hatValue = testObj.hat;
var shirtValue = testObj.shirt;
console.log(hatValue);
console.log(shirtValue);

// Accessing Object Properties with Bracket Notation
var testObj = {
    "an entree": "cheese burger",
    "my side": "veggies",
    "the drink": "water"
};

var entreeValue = testObj["an entree"];
var drinkValue = testObj["the drink"];
console.log(entreeValue);
console.log(drinkValue);

// Accessing Object Properties with Variables
var testObj = {
    12: "Namath",
    16: "Montana",
    19: "Unitas"
};

var playerNumber = 16;
var player = testObj[playerNumber];
console.log(player);

// Updating Object Properties
var ourDog = {
    "name": "Camper",
    "legs": 4,
    "tails": 1,
    "friends": ["everything!"]
};

ourDog.name = "Happy Camper";
console.log(ourDog);

ourDog["sound"] = "woof";
console.log(ourDog);

delete ourDog.tails;
console.log(ourDog);

// Using Objects for Lookups
function phoneticLookup(val) {
    var result = "";

    var lookup = {
        "alpha": "Adams",
        "bravo": "Boston",
        "charlie": "Chicago",
        "delta": "Denver",
        "echo": "Easy",
        "foxtrot": "Frank"
    };

    result = lookup[val];
    return result;
}

console.log(phoneticLookup("charlie"));

// Testing Objects for Properties
var myObj = {
    gift: "pony",
    pet: "kitten",
    bed: "sleigh"
};

function checkObj(checkProp) {
    if (myObj.hasOwnProperty(checkProp)) {
        return myObj[checkProp];
    } else {
        return "Not Found";
    }
}

console.log(checkObj("giftt"));

