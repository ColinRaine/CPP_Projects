//************************
//	 Colin Martinez	*
//	 Project 5		*
//	 October 26, 2017	*
//************************

#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	// variable declaration
	Circle circle;
	double radius;

	// Displays default constructor value
	cout << "Calling default constructor...\n"
		<< "The circle's radius in the default Circle Object is: " << circle.getRadius() << endl << "\n";

	// Initialized circle2 with 20 and displays output 
	Circle circle2(20);
	cout << "Initializing circle2 with a number...\n"
		<< "The circle's radius in the circle2 Object is now: " << circle2.getRadius() << endl << "\n";

	// Asks user for input and sets radius value for main and class
	cout << "Please enter a radius: ";
	cin >> radius;
	circle2.setRadius(radius);

	// Displays values that were calculated from class method to user
	cout << "\nThe circle's radius in the circle2 object is now: " << circle2.getRadius() << endl
		<< "The circle's area in the circle2 object is: " << circle2.getArea() << endl
		<< "The circle's diameter in the circle2 object is: " << circle2.getDiameter() << endl
		<< "The circle's circumference in the circle2 object is: " << circle2.getCircumference() << endl << "\n";

	system("pause");
	return 0;
}