//***************************
// ���ϸ�: hw1_1.cpp
// �ۼ���: 201432014  �𼳾�
// �ۼ���: 2018.03.21
// ����: compute volume of globe
//***************************

#include <iostream>

using namespace std;

const double pi = 3.14;

inline double calc_volume(double radius);

int main() {
	double radius;
	double volume;

	cout << "hw1_1 : �𼳾�" << endl << endl;
	cout << "�������� �Է����ּ��� : ";

	cin >> radius;

	volume = calc_volume(radius);

	cout << endl << "volume : " << volume << endl;

	return 0;
}

inline double calc_volume(double radius) {
	double temp = (4.0 / 3.0)*pi*radius*radius*radius;
	
	return temp;
}