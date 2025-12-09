#include <iostream>
#include <vector> // For Vectors
using namespace std;

int main(){

    // 1D Arrays

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[2] = "Honda";

    int myNum[3] = {10, 20, 30};
    
    cout << cars[2] << endl;
    cout << myNum[0] << "\n\n";

// --------------------------------------------------- //

    // Displaying Entire Array using Loops

    for (int i = 0; i < 3; i++) {
        cout << i << " = " << myNum[i] << endl;
    }

    for (string car : cars){
        cout << car << endl;
    }

// --------------------------------------------------- //

    // Omit Array Size (Static Size)

    string newCars[] = {"Volvo", "BMW", "Ford"};

// --------------------------------------------------- //

    // Vectors (Dynamic Size) (This just an example, vectors are not being introduced yet)

    vector<string> newCars2 = {"Volvo", "BMW", "Ford"};

    // Adding to Vectors
    newCars2.push_back("Honda");
    newCars2.push_back("Mazda");

    for (auto ncar : newCars2){
        cout << ncar << " ";

    }
    cout << "\n\n";

// --------------------------------------------------- //

    // Size of an Array ( sizeof() )

    int numbers[5] = {10, 20, 50, 30, 40};
    
    cout << sizeof(numbers) << " bytes" << endl; // Memory size in bytes - int = 4 bytes, 5 elements = 20 bytes
    cout << sizeof(numbers[0]) << " elements" << "\n\n"; // Length of array
    

    // Loop through arrays using sizeof()

    int myNumbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        cout << myNumbers[i] << "\n";
    }

// --------------------------------------------------- //

    // Lowest Age Program
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);

    int lowestAge = ages[0];

    for (int age : ages) {
        if (lowestAge > age) {
            lowestAge = age;
        }
    }

    cout << "The lowest age is: " << lowestAge << "\n";

    return 0;
}