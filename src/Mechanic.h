#pragma once
#include "People.h"

class Mechanic : public People {

private:
    int workingYears;
    int countOfSatisfiedCustomers;
    
public:
    Mechanic();

    Mechanic(std::string firstName, std::string familyName, int age, int workingYears, int countOfSatisfiedCustomers);
    
	void setWorkingYears(int workingYears);
	void setCountOfSatisfiedCustomers(int countOfSatisfiedCustomers);

	int getWorkingYears() const;
	int getCountOfSatisfiedCustomers() const;

    void printOwnFields() const;
    virtual void print() const;
    
    virtual std::shared_ptr<People> clone() const;
};