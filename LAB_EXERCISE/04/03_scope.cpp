#include <iostream>

using namespace std;


int globalVar = 10;


void localScopeExample() {
    int localVar = 20;  // Local variable
    cout << "Inside localScopeExample function:" << endl;
    cout << "Local variable: " << localVar << endl;
    cout << "Global variable: " << globalVar << endl;
}


void modifyGlobal() {
    globalVar = 30;  // Modifying global variable
    cout << "Inside modifyGlobal function:" << endl;
    cout << "Global variable after modification: " << globalVar << endl;
}

int main() {
    cout << "Inside main function:" << endl;
    cout << "Global variable before modification: " << globalVar << endl;


    localScopeExample();


    modifyGlobal();

    cout << "Inside main function after modifying global variable:" << endl;
    cout << "Global variable: " << globalVar << endl;


}
