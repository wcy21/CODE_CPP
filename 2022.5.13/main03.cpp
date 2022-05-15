/********************************************************************************
* @author: 兔子
* @project: 2022_5_13 
* @date: 2022/5/13 2:58
* @version: 1.0
* @description: 类模板基本语法
********************************************************************************/

#include <iostream>

using namespace std;

template<class T>
class Person {
public:
    Person(T id, T age) : mId(id), mAge(age) {
    }

    void show() {
        cout << "ID:" << mId << " Age:" << mAge << endl;
    }

private:
    T mId;
    T mAge;
};

void test01() {  // 类模板必须显示指定类型
    Person<int> p(20, 20);
    p.show();
}

int main() {
    test01();

    return 0;
}
