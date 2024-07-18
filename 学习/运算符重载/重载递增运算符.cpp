#include<iostream>
using namespace std;

class MyInteger {

	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}

	// 重载前置++运算符
	MyInteger& operator++() {
		m_Num++;
		return *this;
	}
	// 重载后置++运算符
	MyInteger operator++(int) { // int代表展位参数，可以用于区分前置和后置递增
		MyInteger temp = *this; // 当前对象的副本
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num << endl;
	return cout;
}

void test03() {
	MyInteger myint;
	cout << ++myint << endl;
}

//int main() {
//
//	test03();
//
//	system("pause");
//
//	return 0;
//}