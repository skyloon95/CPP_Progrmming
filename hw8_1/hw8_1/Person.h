//***************************
// File_Name: Person.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Header of Person Class
//***************************
#pragma once

#include "Animal.h"

class Person : public Animal {
public:
	Person(char* name);
	virtual void sound();
	virtual ~Person();
};