#include "Cleaner.h"
#include <iostream>

Cleaner::Cleaner() : People() {
        this->countOfCleanedVehicles = 0;
}

Cleaner::Cleaner(std::string firstName, std::string familyName, int age,
        int countOfCleanedVehicles) : People(firstName, familyName, age) 
{
        this->countOfCleanedVehicles = countOfCleanedVehicles;
}

void Cleaner::setCountOfCleanedVehicles(int countOfCleanedVehicles) {
    this->countOfCleanedVehicles = countOfCleanedVehicles;
}

int Cleaner::getCountOfCleanedVehicles() const {
    return this->countOfCleanedVehicles;
}

void Cleaner::printOwnFields() const {

    std::cout << "\t Count of Cleaned Vehicles: " << countOfCleanedVehicles << std::endl;
}

void Cleaner::print() const {
    std::cout << "Cleaner:" << std::endl;
    People::printOwnFields();
    printOwnFields();
}
    
std::shared_ptr<People> Cleaner::clone() const{
    return std::shared_ptr<People>(new Cleaner(*this));
}
