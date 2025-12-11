#include <iostream>
using namespace std;

// Constructor - A constructor is a special method that is automatically called when an object of a class is created.
                // To create a constructor, use the same name as the class, followed by parentheses ():

class MyClass {
    public:
        MyClass(){
            cout << "Hello World (From the Constructor)" << endl;
        }
};


// Constructor Overloading
class Car {
    public:
        string brand;
        string model;
        int year;
        
        // Constructor with Parameters (Defined outside class)
        Car(string x, string y, int z); // Constructor Declaration

        Car(){
            brand = "undefined";
            model = "undefined";
            year = 0;
        }
};

Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}


int main() {

    MyClass myObj1; // MyClass() executes when an object is made

    // Makes object and assigns values to respective variables
    Car car1("BMW", "X5", 1999);
    Car car2("Ferrari", "F40", 1990);
    Car car3;

    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
    cout << car3.brand << " " << car3.model << " " << car3.year << "\n";

    return 0;
}