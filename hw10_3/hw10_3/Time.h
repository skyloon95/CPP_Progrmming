//***************************
// File_Name: Time.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.16
// Content: Header of TIme Class
//***************************
#pragma once
#include<iostream>

using namespace std;

class Time {
private:
	int hours;
	int minutes;

public:
	Time();
	Time(int h, int m);
	Time& operator++();
	const Time operator++(int);
	Time& operator+=(int m);
	void setTime(int hours, int minutes);
	friend ostream& operator<<(ostream& os, const Time& t);
};