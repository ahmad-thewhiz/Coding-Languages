#include <iostream>
#include <string>

using namespace std;

int main() {

    //a string is a sequence of characters. 
    //It is used to represent and manipulate text or a collection of letters, numbers, and symbols. 
    //Just like a word or a sentence is made up of individual letters, a string is made up of individual characters.
    //A string is a sequence of characters. It is used to represent and manipulate text or a collection of letters, numbers, and symbols. 
    //Just like a word or a sentence is made up of individual letters, a string is made up of individual characters.

    // Declare a string variable
    string name;

    // Prompt the user to enter their name
    cout << "Enter your name: ";

    // Take input from the user using getline
    getline(cin, name);

    // Print the entered name
    cout << "Hello, " << name << "!" << endl;

    name[2]='X';
    name[4]='X';

    cout<<"Modified string is : " << name << endl;
    return 0;
}
