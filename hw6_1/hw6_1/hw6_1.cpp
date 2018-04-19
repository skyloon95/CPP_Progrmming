//***************************
// File_Name: hw6_1.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.13
// Content: Use Television class
//***************************

#include <iostream>
#include "Television.h"

using namespace std;

int main() {
	cout << "hw6_1 : Seol-Ah Mo" << endl << endl;

	cout << "current number of TVs : " << Television::getNumberOfTVs()<<endl<<endl;
	Television tv1;
	Television tv2("Samsung_Smart_UHD");
	Television tv3("LG_UHD", 7200000);

	tv1.print();
	tv2.print();
	tv3.print();

	cout << "current number of TVs : " << Television::getNumberOfTVs() << endl << endl;

	return 0;
}