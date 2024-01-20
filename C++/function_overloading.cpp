#include<iostream>

using namespace std;

class OverloadingExample {

public:

    // Function Overloading based on the number of arguments
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function Overloading with different types of arguments
    int multiply(int a, int b) {
        return a * b;
    }

    float multiply(float x, int y) {
        return x * y;
    }

    // Function Overloading with a different return type
    double multiply(double a, double b) {
        return a * b;
    }

};

int main() {
    OverloadingExample obj;

    // Calling the overloaded add functions
    cout << "Sum (2 arguments): " << obj.add(10, 20) << endl;
    cout << "Sum (3 arguments): " << obj.add(12, 20, 23) << endl;

    // Calling the overloaded multiply functions
    int result1 = obj.multiply(6, 7);
    float result2 = obj.multiply(0.2, 3);
    double result3 = obj.multiply(2.5, 3.5);

    // Displaying results
    cout << "Product (int): " << result1 << endl;
    cout << "Product (float): " << result2 << endl;
    cout << "Product (double): " << result3 << endl;

    return 0;
}
