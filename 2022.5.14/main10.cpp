/********************************************************************************
* @author: ����
* @project: 2022_5_14 
* @date: 2022/5/14 18:24
* @version: 1.0
* @description: �쳣������������
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

class MyException {
public:
    MyException() {
        cout << "���캯��" << endl;
    }

    MyException(const MyException &ex) {
        cout << "��������" << endl;
    }

    ~MyException() {
        cout << "��������" << endl;
    }
};

void func() {
    throw new MyException();
}

void test01() {
    // ��ͨ����Ԫ�ء����á�ָ��

    // ��ͨԪ��/���� �쳣����������(catch)
    // ָ�� ��ǰ����������new�����ֶ�delete
    try {
        func();
    }
    catch (MyException *e) {
        cout << "�쳣����" << endl;
        delete e;
    }
}

int main() {
    test01();

    return 0;
}

#endif
