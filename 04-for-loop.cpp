#include <iostream>
using namespace std;

int main(){

    // For Loop
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
    }
    cout << "Sum is " << sum;

// --------------------------------------------------- //

    // Nested Loops
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n";

        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n";
        }
    }
    
// --------------------------------------------------- //

    // For Each Loop (loop through elements in an array)
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << "\n";
    }

// --------------------------------------------------- //

    // Break Statement (Exit the loop)
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    // Continue Statement (Skip an iteration)
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }

    return 0;
}