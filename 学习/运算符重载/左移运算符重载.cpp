#include<iostream>
using namespace std;

class Person {

	// ��Ԫ
	friend ostream& operator<<(ostream& cout, Person& p);

public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}

	// ��Ա�����������������
	// ͨ���������ó�Ա���������������������Ϊ�޷�ʵ��cout�����
	/*void operator<<(Person& p) {
		cout << "p.m_A = " << p.m_A << endl;
		cout << "p.m_B = " << p.m_B << endl;
	}*/

private:

	int m_A;
	int m_B;
};

// ȫ�ֺ����������������
ostream& operator<<(ostream& cout, Person& p) {// ���ʣ�operator<<(cout,p)����cout<<p
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