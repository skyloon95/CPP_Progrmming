//***************************
// File_Name: hw4_1.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.04
// Content: Use Box class
//***************************
#include <iostream>
#include "Box.h"

using namespace std;

int main() {
	cout << "hw4_1 : Seol-Ah Mo" << endl << endl;

	Box b1(3.5, 4.4, 5.0, false), b2, b3;

	b3.setHeight(4.0);
	b3.setLength(5.0);
	b3.setWidth(2.4);

	cout << "volume of b1 : " << b1.getVolume() << endl;
	cout << "volume of b2 : " << b2.getVolume() << endl;
	cout << "volume of b3 : " << b3.getVolume() << endl;

	if (b1.getVolume() >= b2.getVolume() && b1.getVolume() >= b3.getVolume()) {
		cout << "b1 has largest volume : " << b1.getVolume() << endl;
	}
	else if (b2.getVolume() >= b1.getVolume() && b2.getVolume() >= b3.getVolume()) {
		cout << "b2 has largest volume : " << b2.getVolume() << endl;
	}
	else {
		cout << "b3 has largest volume : " << b3.getVolume() << endl;
	}

	return 0;
}