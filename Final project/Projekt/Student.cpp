#include "student.h"
#include <ctime>
#include <iostream>
#pragma warning(disable:4996)

Student::Student(std::string i, std::string n, int r, std::string nu, bool beer, bool learning) :
	Person(i, n, r), academy(nu), isDrinking(beer), isLearning(learning) {

	age = calcAge();
}

int Student::calcAge() {
	time_t now = time(0);
	tm* ltm = std::localtime(&now);
	return ltm->tm_year + 1900 - birthYear;
}

void Student::showInfo() {
	std::cout << "imie: " << firstName << "\n"
		<< "nazwisko: " << lastName << "\n"
		<< "rok urodzenia: " << birthYear << "\n"
		<< "wiek: " << age << "\n"
		<< "nazwa uczelni: " << academy << "\n"
		<< "jaki student jest(?): " << description() << "\n\n";
}

std::string Student::description() {
	if (isDrinking) {
		if (isLearning)
			return "Student jest doskonaly";
		else
			return "Student jest nierobem";
	}
	else {
		if (isLearning)
			return "Student jest nerdem";
		else
			return "Osoba nie jest studentem";
	}
}