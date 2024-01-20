var arr = ["John", 23, ["srm", "9.19"]];
console.log(arr);
console.log(arr[2]);

arr[1] = 22;

console.log(arr);

matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]];
console.log(matrix[2][1]);

matrix.push([10, 11, 12]);
console.log(matrix);

array = matrix.shift();
console.log(matrix);
console.log(array);

matrix.unshift([1, 2, 3]);
console.log(matrix);

array2 = matrix.pop();