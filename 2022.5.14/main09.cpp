/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 14:21
* @version: 1.0
* @description: 异常类型和异常对象
********************************************************************************/
#if 1

#include <iostream>
#include <cstring>

using namespace std;

void func01() {
    throw 1;
}

void func02() {
    throw "exception";
}

class MyException {
public:
    MyException() {
        error = "未知异常";
    }

    MyException(const char *str) {
        error = new char[strlen(str) + 1];
        strcpy(error, str);
    }

    void what() {
        cout << error << endl;
    }

    ~MyException() {
        if (error != NULL) {
            delete[] error;
        }
    }

private:
    char *error;
};

void fun03() {
    throw MyException("test");
}

void test01() {
    try {
        func01();
    }
    catch (int e) {
        cout << "异常捕获" << endl;
    }

    try {
        func02();
    }
    catch (const char *e) {
        cout << "异常捕获" << endl;
    }

    try {
        fun03();
    }
    catch (MyException e) {
        e.what();
    }
}

int main() {
    test01();

    return 0;
}

#endif
