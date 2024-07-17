#include<iostream>
#include<string>
using namespace std;

class Phone {
public:

	Phone(string pName) {
		m_PName = pName;
	}
	string m_PName;
};

class Person {
public:
	// Phone m_Phone = pName; ÒþÊ½×ª»»
	Person(string name, string pName) :m_Name(name), m_Phone(pName) {

	}

	string m_Name;
	Phone m_Phone;
};

void test02() {
	Person p("xx", "iPhone Max");
	cout << p.m_Name << p.m_Phone.m_PName << endl;
}

//int main() {
//	test02();
//	system("pause");
//}