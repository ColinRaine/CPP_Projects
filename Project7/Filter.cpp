// Implementation file for Filter class
#include "Filter.h"

//--------------------------------------------
// Filter()
//
// initializes to cin and cout
//--------------------------------------------
Filter::Filter() : input(cin),output(cout){}

//--------------------------------------------
// Filter(i,o)
//
// initializes constructor with file streams
//--------------------------------------------
Filter::Filter(istream& i, ostream& o) : input(i), output(o){}

//--------------------------------------------
// doFilter()
//
// Uses the transform function to filter file
//--------------------------------------------
void Filter::doFilter()
{
	char ch;
	while (input.get(ch))		// while there's a character in input...
	{
		ch = transform(ch);		// assign the character returned from transform to ch		
		output.put(ch);		// send character to output file
	}
}


