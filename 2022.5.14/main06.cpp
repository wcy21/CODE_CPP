/********************************************************************************
* @author: ����
* @project: 2022_5_14 
* @date: 2022/5/14 13:19
* @version: 1.0
* @description: �쳣����
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

int divide(int x, int y) {
    if (y == 0) {
        throw y;  // ���쳣
    }
    return x / y;
}

void test01() {
    try {
        divide(10, 0);
    } catch (int e) {  // ��������ƥ��
        cout << "����Ϊ" << e << endl;
    }
}

void CallDivide(int x, int y) {
    divide(x, y);
}

void test02() {
    try {
        CallDivide(10, 0);
    }
    catch (int e) {  // û���쳣��������������ף�������û�������ֹ����
        cout << "����Ϊ" << e << endl;
    }
}

int main() {
//    test01();
    test02();

    return 0;
}

#endif
