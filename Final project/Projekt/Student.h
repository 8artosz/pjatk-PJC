#pragma once
#include "Person.h"

class Student : public Person {
public:
	std::string academy;
	bool isDrinking;
	bool isLearning;

	Student(std::string, std::string, int, std::string, bool, bool);
	int calcAge();
	void showInfo();
	virtual std::string description();
};