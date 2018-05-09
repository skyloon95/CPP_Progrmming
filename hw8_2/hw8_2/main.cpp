//***************************
// File_Name: main.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.08
// Content: Using Class Anamal, Dog, Person
//***************************

#include "Dog.h"
#include "Person.h"
#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	Animal *arrAnimal[4] = { new Dog("진돌이", 13.5), new Dog("진순이", 12.5), new Person("홍길동", 20), new Person("박길동", 25) };
	
	cout << "hw8_2 : Seol-Ah Mo" << endl << endl;
	
	for (int i = 0; i < 4; i++) {
		arrAnimal[i]->print();
	}

	cout << endl;

	for (int i = 0; i < 4; i++) {
		arrAnimal[i]->sound();
	}

	for (int i = 0; i < 4; i++) {
		arrAnimal[i]->newYear();
	}

	cout << endl;
	cout << "------------1년 후-----------" << endl;

	for (int i = 0; i < 4; i++) {
		arrAnimal[i]->print();
	}

	cout << endl;

	for (int i = 0; i < 4; i++) {
		arrAnimal[i]->newYear();
	}

	cout << "------------2년 후-----------" << endl;

	for (int i = 0; i < 4; i++) {
		arrAnimal[i]->print();
	}
}