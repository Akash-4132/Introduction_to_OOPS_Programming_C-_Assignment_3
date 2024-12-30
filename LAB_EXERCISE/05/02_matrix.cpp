/* Q.2 Matrix Addition
-- Write a C++ program to perform matrix addition on two 2x2 matrices
*/

#include <iostream>
using namespace std;

int main() {
    
    int matrix1[2][2], matrix2[2][2], result[2][2];


    cout << "Enter elements for the matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix1[i][j];
        }
    }


    cout << "Enter elements for the matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix2[i][j];
        }
    }

    //  matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "\nThe sum of the two matrices is:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}
