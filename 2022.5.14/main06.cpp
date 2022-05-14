/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 13:19
* @version: 1.0
* @description: 异常机制
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

int divide(int x, int y) {
    if (y == 0) {
        throw y;  // 抛异常
    }
    return x / y;
}

void test01() {
    try {
        divide(10, 0);
    } catch (int e) {  // 根据类型匹配
        cout << "除数为" << e << endl;
    }
}

void CallDivide(int x, int y) {
    divide(x, y);
}

void test02() {
    try {
        CallDivide(10, 0);
    }
    catch (int e) {  // 没做异常处理则继续往上抛，到顶层没处理会终止程序
        cout << "除数为" << e << endl;
    }
}

int main() {
//    test01();
    test02();

    return 0;
}

#endif
