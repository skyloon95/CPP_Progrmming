//***************************
// File_Name: ColorPoint.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.20
// Content: Header of ColorPoint class
//***************************
#pragma once

#include "Point.h"

class ColorPoint : protected Point {
private :
	char *color;
public :
	ColorPoint();
	ColorPoint(int x, int y);
	void show();
	void setPoint(int x, int y);
	void setColor(char* clr);
};