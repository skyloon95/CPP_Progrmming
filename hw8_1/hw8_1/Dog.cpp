//***************************
// File_Name: Dog.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Define Dog Class
//***************************
#include "Dog.h"
#include <string>
#include <iostream>

Dog::Dog(char* name) : Animal(name) {}

void Dog::sound() {
	std::cout << "¸Û¸Û " << getName() << std::endl;
}

Dog::~Dog() {}