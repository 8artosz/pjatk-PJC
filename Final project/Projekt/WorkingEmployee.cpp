#include "WorkingEmployee.h"
#include <iostream>

WorkingEmployee::WorkingEmployee(std::string i, std::string n, int r, std::string mp, bool beer, bool learning, double w) :
	Student(i, n, r, mp, beer, learning), Employee(i, n, r, mp, w) {};

void WorkingEmployee::showInfo() {
	std::cout << "imie: " << Student::firstName << "\n"
		<< "nazwisko: " << Student::lastName << "\n"
		<< "rok urodzenia: " << Student::birthYear << "\n"
		<< "wiek: " << Student::age << "\n"
		<< "miejsce pracy i nauki: " << academy << "\n"
		<< "jaki student jest(?): " << Student::description() << "\n"
		<< "jaki ma stosunek do pracy(?): " << Pracownik::description() << "\n\n";
}