/********************************************************************************
* @author: ����
* @project: 2022_5_14 
* @date: 2022/5/14 14:04
* @version: 1.0
* @description: �쳣�ӿ�����
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

void func() throw(int, float, char) {  // ����ֻ���׳�int,float,char���͵��쳣
    throw '0';
}

void func2() throw() {  // ���׳��κ��쳣
    throw -1;
}

void func3() throw() {  // ���׳������쳣
    throw 1;
}

int main() {
    try {
        func();
    }
    catch (int e) {
        cout << e << endl;
    }
    catch (...) {  // ���������쳣
        cout << "δ֪�����쳣" << endl;
    }

    return 0;
}

#endif
