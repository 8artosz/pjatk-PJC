#include <iostream>
#include "PracujacyStudent.h"

using namespace std;


int main() {

	//Osoba* osoba = new Osoba("Imie", "Nazwisko", 1995);
	//to ma si� nie uda�, bo osoba jest abstrakcyjna (ma posiada� funkcje czysto wirtualne)
	//mo�na odkomentowa� do test�w 

	Osoba* student1 = new Student("Jan", "Bielecki", 1950, "Politechnika Warszawska", false, true);
	student1->showInfo();
	Osoba* student2 = new Student("Adam", "Abacki", 1995, "PJATK", true, true);
	student2->showInfo();
	Osoba* student3 = new Student("Lew", "Trocki", 1879, "brak", false, false);
	student3->showInfo();

	Osoba* pracownik1 = new Pracownik("Wojciech", "Olejarz", 1998, "Sage", 2137);
	pracownik1->showInfo();
	Osoba* pracownik2 = new Pracownik("Daniel", "Jablonski", 1997, "Projekt naukowy", 666);
	pracownik2->showInfo();
	Osoba* pracownik3 = new Pracownik("Daniel", "Damiecki", 1975, "Google", 12000);
	pracownik3->showInfo();


	Pracownik* pracujacyStudent1 = new PracujacyStudent("Konrad", "Maciborski", 1995, "PJATK", true, true, 125000);
	pracujacyStudent1->showInfo();
	Student* pracujacyStudent2 = new PracujacyStudent("Kapitan", "Gwiezdnej floty", 1990, "Galaktyczna akademia", true, false, 1200);
	pracujacyStudent2->showInfo();

}

