#include <iostream>

using namespace std;

int main() {
    // The while loop is used for repetitive execution of a block of code
    // It executes the block of code as long as the condition is true

    // Example 1: Count from 1 to 5 using a while loop
    cout << "Example 1: Counting from 1 to 5 using a while loop" << endl;
    int i = 1;  // Initialization
    while (i <= 5) {  // Condition
        cout << i << " ";
        i++;  // Increment
    }
    cout << endl;

    // Functioning of a while loop
    //The condition is checked before each iteration. If it evaluates to true, the loop body is executed. If it evaluates to false, the loop terminates.
    //The loop variable must be updated within the loop body to prevent an infinite loop.
    //If the condition is false from the beginning, the loop body will never execute.

    // Example 2: Calculate the sum of numbers from 1 to 10 using a do-while loop
    cout << "Example 2: Calculating the sum of numbers from 1 to 10 using a do-while loop" << endl;
    int sum = 0;
    int j = 1;  // Initialization
    do {
        sum += j;
        j++;  // Increment
    } while (j <= 10);  // Condition
    cout << "Sum: " << sum << endl;

    //Functioning of a do-while loop
    //The loop body is executed at least once, regardless of the condition.
    //The condition is checked after each iteration. If it evaluates to true, the loop continues. If it evaluates to false, the loop terminates.
    //The loop variable must be updated within the loop body to prevent an infinite loop.

    return 0;
}
