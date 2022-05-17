/********************************************************************************
* @author: 兔子
* @project: 2022_5_17 
* @date: 2022/5/17 3:55
* @version: 1.0
* @description: stack容器部分方法
********************************************************************************/

#include <iostream>
#include <stack>

using namespace std;

class Person {
public:
    Person(int age) {
        m_age = age;
    }

public:
    int m_age;
};

void test01() {  // 存放对象指针
    stack<Person *> s;
    Person *p[5];
    for (int i = 0; i < 5; ++i) {
        p[i] = new Person(i + 16);
        s.push(p[i]);
    }

    cout << "s.top() = " << s.top()->m_age << endl;
    cout << "s.size() = " << s.size() << endl;
    while (!s.empty()) {
        cout << s.top()->m_age << ' ';
        s.pop();
    }
    cout << endl;
}

void test02() {  // 存放对象
    stack<Person> s;
    for (int i = 0; i < 5; ++i) {
        s.push(Person(i + 16));
    }

    cout << "s.top() = " << s.top().m_age << endl;
    cout << "s.size() = " << s.size() << endl;
    while (!s.empty()) {
        cout << s.top().m_age << ' ';
        s.pop();
    }
    cout << endl;
}

int main() {
//    test01();
    test02();

    return 0;
}
