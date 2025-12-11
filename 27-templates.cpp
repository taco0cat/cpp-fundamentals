#include <iostream>
using namespace std;

// Templates - Templates let you write a function or class that works with different data types.
            // They help avoid repeating code and make programs more flexible.
            
    
// Function Templates
    // Syntax:
        // template <typename T>
        // return_type function_name(T parameter) {
        //     code
        // }
            
        // T is a placeholder for a data type (like int, float, etc.). You can use any name instead of T, but T is common.

template <typename T>
T add (T a, T b){
    return a + b;
}

// Class Templates
    // Syntax:
        // template <typename T>
        // class ClassName {
        //     members and methods using T
        // };
            
template <typename T>
class Box {
    public:
        T value;
        Box(T v) {
            value = v;
        }
        void show() {
            cout << "Value: " << value  << endl;
        }
};

// Class Template with 2 different data types
template <typename T1, typename T2>
class Pair {
    public:
        T1 first;
        T2 second;

        Pair(T1 a, T2 b){    
            first = a;
            second = b;
        }

        void display() {
            cout << "First: " << first << ", Second: " << second << endl;
        }
};

int main() {

    cout << add<int>(5, 10) << endl;
    cout << add<double>(3.14, 6.63) << endl;

    Box<int> intBox(10);
    Box<string> strBox("Hello World!");

    intBox.show();
    strBox.show();

    Pair<string, int> person("John", 25);
    Pair<int, double> score(51, 9.5);
    
    person.display();
    score.display();

    return 0;
}