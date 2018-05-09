//***************************
// File_Name: main.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.09
// Content: Using Box Class
//***************************

#include <iostream>
#include "Box.h"

using namespace std;

int main() {
	cout << "hw10_1 : Seol-Ah Mo" << endl << endl;

	Box box1(10.0, 10.0, 10.0), box2(20.0, 20.0, 20.0);
	Box box3 = box1 + box2;

	cout << "Box #1" << endl;
	box1.print();
	cout << "Box #2" << endl;
	box2.print();
	cout << "Box #3" << endl;
	box3.print();

	return 0;
}