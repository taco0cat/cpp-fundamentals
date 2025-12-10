#include <iostream>
using namespace std;

// Function Overloading: Allows multiple functions to have the same name, as long as their parameters are different in type or number.

int plusFunc(int x, int y){
    return x + y;
}

// Overloading by parameter type
double plusFunc(double x, double y){
    return x + y;
}

// Overloading by number of parameters
int plusFunc(int x, int y, int z){
    return x + y + z;
}

int main(){

    int myNum1 = plusFunc(10, 5);
    cout << "Sum of 2 Integers: " << myNum1 << endl;
    
    double myNum2 = plusFunc(3.45, 4.64);
    cout << "Sum of 2 Doubles: " << myNum2 << endl;
 
    int myNum3 = plusFunc(5, 10, 15);
    cout << "Sum of 3 Integers: " << myNum3 << endl;


    return 0;
}