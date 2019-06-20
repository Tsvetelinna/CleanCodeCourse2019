#pragma once
#include <memory>
#include <vector>
#include "Vehicle.h"
#include "People.h"
using namespace std;

class Parking
{
private:
    vector<shared_ptr<Vehicle> > vehicles;
    vector<shared_ptr<People> > employees;
public:
    void addVehicle(shared_ptr<Vehicle> vehicle);
    void removeVehicle(int position);

    void addEmployee(shared_ptr<People> people);
    void removeEmployee(int position);

    void printVehicles() const;
    void printEmployees() const;

    int getVehiclesSize() const;
    int getEmployeesCount() const;
};