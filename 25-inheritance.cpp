#include <iostream>
using namespace std;

// -------------------------------------------------------------------- NOTES ---------------------------------------------------------------------------------------- //

// Inheritance - Allows one class to reuse attributes and methods from another class. It helps you write cleaner, more efficient code by avoiding duplication.

// We group the "inheritance concept" into two categories:
    // Derived Class (child) - the class that inherits from another class
    // Base Class (parent) - the class being inherited from

// To inherit from a class, use the : symbol.

    // Single Inheritance
    // Multi-level Inheritance (Inheriting from a class that inherits from another class)
    // Multiple Inheritances
    // Access Speicifier (Protected)

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------ //


// Base Class
class Vehicle {
    public:
        string brand = "Ford";

        void honk() {
            cout << "Beep Beep!" << endl;
        }
};

// Single Inheritance: Derived Class (Class Car, derived from public of Class Vehicle)
class Car : public Vehicle {
    public:
        string model = "GT40";
};

// Multi-level Inheritance: (Class Engine Size, derived from public of Class Car, derived from public of Class Vehicle)
class EngineSize : public Car {
    public:
        string engine = "7.0L V8";
};

// Multiple Inheritance (Derived from 2 Base Classes)
    // Base Class 1
class Base1 {
    public:
        void base1() {
            cout << "Welcome to Base Class 1" << endl;
        }
};

    // Base Class 2
class Base2 {
    public:
        void base2() {
            cout << "Welcome to Base Class 2" << endl;
        }
};

// Derived Class
class Derived : public Base1, public Base2 {
};


// Protected Access Specifier - It's similar to private, but it can also be accessed in the inherited class

    // Base Class
class Employee {
    protected:
        int salary;
};

    // Derived Class
class Dev : public Employee{
    public:
        int bonus;
        void setSalary (int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};

int main() {

    // Single Inheritance
    Car myCar;
    myCar.honk();
    cout << myCar.brand << " " << myCar.model << "\n\n";

    // Multi-level Inheritance
    EngineSize myEngineSize;
    myEngineSize.honk();
    cout << myEngineSize.brand << " " << myEngineSize.model << " " << myEngineSize.engine << "\n\n";

    // Multiple Inheritance
    Derived myDerived;
    myDerived.base1();
    myDerived.base2();
    cout << endl;

    // Protected Access Specifier
    Dev dev1;
    
    dev1.setSalary(10000);
    dev1.bonus = 15000;
    
    cout << "Salary: " << dev1.getSalary() << "\n";
    cout << "Bonus: " << dev1.bonus << "\n";

    return 0;
}