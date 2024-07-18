#include<iostream>
using namespace std;

class MyInteger {

	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}

	// ����ǰ��++�����
	MyInteger& operator++() {
		m_Num++;
		return *this;
	}
	// ���غ���++�����
	MyInteger operator++(int) { // int����չλ������������������ǰ�úͺ��õ���
		MyInteger temp = *this; // ��ǰ����ĸ���
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