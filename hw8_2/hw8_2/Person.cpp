//***************************
// File_Name: Person.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Define Person Class
//***************************
#include "Person.h"
#include <string>
#include <iostream>

Person::Person(char* name, int old) : Animal(name) { this->old = old; }

void Person::sound() {
	std::cout << "�ȳ� " << getName() << std::endl;
}

void Person::newYear() {
	this->old += 1;
}

void Person::print() {
	std::cout << getName() << " " << this->old << "��" << std::endl;
}

Person::~Person() {}