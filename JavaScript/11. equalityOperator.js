// strict equality operator
// '===' does not perform type conversion
// '==' performs type conversion

function test(val) {
if (val == 7) {
    return "Equal";
}
return "Not Equal";
}

console.log(test('7'));
// Output - Equal, becuase '==' performs type conversion

function testStrict(val) {
    if (val === 7) {
        return "Equal";
    }
    return "Not Equal";
}

console.log(testStrict('7'));

function testNotEqual(val) {
    if (val != 99) {
        return "Not Equal";
    }
    return "Equal";
}

console.log(testNotEqual('99'));

function testStrictNotEqual(val) {
    if (val !== 17) {
        return "Not Equal";
    }
    return "Equal";
}

console.log(testStrictNotEqual('17'));