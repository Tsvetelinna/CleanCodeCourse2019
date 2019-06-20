#include "Bus.h"
#include <iostream>

Bus::Bus() : Vehicle() {
        this->seats = 0;
}

Bus::Bus(std::string model, std::string color, int seats) : 
        Vehicle(model, color) 
{
    this->seats = seats;
}
    
void Bus::setSeats(int seats) {
    this->seats = seats;
}


int Bus::getSeats() const {
    return this->seats;
}

void Bus::printOwnFields() const {

    std::cout << "\t Seats: " << seats << std::endl;
}

void Bus::print() const {
    std::cout << "Bus:" << std::endl;
    Vehicle::printOwnFields();
    printOwnFields();
}
    
std::shared_ptr<Vehicle> Bus::clone() const{
    return std::shared_ptr<Vehicle>(new Bus(*this));
}
