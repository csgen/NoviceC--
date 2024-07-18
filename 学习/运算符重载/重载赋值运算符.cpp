#include <iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		// 将年龄数据开辟在堆区
		m_Age = new int(age);
	}
	int *m_Age;

	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}

	Person& operator=(Person& p) {
		// 先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		// 深拷贝
		m_Age = new int(*p.m_Age);

		return *this;
	}
};


void test04() {
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3 = p2 = p1; // 赋值操作

	cout << "p1 = " << *p1.m_Age << endl;
	cout << "p2 = " << *p2.m_Age << endl;
	cout << "p3 = " << *p3.m_Age << endl;
}

//int main() {
//	test04();
//	system("pause");
//	return 0;
//}