// Implementation file for ShiftSupervisor class
// Needed for the ShiftSupervisor class
#include "ShiftSupervisor.h"

//**********************************************************************************
// The constructor initialized salary and prodictionBonus to 0.0
//**********************************************************************************
ShiftSupervisor::ShiftSupervisor() : Employee() 
// call default employee constructor
{
	salary = 0.0;
	productionBonus = 0.0;
}

//***********************************************************************************
// The desctructor displays a message
//***********************************************************************************
ShiftSupervisor::~ShiftSupervisor()
{
	cout << "This is the destuctor for the ShiftSupervisor class" << endl;
}

//***********************************************************************************
// Function to display class attributes using dynamic binding
//***********************************************************************************
void ShiftSupervisor::dynamicDisplayAttributes()
{
	cout << "--------------------------------------------------------------" << endl << endl;
	cout << "The employee's name is: " << getName() << endl;
	cout << "The employee's number is: " << getNumber() << endl;
	cout << "The employee's hiring date is: " << getHireDate() << endl;
	cout << "This employee's annual salary is: " << getSalary() << endl;
	cout << "This employee's production bonus is: " << getProductionBonus() << endl << endl;
}