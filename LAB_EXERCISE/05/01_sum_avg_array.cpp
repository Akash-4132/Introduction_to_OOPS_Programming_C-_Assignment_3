/*Q.1Array Sum and Average
-- Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results.*/

#include <iostream>
using namespace std;

int main() {
    int n;

   
    cout << "Enter the number of elements in the array: ";
    cin >> n;

   
    int arr[n];

    
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate sum
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate  average
    double average = static_cast<double>(sum) / n;


    cout << "Sum of the elements: " << sum << endl;
    cout << "Average of the elements: " << average << endl;


}
