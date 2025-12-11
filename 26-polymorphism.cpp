#include <iostream>
using namespace std;

// ---------------------------------------------------------------------------------------------------------------------------------------------- //

// Polymorphism (many forms) - it occurs when we have many classes that are related to each other by inheritance.

    
    // Actual use of Polymorphism
// Virtual Functions in Polymorphism - A virtual function is a member function in the base class that can be overridden in derived classes.
                                    // They let different objects respond differently to the same function call.

// Why Use Virtual Functions?
    // Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.
    // With virtual, it checks the actual object the pointer is pointing to.
    
    // Or to put it even more simply:
    // Without virtual: the base function runs, even if the object is from a child class.
    // With virtual: the child's version runs, like you expect.


// The -> Operator - Its used to access members (like functions or variables) through a pointer.
    // It's a shortcut for writing (*pointer).member:
    // Example:
        // Animal* a = new Animal();
        // a->sound(); // Same as (*a).sound();

// ---------------------------------------------------------------------------------------------------------------------------------------------- //

class Animal {
    public:
        void sound() {
            cout << "The animal makes a sound" << endl;
        }
};

class Dog : public Animal {
    public:
        void sound() {
            cout << "The dog barks" << endl;
        }
};

// With Virtual functions
class Animal2 {
    public:
        virtual void sound() { // Use virtual only in the base class
            cout << "Animal Sounds" << endl;
        }
};

class Cat : public Animal2 {
    public:
        void sound() override { // Use override (optional, but recommended) in the derived class for clarity
            cout << "Cat Meows" << endl;
        }
};   


int main() {

    Animal myAnimal;
    Dog myDog;

    myAnimal.sound();
    myDog.sound();
    cout << endl;


    // Actual use of Polymorphism - Virtual Functions

    // Without Virtual Function
    Animal* a;  // Declare a pointer to the base class (Animal)
    Dog d;      // Create an object of the derived class (Dog)
    a = &d;     // Point the base class pointer to the Dog object
    a->sound(); // Call the sound() function using the pointer. Since sound() is not virtual, this calls Animal's version

    // With Virtual Function
    Animal2* a2;  // Declare a pointer to the base class (Animal2)
    Cat c;        // Create an object of the derived class (Cat)
    a2 = &c;      // Point the base class pointer to the Cat object
    a2->sound();  // Call the sound() function using the pointer. Since sound() is virtual, this calls Cat's version

    return 0;
}