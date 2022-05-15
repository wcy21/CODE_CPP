/********************************************************************************
* @author: 兔子
* @project: 2022_5_13 
* @date: 2022/5/13 3:48
* @version: 1.0
* @description: 类模板类内实现
********************************************************************************/

#include <iostream>

using namespace std;

//类内实现
template<class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age) : mName(name), mAge(age) {
    }

    void show() {
        cout << "name: " << mName << " age: " << mAge << endl;
    }

private:
    T1 mName;
    T2 mAge;
};

void test01() {
    Person<string, int> p("天才", 123);
    p.show();
}

int main() {
    test01();

    return 0;
}
