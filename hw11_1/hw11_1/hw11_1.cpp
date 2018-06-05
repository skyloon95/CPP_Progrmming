//***************************
// ���ϸ�: hw11_1.cpp
// �ۼ���: 201432014 Seol-Ah Mo
// �ۼ���: 2018.05.16
// ����: method overoading
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
		os << i << "��° ���� : " << bCIA[i] << endl;
	}

	return os;
}

istream& operator >> (istream& os, BoundCheckIntArray& bCIA) {
	for (int i = 0; i < bCIA.GetArrLen(); i++) {
		cout << i << "��° ���� : ";
		os >> bCIA[i];
	}

	return os;
}

int main() {
	cout << "hw11_1 : Seol-Ah Mo" << endl;
	BoundCheckIntArray arr(5);

	for (int i = 0; i<5; i++)
		arr[i] = (i + 1) * 11;

	cout << "arr ���" << endl; // cout ������ �ߺ�
	cout << arr << endl << endl;

	BoundCheckIntArray cpy1 = arr;    // ���������
	cout << "cpy1 ���" << endl;
	cout << cpy1 << endl << endl;

	BoundCheckIntArray cpy2(3);
	cout << "cpy2 �Է�" << endl;
	cin >> cpy2;    // cin ������ �ߺ�
	cout << "cpy2 ���" << endl;
	cout << cpy2 << endl << endl;

	BoundCheckIntArray cpy3(5);
	cpy3 = cpy2;   // ���� ������ �ߺ�
	if (cpy3.GetArrLen() == -1)
		return 0;
	cout << "cpy3 ���" << endl;
	cout << cpy3 << endl << endl;

	return 0;
}