#include <iostream>
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include "Truck.h"
#include "Parking.h"
#include "Cleaner.h"
#include "Guard.h"
#include "Mechanic.h"



int main() {
    Parking fancyParking;

    fancyParking.addVehicle(shared_ptr<Vehicle>(new Car("BMV", "blue", 5, 4, false)));
    fancyParking.addVehicle(shared_ptr<Vehicle>(new Motorbike("Kawasaki", "purple", 850, false)));
    fancyParking.addVehicle(shared_ptr<Vehicle>(new Bus("VW", "black", 100)));
    fancyParking.addVehicle(shared_ptr<Vehicle>(new Truck("VW", "yellow", 3000)));


    cout << "Vehicles: " << endl;
    fancyParking.printVehicles();

    fancyParking.addEmployee(shared_ptr<People>(new Mechanic("Tsvetelina", "Stoilova", 21, 2, 50)));
    fancyParking.addEmployee(shared_ptr<People>(new Guard("Ivan", "Ivanov", 50, true)));
    fancyParking.addEmployee(shared_ptr<People>(new Cleaner("Monika", "Cvetkova", 38, 5)));

    cout << "Employees: " << endl;
    fancyParking.printEmployees();


    return 0;
};
