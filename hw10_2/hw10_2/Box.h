//***************************
// File_Name: Box.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.05.09
// Content: Header of Box Class
//***************************

#pragma once
class Box {
private:
	double length;
	double width;
	double height;
	bool isEmpty;
public:
	Box(double w, double l, double h);
	Box();
	double getVolume();
	void print();
	Box operator+(const Box &b);
	friend bool operator== (const Box &b1, const Box &b2);
};