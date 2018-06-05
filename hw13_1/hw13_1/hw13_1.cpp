//***************************
// 파일명: hw13_1.cpp
// 작성자: 201432014 Seol-Ah Mo
// 작성일: 2018.05.23
// 내용: Practice about templete
//***************************

#include <iostream>

using namespace std;

template<typename T>
T biggest(T arr[], int len) {
	T max = arr[0];

	for (int i = 0; i < len; i++) {
		if (max < arr[i])
			max = arr[i];
	}

	return max;
}

int main(void)
{
	cout << "hw13_1 : Seol-Ah Mo" << endl << endl;
	int x[] = { 1, 10, 100, 5, 4 };
	cout << "x 중 가장 큰수 : " << biggest(x, 5) << endl;   // 5는 배열 x의 크기
	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << "y 중 가장 큰수 : " << biggest(y, 6);    // 6는 배열 y의 크기
	cout << endl;
	return 0;
}