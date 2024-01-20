// destructuring assignment
var voxel = {x: 3.6, y: 7.4, z: 6.54};

// var x = voxel.x;
// var y = voxel.y;
// var z = voxel.z;

const {x:a, y:b, z:c} = voxel;

const AVG_TEMPERATURES = {
    today: 77.5,
    tomorrow: 79
};

function getTempOfTmrw(avgTemperatures) {
    "use strict";

    const {tomorrow : tempOfTomorrow} = avgTemperatures;

    return tempOfTomorrow;
}

console.log(getTempOfTmrw(AVG_TEMPERATURES));

// destructuring assignment with nested objects
const LOCAL_FORECAST = {
    today: {min: 72, max: 83},
    tomorrow: {min: 73.3, max: 84.6}
};

function getMaxOfTmrw(forecast) {
    "use strict";

    const {tomorrow: {max: maxOfTomorrow}} = forecast;

    return maxOfTomorrow;
}

console.log(getMaxOfTmrw(LOCAL_FORECAST));

// destructuring assignment to assign variables from arrays
const [z, x, , y] = [1, 2, 3, 4, 5, 6];
console.log(z, x, y);

let aa = 8, bb = 6;
(() => {
    "use strict";

    [aa, bb] = [bb, aa];
})();

console.log(aa);
console.log(bb);

// destructuring assignment with the rest operator
const source = [1,2,3,4,5,6,7,8,9,10];
function removeFirstTwo(list) {
    const [ , , ...arr] = list;
    return arr;
}

const arr = removeFirstTwo(source);
console.log(arr);
console.log(source);


// destructuring assignment to pass an object as a function's parameters
const stats = {
    max: 56.78,
    standard_deviation: 4.34,
    median: 34.54,
    mode: 23.87,
    min: -0.75,
    average: 35.85
};

const half = (function() {
    return function half({max, min}) { //instead of passing the whole object, we pass only the properties we need
        return (max + min) / 2.0;
    };
}
)();

console.log(stats);
console.log(half(stats));
