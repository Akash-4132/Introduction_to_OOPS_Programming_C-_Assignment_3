/*Q.3. Multiplication Table
-- Write a C++ program to display the multiplication table of a given number using a for
loop.*/

#include <iostream>

using namespace std;

int main() {
    int number;


    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    // Display multiplication table using a for loop
    cout << "Multiplication table for " << number << " is:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    
}