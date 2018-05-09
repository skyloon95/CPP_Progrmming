//***************************
// File_Name: hw7_1.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.20
// Content: Using ColorPoint class
//***************************

#include <iostream>
#include "ColorPoint.h"

using namespace std;

int main() {
	cout << "hw7_1 : Seol-Ah Mo" << endl << endl;
	
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();

	return 0;
}

#pragma warning(disable:4996)