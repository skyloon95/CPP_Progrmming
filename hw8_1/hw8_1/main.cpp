//***************************
// File_Name: main.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Using Animal, Dog, Person Class
//***************************

#include "Dog.h"
#include "Person.h"
#include <iostream>

int main(void) {
	Dog dog("������");
	Person person("ȫ�浿");

	std::cout << "hw8_1 : Seol-Ah Mo" << std::endl << std::endl;
	dog.sound();
	person.sound();

	return 0;
}