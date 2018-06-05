//***************************
// 파일명: hw15_1.cpp
// 작성자: 201432014 모설아
// 작성일: 2018.05.30
// 내용: 예외처리
//***************************

#include <iostream>

using namespace std;

void printMultiple(int value);

int main() {
	cout << "hw15_1 : 모설아" << endl << endl;

	int value;

	while (1) {
		try {
			cout << "양수 입력 >> ";
			cin >> value;
			if (cin.fail())
				throw "cin Fail";
			if (value > 9 || value < 1)
				throw 1;
			printMultiple(value);
		}
		catch (int exception) {
			cout << exception << "는(은) 잘못된 입력입니다. 1 ~ 9 사이의 정수만 입력하세요." << endl;
		}
		catch (char *exception) {
			cout << "입력 오류가 발생하여 더 이상 입력되지 않습니다. 프로그램을 종료합니다." << endl;
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