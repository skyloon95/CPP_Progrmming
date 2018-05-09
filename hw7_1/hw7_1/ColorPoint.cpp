//***************************
// File_Name: ColorPoint.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.20
// Content: Define ColorPoint class
//***************************

#include "ColorPoint.h"
#include <iostream>

using namespace std;

ColorPoint::ColorPoint() : Point(0, 0){
	this->color = new char[strlen("BLACK") + 1];
	strcpy_s(this->color, strlen("BLACK") + 1, "BLACK");
	this->color[strlen("BLACK")] = 0;
}

ColorPoint::ColorPoint(int x, int y) : Point(x, y) {
	this->color = new char[strlen("BLACK") + 1];
	strcpy_s(this->color, strlen("BLACK") + 1,  "BLACK");
	this->color[strlen("BLACK")] = 0;
}

void ColorPoint::show() {
	cout << "Color is " << this->color << " and placed coordanates (" << getX() << ", " << getY() << ")" << endl;
}
void ColorPoint::setPoint(int x, int y) {
	move(x, y);
}
void ColorPoint::setColor(char* clr) {
	this->color = new char[strlen(clr) + 1];
	strcpy_s(this->color, strlen("BLACK") + 1, clr);
	this->color[strlen(clr)] = 0;
}

#pragma warning(disable:4996)