//***************************
// File_Name: hw3_1.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.03.28
// Content: Use Car class
//***************************

#include <iostream>
#include "Car.h"

using namespace std;

int main() {
	int g;

	cout << "hw3_1 : Seol-Ah Mo" << endl << endl;

	Car myCar;
	myCar.initMembers(0, 1);
	myCar.printInform();

	for (int i = 0; i < 20; i++)
		myCar.speedUp();
	myCar.printInform();

	cout << "Please input Gear_numer for gear change : ";
	cin >> g;
	myCar.changeGear(g);
	myCar.printInform();

	for (int i = 0; i < 20; i++)
		myCar.speedUp();
	myCar.printInform();

	return 0;
}