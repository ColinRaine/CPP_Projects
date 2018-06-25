/*
	Colin Martinez
	Project 4
	10/13/2017

	This Program displays a menu with various account options for the user
	to add, change, or display account information.
*/

#include <iostream>
#include <string>
using namespace std;

// Abstract Data Types
struct CustomerAccount 
{
	string cust_name;
	string cust_address;
	string city;
	string state;
	int zip;
	string telephone;
	double acc_balance;
	string date_lst_paymnt;
};

// Function for displaying menu to user
int displayMenu()
{
	// Variable declaration
	int choice;
	// Display Menu
	cout << "\t\tCustomer Accounts\n\n"
		<< "1. Enter new account information\n"
		<< "2. Change account information\n"
		<< "3. Display all account information\n"
		<< "4. Exit the program\n\n"
		<< "Enter Your Choice: ";
	// User Input
	cin >> choice;
	cin.ignore(); // Skip the remaining newline character 
	return choice;

}
int main()
{
	// Variable declaration
	CustomerAccount cust[20] = {};
	bool exit = false;
	const int NEW_ACC = 1, CHNG_ACC = 2, DISP_ACC = 3, EXIT = 4;

	// While Loop
	while (!exit)
	{
		// Variable declaration
		int choice = displayMenu();
		
		// Switch statement
		switch (choice)
		{
		// Case 1 switches to new customer account menu option
		case 1:
		{
			// If statement
			if (choice == NEW_ACC)
			{
				// Nested For loop
				for (int index = 0; index < 20; index++)
				{
					////////////////Collects Customer data and stores in array////////////////////
					cout << "Customer Name: ";
					getline(cin, cust[index].cust_name);
					cout << "Customer Address: ";
					getline(cin, cust[index].cust_address);
					cout << "City: ";
					getline(cin, cust[index].city);
					cout << "State: ";
					getline(cin, cust[index].state);
					cout << "ZIP Code: ";
					cin >> cust[index].zip;
					cin.ignore(); // Skip the remaining newline character 
					cout << "Telephone: ";
					getline(cin, cust[index].telephone);
					cout << "Account Balance: ";
					cin >> cust[index].acc_balance;
					cin.ignore(); // Skip the remaining newline character 
					cout << "Date of last payment: ";
					getline(cin, cust[index].date_lst_paymnt);
					//////////////////////////////////////////////////////////////////////////////
					cout << "You have entered information for customer number " << index << "\n\n";
					break;
				}
			}
		}

		// Case 2 switches to Change Account menu option
		case 2:

			// If statement
			if (choice == CHNG_ACC)
			{
				// Variable declaration
				int cust_num;

				// Prompt for customer number
				cout << "Please enter customer number: ";
				// User Input
				cin >> cust_num;
				// Assignment of user input to variabe index
				int index = cust_num;

				// Nested If statement
				if (index < 20)
				{
					///////////////////Displays Customer Information/////////////////////
					cout << "Customer Name: ";
					cout << cust[index].cust_name << endl;
					cout << "Customer Address: ";
					cout << cust[index].cust_address << endl;
					cout << "City: ";
					cout << cust[index].city << endl;
					cout << "State: ";
					cout << cust[index].state << endl;
					cout << "ZIP Code: ";
					cout << cust[index].zip << endl;
					cin.ignore(); // Skip the remaining newline character 
					cout << "Telephone: ";
					cout << cust[index].telephone << endl;
					cout << "Account Balance: ";
					cout << cust[index].acc_balance << endl;
					cout << "Date of Last Payment: ";
					cout << cust[index].date_lst_paymnt << endl;
					cout << "\n\n";
					///////////////////Change Customer Information///////////////////////
					cout << "Change Customer Name: ";
					getline(cin, cust[index].cust_name);
					cout << "Change Customer Address: ";
					getline(cin, cust[index].cust_address);
					cout << "Change City: ";
					getline(cin, cust[index].city);
					cout << "Change State: ";
					getline(cin, cust[index].state);
					cout << "Change ZIP Code: ";
					cin >> cust[index].zip;
					cin.ignore(); // Skip the remaining newline character 
					cout << "Telephone: ";
					getline(cin, cust[index].telephone);
					cout << "Change Account Balance: ";
					cin >> cust[index].acc_balance;
					cin.ignore(); // Skip the remaining newline character 
					cout << "Change Date of last payment: ";
					getline(cin, cust[index].date_lst_paymnt);
					/////////////////////////////////////////////////////////////////////

					// Confirmation prompt
					cout << "You have entered information for customer number " << index << "\n\n";
					break;
				}
				else
					// If customer number(index) falls outside of array size
					cout << "Number exceeds Customer pool." << endl;
					cout << "\n\n";
					break;
			}
		// Case 3 switches to Display All Account Info. menu option
		case 3:
			//If statement
			if (choice == DISP_ACC)
				// nested for loop
				for (int index = 0; index < 20; index++)
				{
					//////////////Displays all Customer Information/////////////
					cout << "Customer Name: ";
					cout << cust[index].cust_name << endl;
					cout << "Customer Address: ";
					cout << cust[index].cust_address << endl;
					cout << "City: ";
					cout << cust[index].city << endl;
					cout << "State: ";
					cout << cust[index].state << endl;
					cout << "ZIP Code: ";
					cout << cust[index].zip << endl;
					cout << "Telephone: ";
					cout << cust[index].telephone << endl;
					cout << "Account Balance: ";
					cout << cust[index].acc_balance << endl;
					cout << "Date of Last Payment: ";
					cout << cust[index].date_lst_paymnt << endl;
					cout << "\n\n";
					////////////////////////////////////////////////////////////

					// Prompt for continue before continuing to display customer info.
					cout << "Press 'Enter' to continue...";
					cin.ignore();
				}
		// Case 4 switches to exit program menu option
		case 4:
			if (choice == EXIT)
				return 0;
		}
	}
}