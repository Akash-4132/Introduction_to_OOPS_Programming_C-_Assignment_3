/*Operator Demonstration
--Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results.
*/
#include <iostream>

using namespace std;

int main() {
    
    int a = 10, b = 5;
    bool x = true, y = false;

    
    // Arithmetic Operators

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quotient = a / b;
    int remainder = a % b;
    
     // Arithmetic Results
    cout << "Arithmetic Operators:" << endl;
    cout << "Sum (a + b): " << sum << endl;
    cout << "Difference (a - b): " << diff << endl;
    cout << "Product (a * b): " << prod << endl;
    cout << "Quotient (a / b): " << quotient << endl;
    cout << "Remainder (a % b): " << remainder << endl;


    // ========================
    // Relational Operators
    // ========================
    bool isEqual = (a == b);
    bool isNotEqual = (a != b);
    bool isGreaterThan = (a > b);
    bool isLessThan = (a < b);
    bool isGreaterOrEqual = (a >= b);
    bool isLessOrEqual = (a <= b);

    
    // Relational Results
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << isEqual << endl;
    cout << "a != b: " << isNotEqual << endl;
    cout << "a > b: " << isGreaterThan << endl;
    cout << "a < b: " << isLessThan << endl;
    cout << "a >= b: " << isGreaterOrEqual << endl;
    cout << "a <= b: " << isLessOrEqual << endl;
    // ========================
    // Logical Operators
    // ========================
    bool andResult = (x && y);  // AND operation
    bool orResult = (x || y);   // OR operation
    bool notResult = !x;        // NOT operation
    
     // Logical Results
    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << andResult << endl;
    cout << "x || y: " << orResult << endl;
    cout << "!x: " << notResult << endl;

    // ========================
    // Bitwise Operators
    // ========================
    int bitwiseAnd = a & b;  // AND
    int bitwiseOr = a | b;   // OR
    int bitwiseXor = a ^ b;  // XOR
    int bitwiseNot = ~a;     // NOT (bitwise complement)
    int leftShift = a << 1;  // Left shift by 1
    int rightShift = a >> 1; // Right shift by 1

  

    // Bitwise Results
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b (Bitwise AND): " << bitwiseAnd << endl;
    cout << "a | b (Bitwise OR): " << bitwiseOr << endl;
    cout << "a ^ b (Bitwise XOR): " << bitwiseXor << endl;
    cout << "~a (Bitwise NOT): " << bitwiseNot << endl;
    cout << "a << 1 (Left shift): " << leftShift << endl;
    cout << "a >> 1 (Right shift): " << rightShift << endl;

}
