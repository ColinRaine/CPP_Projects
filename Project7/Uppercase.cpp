// Uppercase implementation class file
#include "Uppercase.h"


//-------------------------------------------------------------
// Uppercase(i,o)
// takes aruments and assigns to Filter class arg. constructor
//-------------------------------------------------------------
Uppercase::Uppercase(istream& input, ostream& output) : Filter(input, output){}

//-------------------------------------------------------------
// transform(char ch)
//
// Returns an uppercase character to doFilter() which copies
// it to output.
//-------------------------------------------------------------
char Uppercase::transform(char ch)
{
	return toupper(ch);
}