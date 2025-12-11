#include <iostream>
using namespace std;

// Exception Handling (try and catch)
    // Exception handling lets you catch and handle errors during runtime - so your program doesn't crash.

    // It uses three keywords:
        // try - defines the code to test
        // throw - triggers an exception
        // catch - handles the error

int main() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        }
        else {
            // throw (age); or
            throw 505;
        }
    }

    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old.\n";
        // cout << "Age is: " << myNum;  
        cout << "Error Number: " << myNum << endl;  
    }
    // Catch any exception
    catch (...) {
        cout << "Something went wrong.";
    }

    // Validate Integer Input
    int number;
    cout << "Enter a number: ";
    
    while (!(cin >> number)) {  // Keep asking until the user enters a valid number
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }

    cout << "You entered: " << number << endl;

    // Validate Number Range
    int number1;
    
    do {
        cout << "Choose a number between 1 and 5: ";
        cin >> number1;
    } while (number1 < 1 || number1> 5);  // Keep asking until the user enters a number between 1 and 5

    cout << "You chose: " << number1 << endl;

    // Validate String input
    string name;
    do {
        cout << "Enter your name: ";
        getline(cin, name);
    } while (name.empty());  // Keep asking until the user enters something (name is not empty)

    cout << "Hello, " << name;

    return 0;
}
