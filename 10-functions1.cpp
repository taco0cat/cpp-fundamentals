#include <iostream>
using namespace std;

// Creating a function
void myFunction(){
    cout << "I just got executed!" << endl;
}

// Function declaration
void myFunction2();

// Function Definition (It can be defined after main() also)
void myFunction2(){
    cout << "Declared before defined" << endl;
}

// --------------------------------------------------------------------//

// Function with Single Parameter
void myFunction3(string fname){
    cout << "Welcome " << fname <<endl;
}

// Function with Multiple Parameters
void myFunction4(string fname, int age){
    cout << "Welcome " << fname << " you are " << age << " years old" << endl;
}

// --------------------------------------------------------------------//

// Default Parameter

void myFunction5(string username = "Guest", int age = 18){
    cout << "Welcome " << username << " you are " << age << " years old" << endl;
}

// --------------------------------------------------------------------//

// Return Values
    // The void keyword, used in the previous examples, indicates that the function should not return a value.
    // If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function:

int sum(int num1 = 0, int num2 = 0) {
    cout << "Sum: ";
    return num1 + num2;
}

int doubleGame(int x = 0){
    return x * 2;
}

int main() {
    myFunction();
    
    myFunction2();

    myFunction3("Taco0cat");

    myFunction4("Taco0cat", 25);

    myFunction5();

    cout << sum(5, 10) << "\n\n";

    for (int i = 1; i <= 5; i++){
        cout << "Double of " << i << " is " << doubleGame(i) << endl;
    }

    return 0;
}

