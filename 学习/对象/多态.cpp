#include <iostream>
using namespace std;

class Animal {
public:
	virtual void Speak() {
		cout << "Animal speaks" << endl;
	}
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

int main() {
	test09();
	system("pause");
	return 0;
}