// Implementation file for ProductionWorker class
// Needed for productionWorker class
#include "ProductionWorker.h"

//**********************************************************************************
// The constructor initialized shift and hourlyRate to 0.0
//**********************************************************************************
ProductionWorker::ProductionWorker() : Employee() // Call default employee constructor
{
	shift = 0;
	hourlyRate = 0.0;
}
//**********************************************************************************
// The overloaded constructor
//**********************************************************************************
ProductionWorker::ProductionWorker(string n, int num, string h, int s, double r) : Employee(n, num, h)
// Overloaded ProductionWorker Constructor. 
// Passes n, num, h to Employee's overloaded constructor
{
	shift = s;
	// set condition for exception
	if (s != 1 && s != 2)
	{
		string invalidShift = "Error: Invalid shift number entered, please enter 1 or 2: ";
		// throw exception
		throw invalidShift;
	}
	hourlyRate = r;
	if (r <= 0)
	{
		string invalidPayrate = "Error: Invalid value for payrate entered, please enter a postive value: ";
		// throw exception
		throw invalidPayrate;
	}
}

//***********************************************************************************
//setShift sets the value of the member variable shift.
//***********************************************************************************
void ProductionWorker::setShift(int s)
{
	// set condition
	if (s != 1 && s != 2)
	{
		// define a string type exception
		string invalidShift = "Error: Invalid shift number entered, please enter 1 or 2: ";
		// throw exception
		throw invalidShift;
	}
	else
		shift = s;
}


//***********************************************************************************
//setHourlyRate sets the value of the member variable hourlyRate
//***********************************************************************************

void ProductionWorker::setHourlyRate(double r)
{
	if (r <= 0.0)
	{
		// define string type exception
		string invalidPayrate = "Error: Invalid value for payrate entered, please enter a postive value: ";
		// throw exception
		throw invalidPayrate;
	}
	else
		hourlyRate = r;
}

//***********************************************************************************
// The desctructor displays a message
//***********************************************************************************
ProductionWorker::~ProductionWorker()
{
	cout << "Destructor for ProductionWorker class." << endl;
}

//***********************************************************************************
// Function to display class attributes using dynamic binding
//***********************************************************************************
void ProductionWorker::dynamicDisplayAttributes()
{
	cout << "--------------------------------------------------------------" << endl << endl;
	cout << "The employee's name is: " << getName() << endl;
	cout << "The employee's number is: " << getNumber() << endl;
	cout << "The employee's hiring date is: " << getHireDate() << endl;
	// Set condition for accessor getShift from ProductionWork class
	if (getShift() == 1)
		cout << "This employee works day shift." << endl;
	else if (getShift() == 2)
		cout << "This employee works night shift." << endl;
	cout << "This employee's hourly pay rate is: $" << getHourlyRate() << endl << endl;
	cout << "--------------------------------------------------------------" << endl << endl;
}

//***********************************************************************************
// Function to display class attributes using static binding
//***********************************************************************************
void ProductionWorker::staticDisplayAttributes()
{
	cout << "--------------------------------------------------------------" << endl << endl;
	cout << "The employee's name is: " << getName() << endl;
	cout << "The employee's number is: " << getNumber() << endl;
	cout << "The employee's hiring date is: " << getHireDate() << endl;
	// Set condition for accessor getShift from ProductionWork class
	if (getShift() == 1)
		cout << "This employee works day shift." << endl;
	else if (getShift() == 2)
		cout << "This employee works night shift." << endl;
	cout << "This employee's hourly pay rate is: $" << getHourlyRate() << endl << endl;
	cout << "--------------------------------------------------------------" << endl << endl;
}