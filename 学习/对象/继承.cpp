#include<iostream>
using namespace std;
#include<string>

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son:public Base {
public:
	int m_D;
};

class Base2 {
public:
	int m_A = 100;

	static int m_B;
};
int Base2::m_B = 100;

class Son2 :public Base2 {
public:
	int m_A = 200;

	static int m_B;
};
int Son2::m_B = 200;

void test07() {
	// 父类中私有属性成员也被继承了，但是被编译器隐藏，因此访问不到
	cout << "size of Son = " << sizeof(Son) << endl;

	Son2 s;
	cout << "son2 m_A = " << s.m_A << endl;
	cout << "son2 base m_A = " << s.Base2::m_A << endl;

	cout << "son2 m_B = " << Son2::m_B << endl;
	cout << "son2 base m_B = " << Son2::Base2::m_B << endl;
}


