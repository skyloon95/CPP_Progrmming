//***************************
// File_Name: Point.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.20
// Content: Header of Point class
//***************************

class Point {
	int x, y;
public:
	Point(int x, int y);
	int getX();
	int getY();
protected:
	void move(int x, int y);
};