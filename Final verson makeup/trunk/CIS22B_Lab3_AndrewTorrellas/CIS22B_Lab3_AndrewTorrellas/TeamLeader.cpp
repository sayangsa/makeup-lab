// Implementation file for TeamLeader class
// Needed for the TeamLeader class
#include "TeamLeader.h"

//**********************************************************************************
// The constructor initialized amount, required and attended to 0.0
//**********************************************************************************
TeamLeader::TeamLeader() : ProductionWorker()
{
	amount = 0.0;
	required = 0.0;
	attended = 0.0;
}

//**********************************************************************************
// The overloaded constructor initializes amount, required and attended
//**********************************************************************************
TeamLeader::TeamLeader(double am, double r, double at)
{
	amount = am;
	required = r;
	if (at < 8)
	{
		// define string exception
		string employeeException = "Employee training incomplete.";
		// throw exception
		throw employeeException;
	}
	else
		attended = at;
}

//***********************************************************************************
// The desctructor displays a message
//***********************************************************************************
TeamLeader::~TeamLeader()
{
	cout << "Destructor for TeamLeader class." << endl;
}

//***********************************************************************************
// Setter function for variable attended with built in exception
//***********************************************************************************
void TeamLeader::setAttended(double at)
{
	if (at < 8)
	{
		attended = at;
		string employeeException = "Employee training incomplete.  Complete at least 8 hours of training.";
		throw employeeException;
	}
	else
		attended = at;
}

//***********************************************************************************
// Function to display class attributes using dynamic binding
//***********************************************************************************
void TeamLeader::dynamicDisplayAttributes()
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
	cout << "This employee's hourly pay rate is: $" << getHourlyRate() << endl;
	cout << "This employee's monthly bonus is: " << getAmount() << endl;
	cout << "This employee's required training hours are: " << getRequired() << endl;
	cout << "This employee's attended training hours are: " << getAttended() << endl << endl;
	cout << "--------------------------------------------------------------" << endl << endl;
}