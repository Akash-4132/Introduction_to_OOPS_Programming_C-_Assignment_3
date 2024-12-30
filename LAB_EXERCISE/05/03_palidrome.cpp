/*Q.3 String Palindrome Check
-- Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards).
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string variable
    string str;

    // Input the string from the user
    cout << "Enter a string: ";
    cin >> str;

    // Check if the string is a palindrome
    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;

    // Compare characters from both ends of the string
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;  // If mismatch, it's not a palindrome
            break;
        }
        start++;
        end--;
    }

    // Output the result
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
