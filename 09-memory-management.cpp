#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // Memory management is the process of controlling how much memory your program uses and how it is used. 
    // This includes creating, using, and releasing memory when it's no longer needed.
    
    // The "new" keyword
    
    int* ptr = new int; // allocate memory for an integer
    *ptr = 35; // store the value 35 in the allocated memory
    cout << *ptr << endl; // print the value stored in the allocated memory

    // The "delete" keyword
    delete ptr;

// --------------------------------------------------------------------- //

    // Using new and delete with Arrays

    int numOfGuests;

    cout << "How many guests? : ";
    cin >> numOfGuests;

    if (numOfGuests <= 0){
        cout << "Invalid number of guests" << endl;
        return 0;
    }

    // Create Memory Space for x num of guests
    string* guests = new string[numOfGuests];

    // Ignore the leftover newline character after reading numGuests
    cin.ignore();

    // Enter guest names
    for (int i = 0; i < numOfGuests; i++){
        cout << "Enter name for guest " << (i + 1) << ": ";
        getline(cin, guests[i]);
    }

    // Show all guests

    for (int i = 0; i < numOfGuests; i++){
        cout << guests[i] << endl;
    }

    // Cleanup memory
    delete[] guests;

    return 0;
}