#pragma once
#include "People.h"

class Guard : public People {

private:
    bool hasWeapon;
    
public:
    Guard();

    Guard(std::string firstName, std::string familyName, int age, bool hasWeapon);
    
	void setHasWeapon(bool hasWeapon);

	bool HasWeapon() const;

    void printOwnFields() const;
    virtual void print() const;
    
    virtual std::shared_ptr<People> clone() const;
};