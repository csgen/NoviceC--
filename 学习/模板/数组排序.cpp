#include <iostream>

template<typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void mySort(T arr[], int len)
{
    for (int i = 0;i < len;i++)
    {
        int max = i;
        for (int j = i + 1;j < len;j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            // 交换
            mySwap(arr[max], arr[i]);
        }
    }
}

template<typename T>
void printArray(T arr[], int len)
{
    for (int i = 0;i < len;i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void sortTest()
{
    char charArr[] = "badcfe";

    int num = sizeof(charArr) / sizeof(char);
    mySort(charArr, num);
    printArray(charArr, num);

    int intArr[] = { 2,5,3,1,9 };
    int intNum = sizeof(intArr) / sizeof(int);
    mySort(intArr, intNum);
    printArray(intArr, intNum);
}

int main()
{
    sortTest();
    //std::cout << "Hello World!\n";
}