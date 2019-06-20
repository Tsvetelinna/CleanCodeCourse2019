#include "Mechanic.h"
#include <iostream>

Mechanic::Mechanic() : People() {
        this->workingYears = 0;
        this->countOfSatisfiedCustomers = 0;
}

Mechanic::Mechanic(std::string firstName, std::string familyName, int age, int workingYears, 
        int countOfSatisfiedCustomers) : People(firstName, familyName, age) 
{
        this->workingYears = workingYears;
        this->countOfSatisfiedCustomers = countOfSatisfiedCustomers;
}
    
void Mechanic::setWorkingYears(int workingYears) {
    this->workingYears = workingYears;
}

void Mechanic::setCountOfSatisfiedCustomers(int countOfSatisfiedCustomers) {
    this->countOfSatisfiedCustomers = countOfSatisfiedCustomers;
}

int Mechanic::getWorkingYears() const {
    return this->workingYears;
}

int Mechanic::getCountOfSatisfiedCustomers() const {
    return this->countOfSatisfiedCustomers;
}

void Mechanic::printOwnFields() const {

    std::cout << "\t Working years: " << workingYears << std::endl;
    std::cout << "\t Count of Satisfied Customers: " << countOfSatisfiedCustomers << std::endl;
}

void Mechanic::print() const {
    std::cout << "Mechanic:" << std::endl;
    People::printOwnFields();
    printOwnFields();
}
    
std::shared_ptr<People> Mechanic::clone() const{
    return std::shared_ptr<People>(new Mechanic(*this));
}
