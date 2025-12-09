#include <iostream>
using namespace std;

int main() {

    // Creating Pointers

        // Pointers: A pointer is a variable that stores the memory address of a variable as its value.
        // A pointer variable points to a data type (like int or string) of the same type, 
        // Pointer is created with the * operator. 

    string food = "Pizza";
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    cout << food << "\n";

    cout << &food << "\n";
    cout << ptr << "\n\n";

// --------------------------------------------------------------------- //

    // Dereference a Pointer: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n\n";

// --------------------------------------------------------------------- //

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";

    return 0;
}