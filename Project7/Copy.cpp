// Copy class implementation file
#include "Copy.h"

//-------------------------------------------------------------
// Copy(i,o)
//
// takes aruments and assigns to Filter class arg. constructor
//-------------------------------------------------------------
Copy::Copy(istream& input, ostream& output) : Filter(input, output) {}

//-------------------------------------------------------------
// transform(char ch)
//
// Returns a character to doFilter() which copies it to output.
//-------------------------------------------------------------
char Copy::transform(char ch)
{
	return ch;	
}