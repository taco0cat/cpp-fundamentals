#include <iostream>
using namespace std;

int main(){

    int x = 20, y = 30;

    // if-else statement
    if (x > y){
        cout << "x is greater than y" << endl; 
    }
    else if (x < y){
        cout << "x is lesser than y" << endl; 
    }
    else{
        cout << "x is equal to y" << endl;
    }

    // Ternary Operator
    int time1 = 20;
    // string result = (time1 < 18) ? "Good day." : "Good evening.";
    cout << ((time1 < 18) ? "Good day." : "Good evening.");

    // Nested Ternary Operator
    int time2 = 22;
    string message = (time2 < 12) ? "Good morning." : (time2 < 18) ? "Good afternoon." : "Good evening.";
    cout << message;

    return 0;
}