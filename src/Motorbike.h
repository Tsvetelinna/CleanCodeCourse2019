#pragma once
#include "Vehicle.h"

class Motorbike : public Vehicle
{
private:
    int capacity;
    bool electric;
public:
    Motorbike();
    
    Motorbike(std::string model, std::string color, int capacity, bool electric);
    
    void setCapacity(int capacity);
    void setElectric(bool electric);

    int getCapacity() const;
    bool isElectric() const;

    void printOwnFields() const;
    virtual void print() const;
    
    virtual std::shared_ptr<Vehicle> clone() const;
};