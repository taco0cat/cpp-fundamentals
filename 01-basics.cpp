// imports Input/Output Stream library before compilation
#include <iostream>
#include <string>
// "std::cout <<" --> "cout <<"
using namespace std;

int main() {
    // Print to the console and end the line (alternative: endl)
    cout << "Hello World!" << "\n\n";

// --------------------------------------------------------------------------------- //

    // Declaring Variables (Multiple) and Assigning Values
    int x, y, z;                 // Integer
    x = y = z = 50;

    float myFloat = 19.23;       // Float (7 decimals)
    double sciNo = 19.23e5;      // Double (15 decimals)
    char myLetter = 'A';         // Character
    string myText = "Taco0Cat";  // String
    bool myBoolean = true;       // Boolean

    // Constants
    const int minutesPerHour = 60;

    // Auto assignment
    auto num = 5;
    auto name = "bob";

    cout << sciNo << endl;
    cout << num << endl;
    cout << name << "\n\n";

// --------------------------------------------------------------------------------- //

    // User Input

    string username; 
    cout << "Enter your username: ";
    cin >> username;
    cout << "Hello " << username << "\n\n";

// --------------------------------------------------------------------------------- //

    // Operators (This doesnt even deserve code, imma leave notes)
        
        // Arithmetic Operators - +, -, *, /, %, ++, --
        // Assignment Operators - =, +=, -=, *=, /=, %=, &=, ^=, |=, >>=, <<=
        // Comparison Operators - ==, !=, >, <, >=, <=
        // Logical Operators - &&, ||, !

// --------------------------------------------------------------------------------- //

    // String Concatenation 
    string firstName = "John";
    string lastName = "Doe";
    string fullName1 = firstName + " " + lastName;
    string fullName2 = firstName.append(lastName); // Alternative
    
    cout << fullName1 << endl;

    // Length of String
    cout << fullName1.length() << endl;
    
    // Indexing (at function)
    cout << fullName1[0] << endl;
    cout << fullName1.at(fullName1.length() - 1) << "\n\n";

    // Read and Output Entire Line using getline
    string fullName;
    cout << "Type your full name: ";
    cin.ignore(); // Clears the input buffer
    getline (cin, fullName);
    cout << "Your name is: " << fullName << "\n\n";

    // C-Style Strings
    string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)

    cout << greeting1 << endl;
    cout << greeting2 << endl;

    return 0;
}