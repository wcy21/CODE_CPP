/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 13:58
* @version: 1.0
* @description: 栈解旋
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

class Person {
public:
    Person() {
        cout << "对象构建" << endl;
    }

    ~Person() {
        cout << "对象析构" << endl;
    }
};

int divide(int x, int y) {
    Person p;

    if (y == 0) {
        throw y;  // 局部变量析构，类似return
    }
    return x / y;
}

void test01() {
    try {
        divide(10, 0);
    }
    catch (int e) {
        cout << "异常捕获" << endl;
    }
}

int main() {
    test01();

    return 0;
}

#endif
