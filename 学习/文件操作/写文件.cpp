#include<iostream>
using namespace std;
#include<fstream>// 文件相关的头文件

void writeTest() {
    ofstream ofs;
    ofs.open("test.txt", ios::out);

    ofs << "Name: Kelvin" << endl;// endl也可以在文件中换行
    ofs << "Sex: Male" << endl;
    ofs << "Age: 18" << endl;

    ofs.close();
}

