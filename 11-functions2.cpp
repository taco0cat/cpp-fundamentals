#include <iostream>
using namespace std;

// Pass by Reference
void changeValue(int &num) {
    num = 50;
}

// Pass by Reference
void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

void modifyString(string &str) {
    str += " world";
}

// ---------------------------------------------------------------------------------------//

// Pass by Arrays

void calculateGPA(float gpas[5], int credits[5]) {
    float cgpa = 0;
    int totalCredits = 0;
    for (int i = 0; i < 5; i++) {
        cgpa += (gpas[i] * credits[i]);
        totalCredits += credits[i];
    }

    cgpa /= totalCredits;
    cout << "Your GPA is: " << cgpa << endl;
}

int main() {
    
    // Pass by Reference

    // Example 1:
    int value = 10;
    changeValue(value);  // Call the function and change the value to 50
    cout << value << endl;

    // Example 2
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << " " << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << " " << secondNum << "\n";

    // Example 3
    string greeting = "Hello";
    modifyString(greeting);
    cout << greeting << "\n\n";

// ---------------------------------------------------------------------------------------//

    // Pass Arrays

    float myGpas[5] = {4.0, 3.7, 3.0, 2.7, 4.0};
    int myCredits[5] = {3, 3, 2, 4, 3};

    calculateGPA(myGpas, myCredits);

  return 0;
}