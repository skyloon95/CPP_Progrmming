//***************************
// File_Name: Box.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.04
// Content: Header of Box class
//***************************

#pragma once

class Box{
private :
	double h;	//	height
	double x;	//	horizontal length
	double y;	//	vertical length
	bool empty;	//	isEmpty or not

public :
	Box();
	Box(double h, double x, double y, bool empty);
	double getHeight();
	double getWidth();
	double getLength();
	bool isEmpty();
	void setHeight(double h);
	void setWidth(double x);
	void setLength(double y);
	void setIsEmpty(bool e);
	double getVolume();
};