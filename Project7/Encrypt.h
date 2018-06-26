// Encrypt specification file
#ifndef ENCRYPT_H
#define ENCRYPT_H
#include "Filter.h"

class Encrypt : public Filter
{
	public:
		Encrypt() = default;				  // default constuctor, assigns to base clase constructor
		Encrypt(istream& input, ostream& output); // initialzes i/s streams with file streams
		char transform(char ch) override;		  // overridden transform method
};
#endif