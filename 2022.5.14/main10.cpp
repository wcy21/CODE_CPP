/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 18:24
* @version: 1.0
* @description: 异常对象生命周期
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

class MyException {
public:
    MyException() {
        cout << "构造函数" << endl;
    }

    MyException(const MyException &ex) {
        cout << "拷贝构造" << endl;
    }

    ~MyException() {
        cout << "析构函数" << endl;
    }
};

void func() {
    throw new MyException();
}

void test01() {
    // 普通类型元素、引用、指针

    // 普通元素/引用 异常处理完析构(catch)
    // 指针 提前析构，可以new对象手动delete
    try {
        func();
    }
    catch (MyException *e) {
        cout << "异常捕获" << endl;
        delete e;
    }
}

int main() {
    test01();

    return 0;
}

#endif
