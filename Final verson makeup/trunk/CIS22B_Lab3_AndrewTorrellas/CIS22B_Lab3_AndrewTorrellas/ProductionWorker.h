// Specification file for the ProductionWorker class with inline functions.
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Preprocessor directives
// Include guard for WORKER_H
#ifndef WORKER_H
// Deifine constant WORKER_H
#define WORKER_H
#include "Employee.h"

// Declare ProductionWorker class, derived from employee class
class ProductionWorker : public Employee
{
private:
	// Private Attributes
	int shift;
	double hourlyRate;
public:
	// Declare constructor 
	ProductionWorker();
	// Overloaded constructor
	ProductionWorker(string, int, string, int, double);
	// Declare destructor
	~ProductionWorker();
	// Accessor
	int getShift() const { return shift; };
	double getHourlyRate() const { return hourlyRate; };
	// Mutator
	void setShift(int s);
	void setHourlyRate(double r);
	// dynamic binding
	virtual void dynamicDisplayAttributes();
	// static binding
	void staticDisplayAttributes();
};

#endif