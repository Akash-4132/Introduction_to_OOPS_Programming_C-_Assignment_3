/*Number Guessing Game
--Write a C++ program that asks the user to guess a number between 1 and 100. The
program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts.
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>    

using namespace std;

int main() {
    //  random number generator
    srand(time(0));  

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    // Loop to allow multiple attempts
    do {
        cout << "Enter your guess: ";
        cin >> guess;  // User input for the guess
        attempts++;  // Increment attempts count

        // Provide hints based on the user's guess
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber);  


}
