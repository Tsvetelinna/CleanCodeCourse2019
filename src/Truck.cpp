#include "Truck.h"
#include <iostream>

Truck::Truck() : Vehicle() {
        this->weight = 0.0;
}

Truck::Truck(std::string model, std::string color, double weight) : 
        Vehicle(model, color) 
{
        this->weight = weight;
}

void Truck::setWeight(double weight) {
    this->weight = weight;
}

double Truck::getWeight() const {
    return this->weight;
}


void Truck::printOwnFields() const {

    std::cout << "\t Weight: " << weight << std::endl;

}

void Truck::print() const {
    std::cout << "Truck:" << std::endl;
    Vehicle::printOwnFields();
    printOwnFields();
}
    
std::shared_ptr<Vehicle> Truck::clone() const{
    return std::shared_ptr<Vehicle>(new Truck(*this));
}
