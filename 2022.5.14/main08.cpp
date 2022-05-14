/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 14:04
* @version: 1.0
* @description: 异常接口声明
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

void func() throw(int, float, char) {  // 函数只能抛出int,float,char类型的异常
    throw '0';
}

void func2() throw() {  // 不抛出任何异常
    throw -1;
}

void func3() throw() {  // 可抛出所有异常
    throw 1;
}

int main() {
    try {
        func();
    }
    catch (int e) {
        cout << e << endl;
    }
    catch (...) {  // 捕获所有异常
        cout << "未知类型异常" << endl;
    }

    return 0;
}

#endif
