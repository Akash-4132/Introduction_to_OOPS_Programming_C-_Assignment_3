/*Q.3 Inheritance Example
--Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance.
*/

#include <iostream>
#include <string>
using namespace std;

// Base class 
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) : 
	name(n), age(a) {
	}

    // Function to display person details
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 
class Student : public Person {
private:
    string course;

public:
    // Constructor to initialize name, age, and course
    Student(string n, int a, string c) : Person(n, a), course(c) {}

    // Function to display student details
    void displayStudentDetails() {
        displayPersonDetails();  // Call base class function to display name and age
        cout << "Course: " << course << endl;
    }
};

// Derived class 
class Teacher : public Person {
private:
    string subject;

public:
    
    Teacher(string n, int a, string s) : Person(n, a), subject(s) {}

    // Function to display teacher details
    void displayTeacherDetails() {
        displayPersonDetails();  // Call base class function to display name and age
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create objects of Student and Teacher
    Student student1("Akashh", 21, "flutter");
    Teacher teacher1("ritisha parmar", 50, "dart");


    cout << "Student Details:" << endl;
    student1.displayStudentDetails();
    cout << endl;

    cout << "Teacher Details:" << endl;
    teacher1.displayTeacherDetails();
    cout << endl;

}
