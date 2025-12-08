// imports Input/Output Stream library before compilation
#include <iostream>
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

    cout << sciNo << "\n\n";

// --------------------------------------------------------------------------------- //

    // User Input

    string username; 
    cout << "Enter your username: ";
    cin >> username;
    cout << "Hello " << username;

    return 0;
}