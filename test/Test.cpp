#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <memory>
#include "doctest.h"
#include "../src/Car.h"
#include "../src/Bus.h"
#include "../src/Motorbike.h"
#include "../src/Truck.h"
#include "../src/Mechanic.h"
#include "../src/Guard.h"
#include "../src/Cleaner.h"

using namespace std;

TEST_CASE("Testing Car class") {
    Car car("BMV", "blue", 5, 4, false);

    CHECK(car.getModel() == "BMV");
    CHECK(car.getColor() == "blue");
    CHECK(car.getSeats() == 5);
    CHECK(car.getDoors() == 4);
    CHECK(car.isAutonomous() == false);
}

TEST_CASE("Testing Bus class") {
    Bus bus("VW", "black", 100);

    CHECK(bus.getModel() == "VW");
    CHECK(bus.getColor() == "black");
    CHECK(bus.getSeats() == 100);
}


TEST_CASE("Testing Motorbike class") {
    Motorbike motorBike("Kawasaki", "purple", 850, true);

    CHECK(motorBike.getModel() == "Kawasaki");
    CHECK(motorBike.getColor() == "purple");
    CHECK(motorBike.getCapacity() == 850);
    CHECK(motorBike.isElectric() == true);
}

TEST_CASE("Testing Truck class") {
    Truck truck("VW", "yellow", 3000);

    CHECK(truck.getModel() == "VW");
    CHECK(truck.getColor() == "yellow");
    CHECK(truck.getWeight() == 3000);
}



TEST_CASE("Testing Mechanic class") {
    Mechanic mechanic("Stoqn", "Stoilov", 21, 2, 50);

    CHECK(mechanic.getFirstName() == "Stoqn");
    CHECK(mechanic.getFamilyName() == "Stoilov");
    CHECK(mechanic.getAge() == 21);
    CHECK(mechanic.getWorkingYears() == 2);
    CHECK(mechanic.getCountOfSatisfiedCustomers() == 50);
}

TEST_CASE("Testing Cleaner class") {
    Cleaner cleaner("Monika", "Cvetkova", 38, 5);

    CHECK(cleaner.getFirstName() == "Monika");
    CHECK(cleaner.getFamilyName() == "Cvetkova");
    CHECK(cleaner.getAge() == 38);
    CHECK(cleaner.getCountOfCleanedVehicles() == 5);
}

TEST_CASE("Testing Guard class") {
    Guard guard("Ivan", "Ivanov", 50, true);

    CHECK(guard.getFirstName() == "Ivan");
    CHECK(guard.getFamilyName() == "Ivanov");
    CHECK(guard.getAge() == 50);
    CHECK(guard.HasWeapon() == true);
}


