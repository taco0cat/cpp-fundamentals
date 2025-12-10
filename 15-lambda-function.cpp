#include <iostream>
#include <functional> // Needed for std::function (Passing Lambda to Functions)
using namespace std;

// Lambda Functions: A lambda function is a small, anonymous function you can write directly in your code. 
                // It's useful when you need a quick function without naming it or declaring it separately.
                // Syntax: [capture] (parameters) { code };


// Passing Lambda to Functions

    // Functions that take a function as a parameter.
void myFunction(function<void()> func){
    func();
    func();
}


int main(){

    // Basic Lambda Function
    auto message = [] () {
        cout << "Hello World!" << endl;
    };

    message();

// -------------------------------------------------------------------- //

    // Lambda with Parameters

    auto add = [] (int a, int b) {
        return a + b;
    };

    cout << add(5, 10) << "\n\n";

// -------------------------------------------------------------------- //

    // Passing Lambda to Functions
    myFunction(message);
    cout << endl;

// -------------------------------------------------------------------- //

    // Using Lambda in Loops

    for (int i = 1; i <= 3; i++) {
        auto show = [i]() {
            cout << "Number: " << i << "\n";
        };
        show();
    }

// -------------------------------------------------------------------- //

    // Capture Clause [] - You can use the [ ] brackets to give a lambda access to variables outside of it.
    // Copy of x is used, so if we change x later on, lambda will not be affected

    int x = 10;
    auto show1 = [x]() {
        cout << x << "\n";
    };
    show1();

// -------------------------------------------------------------------- //

    // Capture by Reference
        // If you want the lambda to use the latest value of a variable (not just a copy), you can use [&] to capture it by reference.

    int y = 10;

    auto show2 = [&y] () {
        cout << y << "\n";
    };

    y = 20; 
    
    show2();
    
    return 0;
}