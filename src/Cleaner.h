#pragma once
#include "People.h"

class Cleaner : public People {

private:
    int countOfCleanedVehicles;
    
public:
    Cleaner();

    Cleaner(std::string firstName, std::string familyName, int age, int countOfCleanedVehicles);

	void setCountOfCleanedVehicles(int countOfCleanedVehicles);
	int getCountOfCleanedVehicles() const;

    void printOwnFields() const;
    virtual void print() const;
    
    virtual std::shared_ptr<People> clone() const;
};