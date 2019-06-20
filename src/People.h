#pragma once
#include <string>
#include <memory>

class People{
private:
	std::string firstName;
	std::string familyName;
	int age;

public:
	People();

	People(std::string firstName, std::string familyName, int age);

	void setFirstName(std::string firstName);
    void setFamilyName(std::string familyName);
    void setAge(int age);

    std::string getFirstName() const;
    std::string getFamilyName() const;
    int getAge() const;

	void printOwnFields() const;
    virtual void print() const = 0;
    virtual std::shared_ptr<People> clone() const = 0; 
};

