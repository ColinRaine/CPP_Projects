// Project1CM.cpp 
// Colin Martinez

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

// function prototype
int linearSearch(int[], int, int);

// Constant Initialization 
const int SIZE = 10;

int main()
{
	// Array for winning lotto numbers
	int lottoNumbers[SIZE] = { 13579, 26791, 26792, 33445, 55555,
						    62483, 77777, 79422, 85647, 93121 };
	// Variable declaration
	int userInput;
	int results;

	// Console output
	cout << "Please enter this weeks 5 digit lottery number: \n";

	// Input from user
	cin >> userInput;

	// Call to search array
	results = linearSearch(lottoNumbers, SIZE, userInput);

	// If/Else statements
	if (results == -1)
		cout << "Lotto number not found. Try again next week!\n";
	else
		cout << "YOU WON!! INVEST WISELY!\n";


    return 0;
}

// Linear search function 
int linearSearch(int list[], int numElem, int value)
{

		int index = 0;      // used as subscript to search array
		int position = -1;  // records position of search value
		bool found = false; // Flag, indicates when value is found

		while (index < numElem && !found)
		{
			if (list[index] == value)         // if the value is found
			{
				found = true;                // set the flag
				position = index;		    // record the value's subscript
			}
			index++;					    // go to the next element
		}
		return position;				    // return the position, or -1
	
}