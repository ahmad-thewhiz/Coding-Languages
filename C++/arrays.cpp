#include <iostream>

using namespace std;

int main() {
    // Define an array as a collection of elements of the same type
    // Arrays allow storing multiple values in a single variable
    // Each element in the array has a unique index starting from 0
    // Elements can be accessed and manipulated using the index notation

    // Declare an array of integers
    int numbers[5];

    // Initialize array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    // Access and display array elements
    cout << "Array elements:" << endl;
    cout << "numbers[0]: " << numbers[0] << endl;
    cout << "numbers[1]: " << numbers[1] << endl;
    cout << "numbers[2]: " << numbers[2] << endl;
    cout << "numbers[3]: " << numbers[3] << endl;
    cout << "numbers[4]: " << numbers[4] << endl;

    // Calculate and display the sum of array elements
    int sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
