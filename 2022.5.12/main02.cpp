/********************************************************************************
* @author: 兔子
* @project: 2022_5_12 
* @date: 2022/5/13 0:45
* @version: 1.0
* @description: 函数模板和普通函数的区别
********************************************************************************/

#include <iostream>

using namespace std;

template<class T>
T MyAdd(T &a, T &b) {
    return a + b;
}

int MyAdd(int a, char b) {
    return a + b;
}

void test01() {
    int a = 10;
    int b = 20;
    char c = 'a';
    char d = 'b';

    MyAdd(a, c);
    MyAdd(c, b);  // 普通函数可以进行自动类型转换，函数模板需要精确匹配
    MyAdd(a, b);  // 如果函数模板可以产生更好匹配，选择模板
    // 优先考虑普通函数
}

template<class T>
void MyPrint(T &a, T &b) {
    cout << "first = " << a << ", second = " << b << endl;
}

int main() {
    test01();

    return 0;
}