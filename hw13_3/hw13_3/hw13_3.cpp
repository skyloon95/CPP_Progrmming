//***************************
// 파일명: hw13_3.cpp
// 작성자: 201432014 모설아
// 작성일: 2018.5.29
// 내용: Edit Class for using templete
//***************************

#include <iostream>

using namespace std;

template<typename T>
class MyArray {
private:
	T *dataT;
	int size;   // 배열의 현재 크기
	int maxSize;   // 배열의 최대 크기
public:
	MyArray(int maxSize = 10) {   // 배열의 크기를 설정하고 동적 메모리 할당
		dataT = new T[maxSize];
	}
	~MyArray() {    // 동적 메모리 반환
		delete[] dataT;
	}
	void pushBack(T value) {  // 배열 끝에 데이터 추가
		dataT[size++] = value;
	}
	void popBack() {  // 배열 끝의 데이터 삭제
		size -= 1;
	}
	T getAt(int index) {   // 배열의 요소 반환
		return dataT[index];
	}
	void setAt(int index, T value) { // 배열의 i변째 요소 value로 변경
		if (index < size)
			dataT[index] = value;
	}
	int getSize() const {   // 배열의 크기 반환
		return size;
	}
	void showAll() {    // 모든 값 출력
		cout << "<<저장되어있는 데이터>>" << endl;
		for (int i = 0; i < size; i++) {
			cout << dataT[i] << " ";
		}
		cout << endl << endl;
	}
};

int main() {
	cout << "hw13_3 : 모설아" << endl << endl;

	MyArray <int>arr;

	int tmp;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 원소 입력 : ";
		cin >> tmp;
		arr.pushBack(tmp);
	}

	arr.showAll();
	cout << "배열의 두번째 원소 : " << arr.getAt(1) << endl;

	arr.setAt(1, 20);

	arr.showAll();
	arr.popBack();
	arr.showAll();

	return 0;
}