//***************************
// File_Name: hw4_2.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.07
// Content: Use Television class
//***************************

#include <iostream>
#include "Television.h"

using namespace std;

int main() {
	cout << "hw4_2 : Seol-Ah Mo" << endl << endl;

	Television tv1;
	Television tv2("LG_LedTV");
	Television tv3("Samsung_UHD_TV", 1000000);

	tv1.print();
	tv2.print();
	tv3.print();

	tv3.discount(200000);
	tv3.discount();
	tv3.print();

	return 0;
}