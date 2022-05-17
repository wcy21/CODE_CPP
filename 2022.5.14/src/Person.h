/********************************************************************************
* @author: 兔子
* @project: 2022_5_14
* @date: 2022/5/14 9:33
* @version: 1.0
* @description: 类模板分文件编写
********************************************************************************/
#ifndef INC_2022_5_14_PERSON_H
#define INC_2022_5_14_PERSON_H

#include <iostream>

using namespace std;

template<class T>
class Person {
public:
    Person(T age);

    void show();

private:
    T age;
};


#endif //INC_2022_5_14_PERSON_H
