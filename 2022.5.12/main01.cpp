/********************************************************************************
* @author: 兔子
* @project: 2022_5_12 
* @date: 2022/5/13 0:15
* @version: 1.0
* @description: 函数模板基本语法
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

template<class T>
void MySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void MyPrint(T &a, T &b) {
    cout << "first = " << a << ", second = " << b << endl;
}

void test01() {
    int a = 10;
    int b = 20;
    // 自动类型推导
    MyPrint(a, b);
    MySwap(a, b);
    MyPrint(a, b);

    double c = 1.3;
    double d = 2.4;
    // 显示指定类型
    MyPrint<double>(c, d);
    MySwap<double>(c, d);
    MyPrint<double>(c, d);
}

int main() {
    test01();

    return 0;
}

#endif