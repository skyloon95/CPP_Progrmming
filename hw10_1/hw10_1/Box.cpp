//***************************
// File_Name: Box.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.09
// Content: Define Box Class
//***************************

#include "Box.h"
#include <iostream>

using namespace std;

Box::Box(double w, double l, double h) : length{ l }, width{ w }, height{ h } {
	isEmpty = true;
}
Box::Box() : length{ 0 }, width{ 0 }, height{ 0 } {
	isEmpty = true;
}
double Box::getVolume() {
	return length * width*height;
}
void Box::print() {
	cout << "������ ����: " << length << endl;
	cout << "������ �ʺ�: " << width << endl;
	cout << "������ ����: " << height << endl;
	cout << "������ ����: " << getVolume() << endl << endl;
}

Box Box::operator+(const Box &b) {
	Box tmp(length + b.length, width + b.width, height + b.height);
	return tmp;
}
