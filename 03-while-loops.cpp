#include <iostream>
using namespace std;

int main(){

    // While Loop
    int countdown = 10;
    while (countdown > 0) {
        cout << countdown << "\n";
        countdown--;
    }
    cout << "Happy New Year!!\n";
    
// --------------------------------------------------- //

    // Do While Loop
    int i = 10;
    do {
        cout << "i is " << i << "\n";
        i++;
    } while (i < 5);

    int number;
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number > 0);

    return 0;
}