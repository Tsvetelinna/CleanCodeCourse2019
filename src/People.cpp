#include <iostream>
#include <string>
#include "People.h"

People::People() {
	this->firstName = "N/A";
	this->familyName = "N/A";
	this->age = 0;
}

People::People(std::string firstName, std::string familyName, int age) {
	this->firstName = firstName;
	this->familyName = familyName;
	this->age = age;
}

void People::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void People::setFamilyName(std::string familyName) {
	this->familyName = familyName;
}

void People::setAge(int age) {
	this->age = age;
}


std::string People::getFirstName() const {
	return this->firstName;
}

std::string People::getFamilyName() const {
	return this->familyName;
}

int People::getAge() const {
	return this->age;
}


void People::printOwnFields() const {

	std::cout << "\t Name: " << firstName << " " << familyName  << std::endl;
    std::cout << "\t Age: " << age << std::endl;
}
