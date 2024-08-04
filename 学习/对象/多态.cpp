#include <iostream>
using namespace std;

class Animal {
public:
	/*virtual void Speak() {
		cout << "Animal speaks" << endl;
	}*/
	virtual void Speak() = 0;// 纯虚函数
};

class Cat : public Animal {
public:
	void Speak() {
		cout << "Cat speaks" << endl;
	}
};

void DoSpeak(Animal& animal) {
	animal.Speak();
}

void test09() {
	Cat cat;
	DoSpeak(cat);
}

