/********************************************************************************
* @author: 兔子
* @project: 2022_5_13 
* @date: 2022/5/13 3:37
* @version: 1.0
* @description: 普通类的分文件编写
********************************************************************************/
#ifndef INC_2022_5_13_PERSON_H
#define INC_2022_5_13_PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person {
public:
    Person(string name, int age);

    void show();

private:
    string mName;
    int mAge;
};


#endif //INC_2022_5_13_PERSON_H
