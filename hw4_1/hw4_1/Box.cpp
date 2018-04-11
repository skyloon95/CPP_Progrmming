//***************************
// File_Name: Box.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.04
// Content: define Box class
//***************************

#include <iostream>
#include "Box.h"

Box::Box() {
	h = 5.0;
	x = 5.0;
	y = 5.0;
	empty = false;
}

Box::Box(double h, double x, double y, bool empty) {
	this->h = h;
	this->x = x;
	this->y = y;
	this->empty = empty;
}

double Box::getHeight() {
	return this->h;
}

double Box::getWidth() {
	return this->x;
}

double Box::getLength() {
	return this->y;
}

bool Box::isEmpty() {
	return this->empty;
}

void Box::setHeight(double h) {
	this->h = h;
}

void Box::setWidth(double x) {
	this->x = x;
}

void Box::setLength(double y) {
	this->y = y;
}

void Box::setIsEmpty(bool e) {
	this->empty = e;
}

double Box::getVolume() {
	return this->x*this->y*this->h;
}