// Specification file for the Employee class with inline functions.
using namespace std;
#include <iostream>
#include <cstdlib>
#include <string>
// Preprocessor directives
// Inculde guard
#ifndef EMPLOYEE_H
// Define constant EMPLPYEE_H
#define EMPLOYEE_H

// Employee class declaration
class Employee
{
private:
	// Private Attributes
	string name;
	int number;
	string hireDate;
public:
	// Declare constructor 
	Employee();
	// Overloade constructor
	Employee(string n, int num, string h);
	// Declare destructor
	~Employee();
	// Accesssor
	string getName() const { return name; };
	int getNumber() const { return number; };
	string getHireDate() const { return hireDate; };
	// Mutator
	void setName(string na) { name = na; };
	void setNumber(int num);
	void setHireDate(string date) { hireDate = date; };
	// dynamic binding
	virtual void dynamicDisplayAttributes();
	// static binding
	void staticDisplayAttributes();
};

#endif