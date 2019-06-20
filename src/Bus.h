#pragma once
#include "Vehicle.h"

class Bus : public Vehicle {

private:
    int seats;
    
public:
    Bus();

    Bus(std::string model, std::string color, int seats);
    
    void setSeats(int seats);

    int getSeats() const;

    void printOwnFields() const;
    virtual void print() const;
    
    virtual std::shared_ptr<Vehicle> clone() const;
};