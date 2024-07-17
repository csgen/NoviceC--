#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	static void func() {
		cout << "静态函数调用" << endl;
		// 只能访问静态成员变量
	}

	static int m_A;
	int m_B;
};

//int main() {
//	//Person::func();
//	Person p;
//	p.func();
//	system("pause");
//}