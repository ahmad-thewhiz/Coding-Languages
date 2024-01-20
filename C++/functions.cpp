#include <iostream>

using namespace std;

// Function declaration
int addNumbers(int a, int b);

int main() {
    // User-defined functions allow us to encapsulate a block of code and reuse it

    // Example: Addition of two numbers using a user-defined function
    int num1, num2, sum;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    sum = addNumbers(num1, num2);

    cout << "Sum: " << sum << endl;

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    // This function calculates the sum of two numbers and returns the result
    int sum = a + b;
    return sum;
}



/* return_type function_name(parameter_list) {
    // code to be executed
    // return statement (if applicable)
} */

// Theory
// return_type specifies the type of the value the function will return (if any). It can be any valid C++ data type, including void if the function doesn't return a value.
// function_name is the identifier used to call the function. It should be unique and meaningful.
// parameter_list includes the parameters (input) the function expects. Each parameter consists of a data type and a variable name, separated by commas.
// The code inside the function is enclosed within curly braces {}. It represents the block of code that will be executed when the function is called.
// If the function returns a value, the return statement is used to send the value back to the caller.

// Some important rules to keep in mind when working with functions:
// Function declarations should be placed before their first use (typically at the beginning of the file or in a header file).
// The number, order, and types of function arguments in the declaration and definition must match.
// Functions can have different return types, but the return type specified in the declaration and definition must match.
// Parameters can be passed by value or by reference, depending on the desired behavior.
// Functions can call other functions, including themselves (recursive functions).
// Functions provide modularity and code reusability by encapsulating logic into separate blocks.
