#pragma once
//***************************
// File_Name: Television.h
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.07
// Content: Header of Television class
//***************************

class Television {
private:
	char* modelName;
	int price;

public:
	Television();
	Television(char* inputName);
	Television(char* inputName, int setPrice);

	char* getModelName();
	int getPrice();
	void setModelName(char* inputName);
	void setPrice(int price);
	double getTax(double taxRatio);
	void discount();
	void discount(int discount);
	void print();
};