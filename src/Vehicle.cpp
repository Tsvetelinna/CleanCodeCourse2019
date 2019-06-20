#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
    this->model = "N/A";
    this->color = "N/A";
}

Vehicle::Vehicle(std::string model, std::string color) {
    this->model = model;
    this->color = color;
}

void Vehicle::setModel(std::string model) {
    this->model = model;
}

void Vehicle::setColor(std::string color) {
    this->color = color;
}

std::string Vehicle::getModel() const {
    return this->model;
}

std::string Vehicle::getColor() const {
    return this->color;
}

void Vehicle::printOwnFields() const {

    std::cout << "\t Model: " << model << std::endl;
    std::cout << "\t Color: " << color << std::endl;
}