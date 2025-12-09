#include <iostream>
using namespace std;

// Creating a function
void myFunction(){
    cout << "I just got executed!" << endl;
}

// Function declaration
void myFunction2();

int main() {
    myFunction();
    myFunction2();
    return 0;
}

void myFunction2(){
    cout << "Declared before defined" << endl;
}