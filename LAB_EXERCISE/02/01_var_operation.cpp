/* Variables and Constants
-- Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them. */

#include <iostream>

using namespace std;

int main() {
    
    int num1 = 10;
    float num2 = 3.5;
    char character = 'A';
    string message = "Hello, World!";

    // Declare a constant
    const float PI = 3.14159;

    // Perform some operations
    int sum = num1 + 5;
    float product = num2 * 2;
    char nextChar = character + 1;

    
    cout << "Integer: " << num1 << ", Sum: " << sum << endl;
    cout << "Float: " << num2 << ", Product: " << product << endl;
    cout << "Character: " << character << ", Next: " << nextChar << endl;
    cout << "Message: " << message << endl;
    cout << "Constant PI: " << PI << endl;

    
}

