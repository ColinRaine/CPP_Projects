//*********************
// Colin Martinez	  *							    
// Assignment 6	  *							    
// November 11, 2017  *							    
//**************************************************************
// This program asks the user to input score data for sections *
// and calculates the Student's grade.				        *
//**************************************************************

#include <iostream>
#include "Essay.h"
using namespace std;
//*******************************
// Global variables: g, s, l, c *
// Func.Proto: input		  *
//*******************************
double g, s, l, c;	
void input();		

int main()
{
	input();												// Function call
	Essay test(g, s, l, c);									// Class object instance
	test.addScores();										// Call to class method

	// Display test score and grade
	cout << "\nThe Student's score and grade: " 
		<< test.getScore() << " " << test.getLetterGrade();	

	//Pause for console
	cout << "\nPress ENTER to continue...";						
	cin.ignore(numeric_limits<streamsize>::max(), '\n');			

	return 0; 

}
//****************************************
// Function input:					 *
//								 *
// initializes data for global variables *
// and checks input for validation		 *
//****************************************

void input() 
{
	cout << "PLEASE ENTER THE STUDENT'S SCORE FOR...\n";
	//******************************************************
	cout << "\nGrammar: ";							 
	cin >> g;
	while (g > 30)
	{
		cout << "\nGrammer score must be less than 30.\n";
		cin >> g;
	}
	//*******************************************************
	cout << "Spelling: ";
	cin >> s;
	while (s > 20)
	{
		cout << "\nSpelling score must be less than 20.\n";
		cin >> s;
	}
	//*******************************************************
	cout << "Length: ";
	cin >> l;
	while (l > 20) 
	{
		cout << "\nLength score must be less than 20\n";
		cin >> l;
	}
	//*******************************************************
	cout << "Content: ";
	cin >> c;
	while (c > 30) 
	{
		cout << "\nContent score must be less than 30\n";
		cin >> c;
	}
	//********************************************************
		cin.ignore();
}

