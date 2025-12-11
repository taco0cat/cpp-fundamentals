#include <iostream>
using namespace std;

// Class Methods - Methods are functions that belongs to the class.
                // There are two ways to define functions that belongs to a class:
                // 1. Inside class definition
                // 2. Outside class definition


// Define a Method Inside the Class
class MyClass {
    public:
        void myMethod() {   // Method/function defined inside the class
            cout << "Hello World! (Defined Inside the Class)" << endl;
        }
};

// Define a Method Outside the Class with parameters
class Car {
    public:
        int speed(int maxSpeed);
};


// Another Example
class Dog {
    public:
        void bark(){
            cout << "Woof!" << endl;
        }
};


// Method/function definition outside the class
int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {

    MyClass myObj1;
    myObj1.myMethod();

    Car myCar1;
    cout << myCar1.speed(200) << endl;

    Dog myDog1;
    myDog1.bark();

    return 0;
}