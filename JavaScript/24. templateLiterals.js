const person = {
    name: "Zoadic hasbro",
    age: 56,
};

const greeting = `Hello, my name is ${person.name}! I am ${person.age} years old.`;
// remember: ` is not ' or "

console.log(greeting);


const result = {    
    success: ["max-length", "no-amd", "prefer-arrow-functions"],
    failure: ["no-var", "var-on-top", "linebreak"],
    skipped: ["no-extra-semi", "no-dup-keys"]
};

function makeList(arr) {
    const resultDisplayArray = [];
    for (let i = 0; i < arr.length; i++) {
        resultDisplayArray.push(`<li class="text-warning">${arr[i]}</li>`);
    }
    return resultDisplayArray;
}

const resultDisplayArray = makeList(result.failure);

console.log(resultDisplayArray);

// when you have to create the object where key and value are the same, you can use shorthand

const createPerson = (name, age, gender) => ( {name, age, gender});
console.log(createPerson("Zoadic Hasbro", 56, "male"))


const bicycle = {
    gear: 2,
    setGear(newGear) {
        "use strict";
        this.gear = newGear;
    }
};

bicycle.setGear(3);
console.log(bicycle.gear);

//use syntax to define a function inside an object 

// var SpaceShuttle = function(targetPlanet) {
//     this.targetPlanet = targetPlanet;
// }

class SpaceShuttle {
    constructor(targetPlanet) {
        this.targetPlanet = targetPlanet;
    }
}

var zeus = new SpaceShuttle('Jupiter');

console.log(zeus.targetPlanet);
