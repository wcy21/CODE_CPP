/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 9:33
* @version: 1.0
* @description: 类模板分文件编写
********************************************************************************/
#include "Person.h"

template<class T>
Person<T>::Person(T age) {
    this->age = age;
}

template<class T>
void Person<T>::show() {
    cout << "Age:" << age << endl;
}
