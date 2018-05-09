//***************************
// File_Name: Person.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Define Person Class
//***************************
#include "Person.h"
#include <string>
#include <iostream>

Person::Person(char* name) : Animal(name) {}

void Person::sound() {
	std::cout << "¾È³ç " << getName() << std::endl;
}

Person::~Person() {}