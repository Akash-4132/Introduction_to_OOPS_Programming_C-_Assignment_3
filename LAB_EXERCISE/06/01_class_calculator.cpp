/*Q.1Class for a Simple Calculator
-- Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objectsto use these functions.
*/

#include <iostream>
using namespace std;

class Calculator {
public:
    
    double add(double a, double b) {
        return a + b;
    }

    
    double subtract(double a, double b) {
        return a - b;
    }


    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        
            return a / b;
      
        
    }
};

int main() {
    double num1, num2;
    int choice;

   
    Calculator calc;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    
    cout << "\nSelect an operation: \n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }


}
