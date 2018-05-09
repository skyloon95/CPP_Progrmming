//***************************
// File_Name: main.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.09
// Content: Using Box Class
//***************************

#include <iostream>
#include "Box.h"

using namespace std;

bool operator==(const Box &b1, const Box &b2) {
	if (b1.length != b2.length) return false;
	if (b1.width != b2.width) return false;
	if (b1.height != b2.height) return false;
	return true;
}

int main() {
	cout << "hw10_2 : Seol-Ah Mo" << endl << endl;
	Box box1(10.0, 10.0, 10.0), box2(20.0, 20.0, 20.0);

	cout << "Box #1" << endl;
	box1.print();
	cout << "Box #2" << endl;
	box2.print();

	cout << "result? " << (box1 == box2) << endl;

	return 0;
}