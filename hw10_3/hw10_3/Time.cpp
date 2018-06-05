//***************************
// File_Name: Time.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.16
// Content: Define TIme Class
//***************************

#include "Time.h"

Time::Time() {
	hours = 0;
	minutes = 0;
}
Time::Time(int h, int m) {
	hours = h;
	minutes = m;
}

Time& Time::operator++() {
	int overH = 0;

	if (++minutes >= 60) {
		overH = minutes / 60;
		minutes = minutes % 60;
	}

	hours += overH;

	return *this;
}

const Time Time::operator++(int) {
	int overH = 0;
	int tmpM = 0;

	if (++minutes >= 60) {
		overH = minutes / 60;
		tmpM = minutes % 60;
	}

	const Time tmp(hours + overH, tmpM);

	return tmp;
}

Time& Time::operator+=(int m) {
	int overH = 0;
	minutes += m;

	if (minutes >= 60){
		overH = minutes / 60;
		minutes = minutes % 60;
	}
	
	hours += overH;

	return *this;
}

void Time::setTime(int hours, int minutes) {
	this->hours = hours;
	this->minutes = minutes;
}
