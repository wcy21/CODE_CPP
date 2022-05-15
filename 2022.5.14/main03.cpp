/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 9:57
* @version: 1.0
* @description: 类模板与static成员
********************************************************************************/

#include <iostream>

using namespace std;

template<class T>
class Person {
public:
    static int a;
};

template<class T>
int Person<T>::a = 0;

int main() {
    Person<int> p1, p2, p3;
    Person<char> p4, p5, p6;

    p1.a = 10;
    p4.a = 100;

    // 不同类型的类会有独自的static变量
    cout << p1.a << ' ' << p2.a << ' ' << p3.a << endl;
    cout << p4.a << ' ' << p5.a << ' ' << p6.a << endl;

    return 0;
}
