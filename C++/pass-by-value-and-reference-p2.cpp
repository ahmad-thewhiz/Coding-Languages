#include <iostream>

using namespace std;

// Function declaration
void modifyArrayByReference(int arr[], int size);  // Pass by reference

// Note: Arrays, by default, work on pass by refernce

int main() {
    // Pass by value vs pass by reference with arrays

    const int size = 5;
    int numbers[size] = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Pass by reference
    modifyArrayByReference(numbers, size);
    cout << "After pass by reference: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function definition - Pass by reference
void modifyArrayByReference(int arr[], int size) {
    // This function modifies the array passed by reference
    for (int i = 0; i < size; i++) {
        arr[i] *= 3;
    }
}
