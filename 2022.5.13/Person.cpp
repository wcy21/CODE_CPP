/********************************************************************************
* @author: 兔子
* @project: 2022_5_13 
* @date: 2022/5/13 3:37
* @version: 1.0
* @description: 普通类的分文件编写
********************************************************************************/
#include "Person.h"

Person::Person(string name, int age) : mName(name), mAge(age) {
}

void Person::show() {
    cout << "name:" << mName << " age:" << mAge << endl;
}
