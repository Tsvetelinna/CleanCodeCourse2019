#pragma once
#include <string>
#include <memory>

class Vehicle {

private:
    std::string model;
    std::string color;
    
public:
    Vehicle();
    Vehicle(std::string model, std::string color);

    void setModel(std::string model);
    void setColor(std::string color);

    std::string getModel() const;
    std::string getColor() const;

    void printOwnFields() const;
    virtual void print() const = 0;
    virtual std::shared_ptr<Vehicle> clone() const = 0; 
};