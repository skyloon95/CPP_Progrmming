//***************************
// File_Name: Car.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.03.28
// Content: Header of Car
//***************************

class Car {
private:
	int speed;
	int gear;

public:
	void initMembers(int spd, int g);
	void printInform();
	int speedUp();
	void changeGear(int g);
};