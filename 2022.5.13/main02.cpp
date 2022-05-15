/********************************************************************************
* @author: 兔子
* @project: 2022_5_13 
* @date: 2022/5/13 2:43
* @version: 1.0
* @description: 模板函数实现原理
********************************************************************************/

#include <iostream>

using namespace std;

template<class T>
T MyAdd(T &a, T &b) {
    return a + b;
}

int main() {
    int a = 1;
    int b = 23;
    MyAdd(a, b);

    double c = 1.6;
    double d = 8.2;
    MyAdd(c, d);

    return 0;
}
