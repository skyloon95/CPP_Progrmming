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
	cout << "상자의 길이: " << length << endl;
	cout << "상자의 너비: " << width << endl;
	cout << "상자의 높이: " << height << endl;
	cout << "상자의 부피: " << getVolume() << endl << endl;
}

Box Box::operator+(const Box &b) {
	Box tmp(length + b.length, width + b.width, height + b.height);
	return tmp;
}
