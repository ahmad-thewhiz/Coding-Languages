#include <iostream>

// Template function for finding the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Example with integers
    int intResult = findMax(5, 10);
    std::cout << "Max of 5 and 10: " << intResult << std::endl;

    // Example with doubles
    double doubleResult = findMax(3.14, 2.718);
    std::cout << "Max of 3.14 and 2.718: " << doubleResult << std::endl;

    // Example with strings
    std::string strResult = findMax("apple", "orange");
    std::cout << "Max of 'apple' and 'orange': " << strResult << std::endl;

    return 0;
}
