#include <iostream>
using namespace std;

// ---------------------------------------------------------------------------------------------------------------------------- //
// ------------------------------------------------- // NOTES // -------------------------------------------------------------- //
                        
// Object-oriented programming is about creating "objects", which can hold data and functions that work on that data.

// What are Classes and Objects?
    // Classes and objects are the two main aspects of object-oriented programming.
    // A class defines what an object should look like, and an object is created based on that class. For example:
    // When you create an object from a class, it inherits all the variables and functions defined inside that class.

// ---------------------------------------------------------------------------------------------------------------------------- //


    // Creating a Class
class MyClass {             // The Class
    public:                 // Access Specifier (Public Access)
        int myNum;          // Attribute 1
        string myString;    // Attribute 2
};

class Car {
    public:
        string brand;
        string model;
        int year;
};

class Book {
    public:
        string title;
        string author;
        int year;
};


int main() {

    // Creating an Object
    MyClass myObj; // Object of class "MyClass"

        // Access attributes and set values
    myObj.myNum = 25;
    myObj.myString = "Taco0cat";

    cout << myObj.myNum << endl;
    cout << myObj.myString<< endl;

// -------------------------------------------------- //

    // Multiple Objects
    Car car1;
    
    car1.brand = "Ferrari";
    car1.model = "F40";
    car1.year = 1989;

    Car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1969;

    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n\n";

// -------------------------------------------------- //

    // Another Example

    Book book1;
    Book book2;

    book1.title = "Matilda";
    book1.author = "Roald Dahl";
    book1.year = 1988;
    
    book2.title = "The Giving Tree";
    book2.author = "Shel Silverstein";
    book2.year = 1964;

    cout << book1.title << ", " << book1.author << ", " << book1.year << endl;
    cout << book2.title << ", " << book2.author << ", " << book2.year << endl;

    return 0;
}