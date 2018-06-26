// Uppercase specification file
#ifndef UPPERCASE_H
#define UPPERCASE_H
#include "Filter.h"

class Uppercase : public Filter
{

	public:
		Uppercase() = default;				    // default constuctor, assigns to base clase constructor
		Uppercase(istream& input, ostream& output); // initialzes i/s streams with file streams
		char transform(char ch) override;		    // overridden transform method           

};
#endif
