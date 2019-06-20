#include "Motorbike.h"
#include <iostream>

Motorbike::Motorbike() : Vehicle() {
        this->capacity = 0;
        this->electric = false;
}

Motorbike::Motorbike(std::string model, std::string color, int capacity, bool electric) : 
        Vehicle(model, color) 
{
        this->capacity = capacity;
        this->electric = electric;
}
    
void Motorbike::setCapacity(int capacity) {
    this->capacity = capacity;
}

void Motorbike::setElectric(bool electric) {
    this->electric = electric;
}

int Motorbike::getCapacity() const {
    return this->capacity;
}

bool Motorbike::isElectric() const {
    return this->electric;
}

void Motorbike::printOwnFields() const {
    using namespace std;
    cout << "\t Capacity: " << capacity << endl;
    cout << "\t Electric: " << electric << endl;
}

void Motorbike::print() const {
    std::cout << "Motorbike:" << std::endl;
    Vehicle::printOwnFields();
    printOwnFields();
}
    
std::shared_ptr<Vehicle> Motorbike::clone() const{
    return std::shared_ptr<Vehicle>(new Motorbike(*this));
}

