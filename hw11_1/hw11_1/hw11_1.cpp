//***************************
// 파일명: hw11_1.cpp
// 작성자: 201432014 Seol-Ah Mo
// 작성일: 2018.05.16
// 내용: method overoading
//***************************
#include <iostream>

using namespace std;

class BoundCheckIntArray
{
private:
	int * arr;
	int arrlen;



public:
	BoundCheckIntArray(int len) :arrlen(len)
	{
		arr = new int[len];
	}

	int& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}

	int operator[] (int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}
	int GetArrLen() const
	{
		return arrlen;
	}


	~BoundCheckIntArray()
	{
		delete[]arr;
	}

	BoundCheckIntArray& operator=(const BoundCheckIntArray& bCIA) {
		if (bCIA.GetArrLen() > arrlen) {
			cout << "out of bound" << endl;
			arrlen = -1;
		}
		else {
			for (int i = 0; i < bCIA.GetArrLen(); i++) {
				arr[i] = bCIA[i];
			}
			arrlen = bCIA.GetArrLen();
		}

		return *this;
	}

	friend ostream& operator<< (ostream& os, const BoundCheckIntArray& bCIA);
	friend istream& operator>> (istream& os, BoundCheckIntArray& bCIA);
};

ostream& operator<< (ostream& os, const BoundCheckIntArray& bCIA) {
	for (int i = 0; i < bCIA.GetArrLen(); i++) {
		os << i << "번째 원소 : " << bCIA[i] << endl;
	}

	return os;
}

istream& operator >> (istream& os, BoundCheckIntArray& bCIA) {
	for (int i = 0; i < bCIA.GetArrLen(); i++) {
		cout << i << "번째 원소 : ";
		os >> bCIA[i];
	}

	return os;
}

int main() {
	cout << "hw11_1 : Seol-Ah Mo" << endl;
	BoundCheckIntArray arr(5);

	for (int i = 0; i<5; i++)
		arr[i] = (i + 1) * 11;

	cout << "arr 출력" << endl; // cout 연산자 중복
	cout << arr << endl << endl;

	BoundCheckIntArray cpy1 = arr;    // 복사생성자
	cout << "cpy1 출력" << endl;
	cout << cpy1 << endl << endl;

	BoundCheckIntArray cpy2(3);
	cout << "cpy2 입력" << endl;
	cin >> cpy2;    // cin 연산자 중복
	cout << "cpy2 출력" << endl;
	cout << cpy2 << endl << endl;

	BoundCheckIntArray cpy3(5);
	cpy3 = cpy2;   // 대입 연산자 중복
	if (cpy3.GetArrLen() == -1)
		return 0;
	cout << "cpy3 출력" << endl;
	cout << cpy3 << endl << endl;

	return 0;
}