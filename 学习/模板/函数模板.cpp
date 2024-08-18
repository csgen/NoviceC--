#include <iostream>

//void swapInt(int& a, int& b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//void swapDouble(double& a, double& b)
//{
//    double temp = a;
//    a = b;
//    b = temp;
//}

template<typename T>
void mySwap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

void testSwap()
{
    int a = 10;
    int b = 20;
    //swapInt(a, b);
    mySwap(a, b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    double c = 10.11;
    double d = 20.12;
    mySwap<double>(c, d);
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
}

//int main()
//{
//    testSwap();
//    //std::cout << "Hello World!\n";
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
