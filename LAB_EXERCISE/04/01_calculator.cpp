/*Simple Calculator Using Functions
-- Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input.
*/

#include <iostream>

using namespace std;

// Function for addition
float add(float a, float b) {
    return a + b;
}

// Function for subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for division
float divide(float a, float b) {
    
        return a / b;
    
    
}

int main() {
    float num1, num2;
    int choice;

    cout << "Simple Calculator" << endl;
    cout << "Choose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice  ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;


    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }


}
