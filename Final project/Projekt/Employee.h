#pragma once
#include "Person.h"

class Employee : public Person {
public:
	Employee(std::string, std::string, int, std::string, double);
	std::string location;
	double salary;
	int calcAge();
	void showInfo();
	virtual std::string description();
};