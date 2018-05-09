//***************************
// File_Name: Point.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.20
// Content: Define Point class
//***************************

#include "Point.h"

Point::Point(int x, int y) {
	this->x = x; this->y = y;
}
int Point::getX() { return x; }
int Point::getY() { return y; }

void Point::move(int x, int y) { this->x = x; this->y = y; }

#pragma warning(disable:4996)