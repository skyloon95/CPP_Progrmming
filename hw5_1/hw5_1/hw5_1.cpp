//***************************
// File_Name: hw5_1.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.11
// Content: Use Television class
//***************************

#include <iostream>
#include "Television.h"

using namespace std;

int main() {
	cout << "hw4_2 : Seol-Ah Mo" << endl << endl;

	Television tv1;
	Television tv2(tv1);

	tv1.print();
	tv2.print();

	tv2.setModelName("YourTV");

	tv1.print();
	tv2.print();

	return 0;
}