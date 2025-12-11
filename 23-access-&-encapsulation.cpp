#include <iostream>
using namespace std;

// Access Specifier - control how the members (attributes and methods) of a class can be accessed.
                    // public - members are accessible from outside the class
                    // private - members cannot be accessed (or viewed) from outside the class
                    // protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

                    // By default, all members of a class are private if you don't specify an access specifier

// Encapsulation - The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.


class MyClass {
    public:
        int x;
    private:
        int y;
};

class Employee {
    private:
        int salary;

    public:
        // Set Salary
        void setSalary(int s){
            salary = s;
        }
        // Get Salary
        string getSalary(){
            return to_string(salary) + " USD";
        }
};

int main() {

    MyClass myObj1;
    myObj1.x = 10;
    // myObj1.y = 10; // Not Allowed (error: y is private)

    Employee emp1;

    emp1.setSalary(5000);
    cout << emp1.getSalary();

    return 0;
}