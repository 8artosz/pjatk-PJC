#pragma once
#include "Employee.h"
#include "Student.h"

class WorkingEmployee : public Student, public Employee {
public:
	WorkingEmployee(std::string, std::string, int, std::string, bool, bool, double);
	void showInfo();
};