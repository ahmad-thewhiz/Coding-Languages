function worldBlanks(myNoun, myAdjective, myVerb, myAdverb) {
    var result = "";
    result += "The " + myAdjective + " " + myNoun + " " + myVerb + " " + myAdverb;
    return result;
}

console.log(worldBlanks("dog", "big", "ran", "quickly"));