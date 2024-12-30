/*POP vs. OOP Comparison Program
-- Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.
-- Objective: Highlight the difference between POP and OOP approaches.*/

// pop approach
/*
#include <iostream>

using namespace std;

// Function to calculate the area of a rectangle
float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width, area;

    
    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Calculate the area using the function
    area = calculateArea(length, width);

   
    cout << "The area of the rectangle is: " << area << endl;

   
}
*/
// OOP approach

#include <iostream>

using namespace std;

// Class  Rectangle
class Rectangle {
private:
    float length;
    float width;

public:
    // Constructor to initialize the rectangle with length and width
    Rectangle(float l, float w) : length(l), width(w) {
	
	}

    // Method 
    float calculateArea() {
        return length * width;
    }

    // Method to display the area
    void displayArea() {
        cout << "The area of the rectangle is: " << calculateArea() << endl;
    }
};

int main() {
    float length, width;


    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Create an object of the Rectangle class
    Rectangle rect(length, width);

    // Call method to display the area
    rect.displayArea();

    
}