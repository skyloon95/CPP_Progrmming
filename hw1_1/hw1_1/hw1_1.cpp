//***************************
// 파일명: hw1_1.cpp
// 작성자: 201432014  모설아
// 작성일: 2018.03.21
// 내용: compute volume of globe
//***************************

#include <iostream>

using namespace std;

const double pi = 3.14;

inline double calc_volume(double radius);

int main() {
	double radius;
	double volume;

	cout << "hw1_1 : 모설아" << endl << endl;
	cout << "반지름을 입력해주세요 : ";

	cin >> radius;

	volume = calc_volume(radius);

	cout << endl << "volume : " << volume << endl;

	return 0;
}

inline double calc_volume(double radius) {
	double temp = (4.0 / 3.0)*pi*radius*radius*radius;
	
	return temp;
}