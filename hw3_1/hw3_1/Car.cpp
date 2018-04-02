//***************************
// File_Name: Car.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.03.28
// Content: Car class
//***************************

#include <iostream>
#include "Car.h"

using namespace std;

void Car::initMembers(int spd, int g) {
	speed = spd;
	gear = g;
}

void Car::printInform() {
	cout << "<<State Information>>" << endl;
	cout << "Speed : " << speed << endl;
	cout << "Gear : " << gear << endl;
}

int Car::speedUp() {
	return ++speed;
}

void Car::changeGear(int g) {
	gear = g;
}
