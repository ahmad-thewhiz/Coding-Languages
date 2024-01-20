#include <iostream>

using namespace std;

// Function declaration
void squareByValue(int num);  // Pass by value
void squareByReference(int& num);  // Pass by reference

int main() {
    // Pass by value vs pass by reference

    int num1 = 5;
    int num2 = 7;

    cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Pass by value
    squareByValue(num1);
    cout << "After pass by value function's execution: num1 = " << num1 << endl;

    // Pass by reference
    squareByReference(num2);
    cout << "After pass by reference function's execution: num2 = " << num2 << endl;

    return 0;
}

// Function definition - Pass by value
void squareByValue(int num1) {
    // This function squares the value passed by value
    num1 = num1 * num1;
    cout<<"Value in function (pass by value) : "<< num1 << endl;
}

// Function definition - Pass by reference
void squareByReference(int& num2) {
    // This function squares the value passed by reference
    num2 = num2 * num2;
    cout<<"Value in function (pass by refernce) : "<< num2 << endl;
}

// Theory
// Pass by Value Rules:

// A copy of the argument is created, and any modifications are limited to the function scope.
// The original argument remains unchanged.
// Ideal for small-sized variables or when the original value should not be modified.

// Pass by Reference Rules:

// The function receives the actual memory address of the argument, enabling direct modification.
// Changes made to the parameter inside the function will affect the original argument.
// Ideal when modification of the original value is desired or for larger data structures to avoid unnecessary copying.
