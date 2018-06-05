//***************************
// 파일명: hw15_2.cpp
// 작성자: 201432014 모설아
// 작성일: 2018.05.30
// 내용: 예외처리 2
//***************************

#include <iostream>

using namespace std;

class Stack
{
	int sta[10];
	int index;
public:
	Stack()
	{
		index = 0;
		for (int i = 0; i < 10; i++)
			sta[i] = 0;
	}
	void push(int a) throw (int)
	{
		if (index >= 10)
			throw SW_STACKOVERFLOW;
		sta[index] = a;
		index++;
	}
	void pop() throw (int)
	{
		if (index <= 0)
			throw SW_STACKUNDERFLOW;
		index--;
		sta[index] = 0;

	}
	void display()
	{
		cout << "------------------------------------------------------------------" << endl;
		for (int i = 0; i < index; i++)
		{
			cout << "스택" << "[" << i << "]" << "에 저장된값은 :" << sta[i] << endl;
		}
	}
};

int main()
{
	Stack s;

	cout << "hw15_2 : 모설아" << endl;

	try {
		s.push(3);
		s.display();
		s.push(4);
		s.display();
		s.pop();
		s.display();
		s.pop();
		s.display();
		s.pop();
	}
	catch (int exception) {
		switch (exception) {
		case SW_STACKOVERFLOW :
			cout << "Stack Overflow" << endl;
			break;

		case SW_STACKUNDERFLOW :
			cout << "Stack Underflow" << endl;
		}
	}
	return 0;
}
