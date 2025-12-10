#include <iostream>
using namespace std;

// STRUCTURES - Structs are a way to group several related variables into one place.
                // Unlike an array, a structure can contain many different data types: int, string, bool, etc.


// Challenge Qn: (Struct Defined outside main())
struct student{
    string name;
    int age;
    char grade;
};


// Passing Structures in Functions

struct Plane{
    string manufacturer;
    string model_name;
    int year;
    int engineNo;
};

    // Passing Structure by Value
void myFunction(Plane p){
    cout << p.year << " " << p.manufacturer << " " << p.model_name << " " << p.engineNo << " engine." << endl;
}

    // Passing Structure by Reference
void updateYear(Plane& p){
    p.year++;
}

int main() {

    // Structure Declaration
    struct {
        int myNum;       // Member (int variable)
        string myString; // Member (string variable)
    } myStructure;       // Structure variable

    // Accessing Struct Members

    myStructure.myNum = 25;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

// ------------------------------------------------------------------------------- //
    
    // Multiple Struct Variables

    struct {
        int year;       // Member (int variable)
        string brand; // Member (string variable)
        string model; // Member (string variable)
    } myCar1, myCar2;

    myCar1.year = 1987;
    myCar1.brand = "Ferrai";
    myCar1.model = "F40";

    myCar2.year = 2023;
    myCar2.brand = "Toyota";
    myCar2.model = "Camry";

    cout << myCar1.year << " " << myCar1.brand << " " << myCar1.model << endl;
    cout << myCar2.year << " " << myCar2.brand << " " << myCar2.model << endl;

// ------------------------------------------------------------------------------- //

    // Named Structures

    struct car{ // Struct is now named car
        int year;
        string brand;
        string model;
    };
    
    // Declare struct var from named struct
    
    car myCar3;
    myCar3.brand = "BMW";
    myCar3.model = "X5";
    myCar3.year = 1999;

    cout << myCar3.year << " " << myCar3.brand << " " << myCar3.model << endl;
    
// ------------------------------------------------------------------------------- //
    
    // Challenge Qn (Struct is defined outside of Main)

    student Liam;

    Liam.name = "Liam";
    Liam.age = 35;
    Liam.grade = 'A';

    cout << "Name: " << Liam.name << endl;
    cout << "Age: " << Liam.age << endl;
    cout << "Grade: " << Liam.grade << endl;

// ------------------------------------------------------------------------------- //

    // Passing Structures in Functions (By Value and Reference)

    Plane myPlane = {"Cessna", "172 Skyhawk", 1955, 1};
    myFunction(myPlane);

    updateYear(myPlane);
    myFunction(myPlane);

    return 0;
}