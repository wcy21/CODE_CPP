/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 18:36
* @version: 1.0
* @description: 校准异常库示例
********************************************************************************/
#if 0

#include <iostream>
#include <stdexcept>
#include <cstring>

using namespace std;

class Person {
public:
    Person() {
        mAge = 0;
    }

    void setAge(int age) {
        if (age < 0 || age > 120) {
            throw out_of_range("年龄应在0-120岁之间");
        }
        this->mAge = age;
    }

private:
    int mAge;
};

void test01() {
    Person p;
    try {
        p.setAge(1000);
    }
    catch (exception &e) {
        cout << e.what() << endl;
    }
}

class MyOutOfRange : public exception {
public:
    MyOutOfRange(char *error) {
        pError = new char[strlen(error) + 1];
        strcpy(pError, error);
    }

    virtual const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW {
        return pError;
    }

    ~MyOutOfRange() {
        if (pError != NULL) {
            delete[] pError;
            pError = NULL;
        }
    }

private:
    char *pError;
};

void fun02() {
    throw MyOutOfRange((char *) "我的out_of_range");
}

void test02() {
    try {
        fun02();
    }
    catch (exception &e) {
        cout << e.what() << endl;
    }
}

int main() {
//    test01();
    test02();

    return 0;
}

#endif
