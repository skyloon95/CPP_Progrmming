//***************************
// File_Name: Dog.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Header of Dog Class
//***************************
#pragma once

#include "Animal.h"

class Dog : public Animal {
private:
	double speed;
public:
	Dog(char* name, double spped);
	virtual void sound();
	virtual void newYear();
	virtual void print();
	virtual ~Dog();
};