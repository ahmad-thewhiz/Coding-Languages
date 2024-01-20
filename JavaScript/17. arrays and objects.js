var myMusic = [
    {
        "artist": "Billy Joel",
        "title": "Piano Man",
        "release_year": 1973,
        "formats": [
            "CD",
            "8T",
            "LP"
        ],
        "gold": true
    },
    
    {
        "artist": "The Beatles",
        "title": "Abbey Road",
        "release_year": 1969,
        "formats": [
            "CD",
            "8T",
            "LP"
        ],
        "gold": true
    }
];

// accessing nested objects

var myStorage = {
    "car": {
        "inside": {
            "glove box": "maps",
            "passenger seat": "crumbs"
        },
        "outside": {
            "trunk": "jack"
        }
    }
};

var gloveBoxContents = myStorage.car.inside["glove box"];
console.log(gloveBoxContents);


// accessing nested arrays
var myPlants = [
    {
        type: "flowers",
        list: [
            "rose",
            "tulip",
            "dandelion"
        ]
    },
    
    {
        type: "trees",
        list: [
            "fir",
            "pine",
            "birch"
        ]
    }
];

var secondTree = myPlants[1].list[1];
console.log(secondTree);


// record collection

var collection = {
    "2548": {
        "album": "Slippery When Wet",
        "artist": "Bon Jovi",
        "tracks": [
            "Let It Rock",
            "You Give Love a Bad Name"
        ]
    },
    
    "2468": {
        "album": "1999",
        "artist": "Prince",
        "tracks": [
            "1999",
            "Little Red Corvette"
        ]
    },
    
    "1245": {
        "artist": "Robert Palmer",
        "tracks": []
    },
    
    "5439": {
        "album": "ABBA Gold"
    }
};

// keep a copy of the collection for tests
var collectionCopy = JSON.parse(JSON.stringify(collection));

// update records
function updateRecords(id, prop, value) {
    if (value === "") {
        delete collection[id][prop];
    } else if (prop === "tracks") {
        collection[id][prop] = collection[id][prop] || []; //if the property doesn't exist, create it
        collection[id][prop].push(value);
    } else {
        collection[id][prop] = value;
    }
    
    return collection;
}

// test
console.log(updateRecords(2468, "tracks", "test"));
console.log(updateRecords(5439, "artist", "ABBA"));