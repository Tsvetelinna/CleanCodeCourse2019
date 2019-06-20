#include "Car.h"
#include <iostream>

Car::Car() : Vehicle() {
        this->seats = 0;
        this->doors = 0;
        this->autonomous = false;
}

Car::Car(std::string model, std::string color, int seats, int doors, bool autonomous) : 
        Vehicle(model, color) 
{
        this->seats = seats;
        this->doors = doors;
        this->autonomous = autonomous;
}
    
void Car::setSeats(int seats) {
    this->seats = seats;
}
void Car::setDoors(int doors) {
    this->doors = doors;
}
void Car::setAutonomous(bool autonomous) {
    this->autonomous = autonomous;
}

int Car::getSeats() const {
    return this->seats;
}

int Car::getDoors() const {
    return this->doors;
}

bool Car::isAutonomous() const {
    return this->autonomous;
}

void Car::printOwnFields() const {

    std::cout << "\t Seats: " << seats << std::endl;
    std::cout << "\t Doors: " << doors << std::endl;
    std::cout << "\t Autonomous: " << autonomous << std::endl;
}

void Car::print() const {
    std::cout << "Car:" << std::endl;
    Vehicle::printOwnFields();
    printOwnFields();
}
    
std::shared_ptr<Vehicle> Car::clone() const{
    return std::shared_ptr<Vehicle>(new Car(*this));
}


