#include "Employee.h"
#include <ctime>
#include <iostream>
#pragma warning(disable:4996)

Employee::Employee(std::string i, std::string n, int r, std::string mp, double w) :
	Person(i, n, r), location(mp), salary(w) {
	age = calcAge();
}

int Employee::calcAge() {
	time_t now = time(0);
	tm* ltm = std::localtime(&now);
	return ltm->tm_year + 1900 - birthYear;
}

void Employee::showInfo() {
	std::cout << "imie: " << firstName << "\n"
		<< "nazwisko: " << lastName << "\n"
		<< "rok urodzenia: " << birthYear << "\n"
		<< "wiek: " << age << "\n"
		<< "miejsce pracy: " << location << "\n"
		<< "jaki ma stosunek do pracy(?): " << description() << "\n\n";
}

std::string Employee::description() {
	if (salary < 1200) {
		return "pracownik nienawidzi swojej pracy";
	}
	else if (salary <= 10000) {
		return "pracownik ma stosunek neutralny do swojej pracy";
	}
	else {
		return "pracownik kocha swoja prace";
	}
}