#pragma once
#include <string>

class Person {
public:
	std::string firstName;
	std::string lastName;
	int birthYear;
	int age;
	Person(std::string, std::string, int);
	virtual void showInfo() = 0;
	virtual int calcAge() = 0;
};