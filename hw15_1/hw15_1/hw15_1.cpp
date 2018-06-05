//***************************
// ���ϸ�: hw15_1.cpp
// �ۼ���: 201432014 �𼳾�
// �ۼ���: 2018.05.30
// ����: ����ó��
//***************************

#include <iostream>

using namespace std;

void printMultiple(int value);

int main() {
	cout << "hw15_1 : �𼳾�" << endl << endl;

	int value;

	while (1) {
		try {
			cout << "��� �Է� >> ";
			cin >> value;
			if (cin.fail())
				throw "cin Fail";
			if (value > 9 || value < 1)
				throw 1;
			printMultiple(value);
		}
		catch (int exception) {
			cout << exception << "��(��) �߸��� �Է��Դϴ�. 1 ~ 9 ������ ������ �Է��ϼ���." << endl;
		}
		catch (char *exception) {
			cout << "�Է� ������ �߻��Ͽ� �� �̻� �Էµ��� �ʽ��ϴ�. ���α׷��� �����մϴ�." << endl;
			return 0;
		}
	}
	return 0;
}

void printMultiple(int value) {
	for (int i = 1; i < 10; i++) {
		cout << value << "x" << i << "=" << value*i << " ";
	}
	cout << endl;
}