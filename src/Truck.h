#pragma once
#include "Vehicle.h"

class Truck : public Vehicle {

private:
    double weight;
    
public:
    Truck();

    Truck(std::string model, std::string color, double weight);

    void setWeight(double weight);

    double getWeight() const;

    void printOwnFields() const;
    virtual void print() const;
    
    virtual std::shared_ptr<Vehicle> clone() const;
};