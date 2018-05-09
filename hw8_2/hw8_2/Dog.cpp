//***************************
// File_Name: Dog.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Define Dog Class
//***************************
#include "Dog.h"
#include <string>
#include <iostream>

Dog::Dog(char* name, double speed) : Animal(name) { this->speed = speed; }

void Dog::sound() {
	std::cout << "�۸� " << getName() << std::endl;
}

void Dog::newYear() {
	this->speed += 5.0;
}

void Dog::print() {
	std::cout << getName() << " �ü�" << this->speed << "km/h" << std::endl;
}

Dog::~Dog() {}