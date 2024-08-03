#include <iostream>
#include <string>
using namespace std;

class MyPrint {
public:
	void operator()(string text) {
		cout << text << endl;
	}
};
void test06() {
	MyPrint myPrint;
	myPrint("HELLO");// 重载()操作符，又称仿函数
}

//int main() {
//	test06();
//
//	// 匿名对象调用
//	MyPrint()("HI");
//
//	system("pause");
//	return 0;
//}