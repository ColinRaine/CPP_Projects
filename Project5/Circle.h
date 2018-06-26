// Specification file for Circle class

#ifndef CIRCLE_H
#define CIRCLE_H
#include <math.h>

// Circle class delcaration 

class Circle
{
	private:
		// Variable declaration
		double radius;						
		const double pi = 3.14159;
	public:
		Circle()							// default constructor
		{ radius = 0.0; }		

		Circle( double r)					// overloaded constructor
		{ radius = r; }

		~Circle(){}						// destructor

		void setRadius(double r)				// Mutator method for setting radius
		{ radius = r; }

		double getRadius()					// Accessor method for returning radius
		{ return radius; }
		
		double getArea()					// Accessor method for calculating and returning area
		{ return pi * (pow (radius, 2.0)); } 

		double getDiameter()				// Accessor method for calculating and returning diameter
		{ return radius * 2.0; }

		double getCircumference()			// Accessor method for calculating and returning circumference
		{ return 2.0 * pi * radius; }
};

#endif 