/********************************************************************************
* @author: ����
* @project: 2022_5_14 
* @date: 2022/5/14 14:21
* @version: 1.0
* @description: �쳣���ͺ��쳣����
********************************************************************************/
#if 0

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
        error = (char *) "δ֪�쳣";
    }

    MyException(const char *str) {
        error = new char[strlen(str) + 1];
        strcpy(error, str);
    }

    MyException(const MyException &ex) {
        this->error = new char[strlen(ex.error) + 1];
        strcpy(this->error, ex.error);
    }

    MyException &operator=(const MyException &ex) {
        if (this->error != NULL) {
            delete[] this->error;
            this->error = NULL;
        }
        this->error = new char[strlen(ex.error) + 1];
        strcpy(this->error, ex.error);
        return *this;
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
        cout << "�쳣����" << endl;
    }

    try {
        func02();
    }
    catch (const char *e) {
        cout << "�쳣����" << endl;
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