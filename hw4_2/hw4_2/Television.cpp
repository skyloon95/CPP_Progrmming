//***************************
// File_Name: Television.cpp
// Name: Seol-Ah Mo / 201432014
// Date: 2018.04.07
// Content: Define method of Television class
//***************************

#include <iostream>
#include "Television.h"

using namespace std;

Television::Television() : modelName("MyTv"), price(0) {
}

Television::Television(char* inputName) : Television(inputName, 0) {
}

Television::Television(char* inputName, int setPrice) : modelName(inputName), price(setPrice) {

}

char* Television::getModelName() {
	return this->modelName;
}
int Television::getPrice() {
	return this->price;
}

void Television::setModelName(char* inputName) {
	this->modelName = inputName;
}

void Television::setPrice(int price) {
	this->price = price;
}

double Television::getTax(double taxRatio) {
	return (double)(this->price) * taxRatio;
}

void Television::discount() {
	this->price = (int)(this->price * 0.9);
}

void Television::discount(int discount) {
	this->price = this->price - discount;
}

void Television::print() {
	cout << "Model_Name : " << this->modelName << " / " << "price : " << this->price << endl;
}
