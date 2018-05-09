//***************************
// File_Name: Animal.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Header of Animal Class
//***************************
#pragma once

class Animal {
private :
	char* name;
public :
	Animal(char* name);
	char* getName();
	virtual void sound() = 0;
	virtual ~Animal();
};
