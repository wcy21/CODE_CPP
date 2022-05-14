/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 9:31
* @version: 1.0
* @description: 类模板分文件编写
********************************************************************************/
#if 0

#include <iostream>
#include "Person.hpp"
//#include "Person.h"
//#include "Person.cpp"

using namespace std;

int main() {
    // 各文件独立编译，只引用声明时模板函数未生成具体函数
    Person<int> p(10);
    p.show();

    return 0;
}

#endif