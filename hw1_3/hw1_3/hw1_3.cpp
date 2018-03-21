//***************************
// 파일명: hw1_3.cpp
// 작성자: 201432014  모설아
// 작성일: 2018.03.21
// 내용: practice namespace
//***************************

#include <iostream>

using namespace std;

namespace myNs {
	int myMax(int n1, int n2, int n3);

	int myMin(int n1, int n2, int n3);
}

int main() {
	int n1, n2, n3, min, max;

	cout << "hw1_3 : Seol-Ah Mo" << endl << endl;
	cout << "In put 3 of number, this will find max number and min number : ";

	cin >> n1 >> n2 >> n3;

	max = myNs::myMax(n1, n2, n3);
	min = myNs::myMin(n1, n2, n3);

	cout << "max number = " << max << endl;
	cout << "min number = " << min << endl;

	return 0;
}

int myNs::myMax(int n1, int n2, int n3) {
	int max = n1;
	max = max > n2 ? max : n2;
	max = max > n3 ? max : n3;

	return max;
}

int myNs::myMin(int n1, int n2, int n3) {
	int min = n1;
	min = min < n2 ? min : n2;
	min = min < n3 ? min : n3;

	return min;
}