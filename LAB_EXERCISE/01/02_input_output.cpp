/*Q.2 Basic Input/Output
 Write a C++ program that accepts user input for their name and age and then
displays a personalized greeting.
o Objective: Practice input/output operations using cin and cout.*/


#include<iostream>
using namespace std;


int main(){
	string name;
	int age;
	cout<<"\n\n\t Enter your name ::";
	cin>>name;
	cout<<"\n\n\t Enter your age ::";
	cin>>age;
	
	cout<<"hello "<<name<<"!"<<endl;
	cout<<"your are "<<age<<" years old"<<endl;
}