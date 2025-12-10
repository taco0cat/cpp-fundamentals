#include <iostream>
using namespace std;

    // RECURSION : Recursion is the technique of making a function call itself.
    // This technique provides a way to break complicated problems down into simple problems which are easier to solve.


// Example 1: Adding a range of numbers

int rangeSum(int k){
    if (k > 0){
        return k + rangeSum(k - 1);
    }
    else{
        return 0;
    }
}

// Example 2: Countdown

void countdown(int n){
    if (n > 0){
        cout << n << " ";
        countdown(n - 1);
    }
}

// Example 3: Factorial of a Number

int factorial(int num){
    if (num > 1) {
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}

int main(){
    
    int result = rangeSum(10);

    cout << "Sum of Range: " << result << endl;

    countdown(5);
    cout << endl;

    int factNum = 10;
    cout << "Factorial of " << factNum << " is: " << factorial(factNum);

    return 0;
}