//***************************
// ���ϸ�: hw13_3.cpp
// �ۼ���: 201432014 �𼳾�
// �ۼ���: 2018.5.29
// ����: Edit Class for using templete
//***************************

#include <iostream>

using namespace std;

template<typename T>
class MyArray {
private:
	T *dataT;
	int size;   // �迭�� ���� ũ��
	int maxSize;   // �迭�� �ִ� ũ��
public:
	MyArray(int maxSize = 10) {   // �迭�� ũ�⸦ �����ϰ� ���� �޸� �Ҵ�
		dataT = new T[maxSize];
	}
	~MyArray() {    // ���� �޸� ��ȯ
		delete[] dataT;
	}
	void pushBack(T value) {  // �迭 ���� ������ �߰�
		dataT[size++] = value;
	}
	void popBack() {  // �迭 ���� ������ ����
		size -= 1;
	}
	T getAt(int index) {   // �迭�� ��� ��ȯ
		return dataT[index];
	}
	void setAt(int index, T value) { // �迭�� i��° ��� value�� ����
		if (index < size)
			dataT[index] = value;
	}
	int getSize() const {   // �迭�� ũ�� ��ȯ
		return size;
	}
	void showAll() {    // ��� �� ���
		cout << "<<����Ǿ��ִ� ������>>" << endl;
		for (int i = 0; i < size; i++) {
			cout << dataT[i] << " ";
		}
		cout << endl << endl;
	}
};

int main() {
	cout << "hw13_3 : �𼳾�" << endl << endl;

	MyArray <int>arr;

	int tmp;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° ���� �Է� : ";
		cin >> tmp;
		arr.pushBack(tmp);
	}

	arr.showAll();
	cout << "�迭�� �ι�° ���� : " << arr.getAt(1) << endl;

	arr.setAt(1, 20);

	arr.showAll();
	arr.popBack();
	arr.showAll();

	return 0;
}