#include "Guard.h"
#include <iostream>

Guard::Guard() : People() {
        this->hasWeapon = false;
}

Guard::Guard(std::string firstName, std::string familyName, int age, bool hasWeapon) : 
        People(firstName, familyName, age) 
{
        this->hasWeapon = hasWeapon;
}
    
void Guard::setHasWeapon(bool hasWeapon) {
    this->hasWeapon = hasWeapon;
}


bool Guard::HasWeapon() const {
    return this->hasWeapon;
}

void Guard::printOwnFields() const {

    std::cout << "\t Has weapon: " << hasWeapon << std::endl;
}

void Guard::print() const {
    std::cout << "Guard:" << std::endl;
    People::printOwnFields();
    printOwnFields();
}
    
std::shared_ptr<People> Guard::clone() const{
    return std::shared_ptr<People>(new Guard(*this));
}
