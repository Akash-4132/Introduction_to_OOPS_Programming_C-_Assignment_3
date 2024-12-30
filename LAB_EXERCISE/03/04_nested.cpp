/*Nested Control Structures
-- Write a program that prints a right-angled triangle using stars(*) with a nested loop.
*/

#include <iostream>

using namespace std;

int main() {
    int rows;


    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        
    }


}
