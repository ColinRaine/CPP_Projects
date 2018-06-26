// Copy specification file
#ifndef COPY_H
#define COPY_H
#include "Filter.h"

class Copy:public Filter
{
	public:
		Copy() = default;					// default constuctor, assigns to base clase constructor
		Copy(istream& input, ostream& output);  // initialzes i/s streams with file streams
		char transform(char ch) override;       // overridden transfrom method   
};
#endif 



