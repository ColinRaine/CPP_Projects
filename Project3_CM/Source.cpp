/*
	Colin Martinez
	Project 3
*/

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

//Function prototypes
int upperCase(char [], int);
int lowerCase(char[], int);
int digits(char[], int);

int main()
{
	// Variable Declaration/Initialization 
	ifstream inputFile;
	int count = 0;
	const int SIZE = 32;
	char array[SIZE];
	
	// Open text file
	inputFile.open("text.txt");

	// Read text file into array
	while (count < SIZE && inputFile >> array[count])
		count++;

	// Close text file
	inputFile.close();

	// Display Uppercase characters
	cout << "Uppercase character(s): ";
	cout << upperCase(array, SIZE) << endl;

	// Display Lowercase characters
	cout << "Lowercase character(s): ";
	cout << lowerCase(array, SIZE) << endl;

	// Display Digit(s)
	cout << "Digit(s): ";
	cout << digits(array, SIZE) << endl;

	system("pause");
	return 0;

}

// function that counts the number of uppercase characters
int upperCase(char array[], int size)
{
	int counter = 0;
	for (int count = 0; count < size; count++)
	{
		if (isupper(array[count]))
			counter++;
	}
	return counter;
}

// Function that counts the number of lowercase characters
int lowerCase(char array[], int size)
{
	int counter = 0;
	for (int count = 0; count < size; count++)
	{
		if (islower(array[count]))
			counter++;
	}
	return counter;
}

// Function that counts the number of digits
int digits(char array[], int size)
{
	int counter = 0;
	for (int count = 0; count < size; count++)
	{
		if (isdigit(array[count]))
			counter++;
	}
	return counter;
}
