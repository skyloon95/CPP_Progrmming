//***************************
// File_Name: hw10_3.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.16
// Content: Use TIme Class
//***************************
#include <iostream>
#include "Time.h"

using namespace std;

ostream& operator<<(ostream& os, const Time& t) {
	if (t.minutes < 10) {
		os << t.hours << ":0" << t.minutes << endl;
	}
	else {
		os << t.hours << ":" << t.minutes << endl;
	}
	return os;
}

int main() {
	cout << "hw10_3 : Seol-Ah Mo" << endl << endl;

	Time t1(10, 59);

	cout << t1;
	++t1;
	cout << t1;
	t1++;
	cout << t1;
	t1 += 125;
	cout << t1;

	return 0;
}
