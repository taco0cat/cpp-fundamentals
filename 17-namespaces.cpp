#include <iostream>
using namespace std;

// Custom Namespace - 
// A namespace is a way to group related code together under a name. It helps you avoid naming conflicts when your code grows or when you use code from multiple sources.


// Basic Namespace Example

namespace MyNamespace {
    int x = 42;
}

// The using namespace Keyword
using namespace MyNamespace;

int main() {

    cout << MyNamespace::x << endl;
    cout << x << endl;

    return 0;
}