#include <iostream>

using namespace std;

int main() {

    int intVar = 10;
    float floatVar = 5.5;

    // Implicit conversion 
    float resultImplicit = intVar + floatVar;  // int is implicitly converted to float

    // Explicit Type Conversion (casting)
    double doubleVar = 8.75;
    
    // Explicit conversion of double to int 
    int resultExplicit = (int)doubleVar;  // Explicitly cast double to int

   
    cout << "Implicit Conversion Result (int + float): " << resultImplicit << endl;
    cout << "Explicit Conversion Result (double to int): " << resultExplicit << endl;

}
