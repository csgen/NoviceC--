#include<fstream>
using namespace std;
#include<iostream>
#include<string>

void readTest() {
	ifstream ifs;

	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "Fail to read the file" << endl;
		return;
	}

	// 方法1：
	/*char buf[1024] = {0};
	while (ifs >> buf) {
		cout << buf << endl;
		// 输入操作符 >> 的行为如下：
		// 从输入流中读取数据并存储到提供的变量（在这里是 buf）中。
		// 返回对输入流对象本身的引用，这样可以实现链式调用。
		// 当读取操作成功时，输入流对象会被转换为 true，如果读取操作失败（例如到达文件末尾或发生读取错误），输入流对象会被转换为 false。
	}*/

	// 方法2：
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}*/

	// 方法3：
	/*string buf;

	while (getline(ifs, buf)) {
		cout << buf << endl;
	}*/

	// 方法4：（不太推荐）
	char c;
	while ((c = ifs.get()) != EOF) { // EOF表示end of file
		cout << c;
	}


	ifs.close();
}

//int main()
//{
//	readTest();
//}