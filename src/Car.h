#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
private:
    int seats;
    int doors;
    bool autonomous;
public:
    Car();

    Car(std::string model, std::string color, int seats, int doors, bool autonomous);
    
    void setSeats(int seats);
    void setDoors(int doors);
    void setAutonomous(bool autonomous);

    int getSeats() const;
    int getDoors() const;
    bool isAutonomous() const;

    void printOwnFields() const;
    virtual void print() const;
    
    virtual std::shared_ptr<Vehicle> clone() const;
};