//***************************
// 파일명: hw1_2.cpp
// 작성자: 201432014  모설아
// 작성일: 2018.03.21
// 내용: default parameter func;
//***************************

#include <iostream>

using namespace std;

int sum(int num1 = 0, int num2 = 0, int num3 = 0, int num4 = 0);

int main() {
	cout << "hw1_2 : Seol-Ah Mo" << endl << endl;
	
	cout << "sum(10,15) = " << sum(10, 15) << endl;
	cout << "sum(10,15,25) = " << sum(10, 15, 25) << endl;
	cout << "sum(10,15,25,30) = " << sum(10, 15, 25, 30) << endl;
}

int sum(int num1, int num2, int num3, int num4) {
	int sum = num1 + num2 + num3 + num4;

	return sum;
}