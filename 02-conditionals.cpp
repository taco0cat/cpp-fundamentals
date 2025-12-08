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

// --------------------------------------------------------------------------------- //

    // Ternary Operator
    int time1 = 20;
    // string result = (time1 < 18) ? "Good day." : "Good evening.";
    cout << ((time1 < 18) ? "Good day." : "Good evening.") << endl;

    // Nested Ternary Operator
    int time2 = 22;
    string message = (time2 < 12) ? "Good morning." : (time2 < 18) ? "Good afternoon." : "Good evening.";
    cout << message << endl;

// --------------------------------------------------------------------------------- //

    // Switches
    int day = 4;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;        
        default:
            cout << "Invalid day";
            break;
    }

    return 0;
}