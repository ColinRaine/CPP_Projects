/** Colin Martinez
    Project 2
**/ 

#include <iostream>
#include <fstream>
using namespace std;

//Prototype function
int *reverseArray(int[], int);

int main()
{
	// Variable declaration
	int userInput;
	int array[50];
	int count = 0;

	// User input with no prompt
	cin >> userInput;
	cout << endl;

	// Input validation
	if (userInput > 50 || userInput < 0)
		return 0;

	// Open file
	ifstream data;
	data.open("data.txt");

     // Read data from file into array
	while (count < userInput && data >> array[count])
		count++;

	// Close file
	data.close();

	// Call reverse function
	*reverseArray(array, userInput);

	// Display Array
	for (count = 0; count < userInput; count++)
		cout << array[count] << endl;

	system("pause");
	return 0;
}

int *reverseArray(int array[], int size)
{
	// Bubble Sort Descending Order
	bool swap;
	int temp;

	do 
	{	
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] < array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);

	return array;
}