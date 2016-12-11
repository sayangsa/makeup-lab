// Specification file for the ShiftSupervisor class with inline functions.
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Preprocessor directives
// Include guard
#ifndef SHIFT_SUPERVISOR_H
// Deifine constant SHIFT_SUPERVISOR_H
#define SHIFT_SUPERVISOR_H
#include "Employee.h"

// ShiftSupervisor class declaration, derived from employee class
class ShiftSupervisor : public Employee
{
private:
	// Private Attributes
	double salary;
	double productionBonus;
public:
	// Declare constructor 
	ShiftSupervisor();
	// Declare destructor
	~ShiftSupervisor();
	// Accesssor
	double getSalary() const { return salary; };
	double getProductionBonus() const { return productionBonus; };
	// Mutator
	void setSalary(double s) { salary = s; };
	void setProductionBonus(double pb) { productionBonus = pb; };
	virtual void dynamicDisplayAttributes();
};


#endif