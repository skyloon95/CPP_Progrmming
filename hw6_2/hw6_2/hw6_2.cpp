//***************************
// File_Name: hw6_2.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.13
// Content: Use Television class
//***************************

#include <iostream>
#include "Television.h"

using namespace std;

int main() {
	cout << "hw6_2 : Seol-Ah Mo" << endl << endl;

	cout << "current number of TVs : " << Television::getNumberOfTVs() << endl << endl;
	Television tv1;
	Television tv2("Samsung_Smart_UHD");
	Television tv3("LG_UHD", 7200000);

	showTvIfo(tv1);
	showTvIfo(tv2);
	showTvIfo(tv3);

	return 0;
}