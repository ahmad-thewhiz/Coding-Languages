#include <iostream>

using namespace std;

int main() {
    // The for loop is used for repetitive execution of a block of code
    // It consists of three parts: initialization, condition, and increment/decrement

    //The initialization, condition, and increment/decrement parts are optional but must be separated by semicolons (;).

    // Example 1: Count from 1 to 5
    cout << "Example 1: Counting from 1 to 5" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Example 2: Count backwards from 10 to 1
    cout << "Example 2: Counting backwards from 10 to 1" << endl;
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

    // Example 3: Calculate the sum of numbers from 1 to 10
    cout << "Example 3: Calculating the sum of numbers from 1 to 10" << endl;
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;

    return 0;
}
