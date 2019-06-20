#include "Parking.h"
#include <iostream>
using namespace std;

void Parking::addVehicle(shared_ptr<Vehicle> vehicle) {
    vehicles.push_back(vehicle);
}

void Parking::removeVehicle(int position) {
	vehicles.erase(vehicles.begin() + position);
}

void Parking::printVehicles() const {
    for (int i = 0; i < getVehiclesSize(); i++) {
        vehicles[i]->print();
        cout << endl;
    }
}

void Parking::addEmployee(shared_ptr<People> people) {
	employees.push_back(people);
}

void Parking::removeEmployee(int position) {
	employees.erase(employees.begin() + position);
}

void Parking::printEmployees() const {
	for (int i = 0; i < getEmployeesCount(); i++) {
        employees[i]->print();
        cout << endl;
    }
}

int Parking::getVehiclesSize() const {
	return vehicles.size();
}
int Parking::getEmployeesCount() const {
	return employees.size();
}