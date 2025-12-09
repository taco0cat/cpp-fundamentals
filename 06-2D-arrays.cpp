#include <iostream>
using namespace std;

int main() {

    // 2D Arrays (Multidimensional Arrays)
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    letters[0][0] = "Z";
    cout << letters[0][2] << "\n\n";  // Outputs "C"


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << " ";
        }
        cout << endl;
    }


// --------------------------------------------------------------------------------------------------------------------------------------------------------- //

    // BATTLESHIP GAME

    bool ships[4][4] = {
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };

    int hits = 0;
    int numberOfTurns = 0;

    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates\n";

        cout << "Choose a row number between 0 and 3: ";
        cin >> row;
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        if (ships[row][column]) {
            ships[row][column] = 0;
            hits++;
            cout << "Hit! " << (4-hits) << " left.\n\n";
        }
    
        else {
            cout << "Miss\n\n";
        }

        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
  
    return 0;
}
