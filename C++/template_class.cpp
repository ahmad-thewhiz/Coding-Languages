#include <iostream>

// Template class for a generic Pair
template <typename T1, typename T2>
class Pair {
public:
    // Member variables
    T1 first;
    T2 second;

    // Constructor
    Pair(const T1& f, const T2& s) : first(f), second(s) {}

    // Member function to display the pair
    void display() {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }
};

int main() {
    // Example with integers
    Pair<int, double> intDoublePair(5, 3.14);
    intDoublePair.display();

    // Example with strings
    Pair<std::string, bool> strBoolPair("Hello", true);
    strBoolPair.display();

    return 0;
}
