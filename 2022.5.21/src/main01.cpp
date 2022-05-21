/********************************************************************************
* @author: 兔子
* @project: 2022_5_21 
* @date: 2022/5/21 11:52
* @version: 1.0
* @description: 内建函数对象
********************************************************************************/

#include <iostream>
#include <functional>

using namespace std;

void test01() {
    plus<int> myPlus;
    cout << myPlus(10, 20) << endl;
}

int main() {
    test01();

    return 0;
}
