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

    return 0;
}