// Encrypt implementation class
#include "Encrypt.h"


//-------------------------------------------------------------
// Encrypt(i,o)
//
// takes aruments and assigns to Filter class arg. constructor
//-------------------------------------------------------------
Encrypt::Encrypt(istream& input, ostream& output) : Filter(input, output) {}

//-------------------------------------------------------------
// transform(char ch)
//
// This method accepts a character and uses ROT13 encryption to
// transform the file before returning it to doFilter().
//-------------------------------------------------------------
char Encrypt::transform(char ch)
{
	string alphabit = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	string encrypt = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	if (!isalpha(ch))		// If not a letter return character 
		return ch;
	if (!input)			// if false return character 
		return ch;

	for (unsigned i = 0; i < encrypt.size(); i++)
	{
		if (ch != alphabit[i])		// if character does not equal character in alphabit continue loop
		{
			continue;
		}						
		else
		{						
			ch = encrypt[i];		// if character equals character in alphabit, assign element in 
			break;				// encrypt to ch and break from loop
		}
	}
	return ch;


}