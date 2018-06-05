//***************************
// ���ϸ�: hw13_1.cpp
// �ۼ���: 201432014 Seol-Ah Mo
// �ۼ���: 2018.05.23
// ����: Practice about templete
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
	cout << "x �� ���� ū�� : " << biggest(x, 5) << endl;   // 5�� �迭 x�� ũ��
	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << "y �� ���� ū�� : " << biggest(y, 6);    // 6�� �迭 y�� ũ��
	cout << endl;
	return 0;
}