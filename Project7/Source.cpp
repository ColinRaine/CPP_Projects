//-----------------------------------------------------------------
// Colin Martinez				 
// November 15, 2017                
// Final Assignment                  
//
// This program takes an input file and runs it through 3 filters.
// Outputting each to their respective file. The program implemen-
// ts an abstract data class and multiple inherited classes to ac-
// complish the transfomations.
//
//------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include "Uppercase.h"
#include "Copy.h"
#include "Encrypt.h"
using namespace std;


int main()
{
	// File objects
	ifstream input("input.txt");
	ofstream output_Upper("input_upper.txt");
	ofstream output_Copy("input_copy.txt");
	ofstream output_Encrypt("input_encr.txt");

	// Uppercase to file
	Uppercase upperCase(input, output_Upper);
	upperCase.doFilter();
	output_Upper.close();
	input.clear();
	input.seekg(0);

	// Copy to file
	Copy copy(input, output_Copy);
	copy.doFilter();
	output_Copy.close();
	input.clear();
	input.seekg(0);

	// Encrypt to file 
	Encrypt encrypt(input, output_Encrypt);
	encrypt.doFilter();
	output_Encrypt.close();

	//Pause for console
	cout << "Program complete. input.txt has been successfully copied, transformed,\nand encrypted." << endl;
	cout << "\nPress ENTER to continue...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return 0;
}