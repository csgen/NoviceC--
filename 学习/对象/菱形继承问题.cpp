#include<iostream>
using namespace std;

class Animal {
public:
	int m_Age;
};
class Sheep: virtual public Animal {};// 采用虚继承
class Camel: virtual public Animal{};
class Llama : public Sheep, public Camel {};// 由于Llama继承自多个父类，可能会有重复的变量，父类最好使用虚继承
// 以上继承关系呈菱形状
//     Animal
//    /      \
//   /        \
// Sheep    Camel 
//   \        / 
//    \      /
//     Llama

void test08() {
	Sheep s;
	s.m_Age = 10;
	cout << s.m_Age << endl;
}

int main() {
	test08();
	system("pause");
	return 0;
}