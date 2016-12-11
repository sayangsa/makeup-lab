// Specification file for the TeamLeader class with inline functions.
#include <iostream>
#include <cstdlib>
#include <string>
#include "ProductionWorker.h"
using namespace std;

// Preprocessor directives
// Inculde guard
#ifndef TEAM_LEADER_H
// Define constant TEAM_LEADER_H
#define TEAM_LEADER_H
#include "ProductionWorker.h"

// TeamLeader class declaration
class TeamLeader : public ProductionWorker
{
private:
	// Private Attributes
	double amount;
	double required;
	double attended;
public:
	// Declare constructor 
	TeamLeader();
	// Declare overloaded constructor
	TeamLeader(double am, double r, double at);
	// Declare constructor
	~TeamLeader();
	// Accesssor
	double getAmount() const { return amount; };
	double getRequired() const { return required; };
	double getAttended() const { return attended; };
	// Mutator
	void setAmount(double a) { amount = a; };
	void setRequired(double r) { required = r; };
	void setAttended(double at);
	
	// Dynamic binding
	virtual void dynamicDisplayAttributes();
};

#endif