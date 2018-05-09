//***************************
// File_Name: Dog.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Header of Dog Class
//***************************
#pragma once

#include "Animal.h"

class Dog : public Animal{
public :
	Dog(char* name);
	virtual void sound();
	virtual ~Dog();
};