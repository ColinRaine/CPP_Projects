// Filter class specification file
#ifndef FILTER_H
#define FILTER_H
#include <iostream>

using namespace std;

class Filter {

	protected:
		ostream &output;					 // ostream reference object
		istream &input;					 // istream reference object
	public:

		Filter();							 // Default constuctor initialize output streams as cin/cout

		Filter(istream& input, ostream& output); // constructor that accepts initialized input/output file streams and uses them to initialize

		// Pure Virtual Function 
		virtual char transform(char ch) = 0;	 // sets as abstract filter class

		void doFilter();					 // Method for class
};
#endif
