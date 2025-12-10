#include <iostream>
using namespace std;

// ENUMS - An enum is a special type that represents a group of constants (unchangeable values).
    // Enum is short for "enumerations", which means "specifically listed".


    // Default Enums
enum Level {
    LOW,
    MEDIUM,
    HIGH
};

    // Enums with Values
enum Level2 {
    LOW2 = 25,
    MEDIUM2 = 50,
    HIGH2 = 75
};

    // Enums in Switch Cases
enum Level3 {
    LOW3 = 1,
    MEDIUM3,
    HIGH3
};

int main() {
    enum Level myVar = MEDIUM;
    cout << myVar << endl;
    
    enum Level2 myVar2 = MEDIUM2;
    cout << myVar2 << endl;

    enum Level3 myVar3 = HIGH3;

    switch (myVar3) {
        case 1:
            cout << "Low" << endl;
            break;
        case 2:
            cout << "Medium" << endl;
            break;
        case 3:
            cout << "High" << endl;
            break;
    }

    return 0;
}
