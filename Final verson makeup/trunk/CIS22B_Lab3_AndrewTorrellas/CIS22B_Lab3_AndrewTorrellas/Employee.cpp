// Implementation file for the Employee class
// Needed for the Employee class
#include "Employee.h"

//**********************************************************************************
// The defult constructor initialized number to 0, name and hireDate to " ".
//**********************************************************************************
Employee::Employee()
{
	name = "";
	number = 0;
	hireDate = "";
}
//**********************************************************************************
// The constructor initializes name, number and hiredate.
//**********************************************************************************
Employee::Employee(string n, int num, string h)
{
	name = n;
	// Add exception for employee number
	// If the employee number is outside throw exception
	if (num < 0 || num > 9999)
	{
		string employeeException = "Invalid employee number.  Enter a number between 0 and 9999.";
		throw employeeException;
	}
	// If not set number equal to num
	else
		number = num;
		hireDate = h;
}

void Employee::setNumber(int num)
{
	// If the employee number is outside throw exception
	if (num < 0 || num > 9999)
	{
		string employeeException = "Invalid employee number.  Enter a number between 0 and 9999.";
		throw employeeException;
	}
	// If not set number equal to num
	else
		number = num;
}

//***********************************************************************************
// The desctructor displays a message
//***********************************************************************************
Employee::~Employee()
{
	cout << "Destructor for Employee class." << endl;
}

//***********************************************************************************
// Function to display class attributes using dynamic binding
//***********************************************************************************
void Employee::dynamicDisplayAttributes()
{
	cout << "--------------------------------------------------------------" << endl << endl;
	cout << "The employee's name is: " << getName() << endl;
	cout << "The employee's number is: " << getNumber() << endl;
	cout << "The employee's hiring date is: " << getHireDate() << endl;
	cout << "--------------------------------------------------------------" << endl << endl;
}

//***********************************************************************************
// Function to display class attributes using static binding
//***********************************************************************************
void Employee::staticDisplayAttributes()
{
	cout << "--------------------------------------------------------------" << endl << endl;
	cout << "The employee's name is: " << getName() << endl;
	cout << "The employee's number is: " << getNumber() << endl;
	cout << "The employee's hiring date is: " << getHireDate() << endl;
	cout << "--------------------------------------------------------------" << endl << endl;
}
