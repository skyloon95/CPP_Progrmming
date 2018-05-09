//***************************
// File_Name: Animal.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Define Animal Class
//***************************
#include "Animal.h"
#include <string>
#include <iostream>

Animal::Animal(char* name) {
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->name[strlen(name)] = 0;
}

char* Animal::getName() {
	return this->name;
}

Animal::~Animal() {
	delete name;
}