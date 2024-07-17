#include<iostream>
using namespace std;

class Person {

	// 友元
	friend ostream& operator<<(ostream& cout, Person& p);

public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}

	// 成员函数重载左移运算符
	// 通常不会利用成员函数重载左移运算符，因为无法实现cout在左侧
	/*void operator<<(Person& p) {
		cout << "p.m_A = " << p.m_A << endl;
		cout << "p.m_B = " << p.m_B << endl;
	}*/

private:

	int m_A;
	int m_B;
};

// 全局函数重载左移运算符
ostream& operator<<(ostream& cout, Person& p) {// 本质：operator<<(cout,p)，简化cout<<p
	cout << "p.m_A = " << p.m_A << endl;
	cout << "p.m_B = " << p.m_B << endl;
	return cout;
}

void test02() {
	Person p(10, 10);
	cout << p << endl;
}

//int main() {
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}