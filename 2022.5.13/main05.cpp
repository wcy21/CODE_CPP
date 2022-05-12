/********************************************************************************
* @author: 兔子
* @project: 2022_5_13 
* @date: 2022/5/13 3:22
* @version: 1.0
* @description: 类模板派生普通类
********************************************************************************/
#if 0

#include <iostream>

template<class T>
class Person {
public:
    Person() : mAge(0) {
    }

protected:
    T mAge;
};

class subPerson : public Person<int> {
};

using namespace std;

int main() {

    return 0;
}

#endif