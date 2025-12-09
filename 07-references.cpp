#include <iostream>
using namespace std;

int main() {

    // References: A reference variable is an alias for an existing variable. It is created using the "&" operator

    string food = "Pizza";
    string &meal = food;

    cout << food << endl;
    cout << meal << endl;

    // Updating through Reference

    meal = "Burger";

    cout << food << endl;
    cout << meal << endl;

// --------------------------------------------------------------------- //

    // Memory Address of a Variable with "&" operator

    cout << &food;

    return 0;
}