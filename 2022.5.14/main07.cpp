/********************************************************************************
* @author: ����
* @project: 2022_5_14 
* @date: 2022/5/14 13:58
* @version: 1.0
* @description: ջ����
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

class Person {
public:
    Person() {
        cout << "���󹹽�" << endl;
    }

    ~Person() {
        cout << "��������" << endl;
    }
};

int divide(int x, int y) {
    Person p;

    if (y == 0) {
        throw y;  // �ֲ���������������return
    }
    return x / y;
}

void test01() {
    try {
        divide(10, 0);
    }
    catch (int e) {
        cout << "�쳣����" << endl;
    }
}

int main() {
    test01();

    return 0;
}

#endif
