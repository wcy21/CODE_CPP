/********************************************************************************
* @author: 兔子
* @project: 2022_5_21 
* @date: 2022/5/21 12:03
* @version: 1.0
* @description: 函数对象适配器
********************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class MyPrint : public binary_function<int, int, void> {
public:
    void operator()(int v, int val) const {
        cout << v + val << ' ';
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    int addNum = 200;
//    for_each(v.begin(), v.end(), bind1st(MyPrint(), addNum));
//    for_each(v.begin(), v.end(), bind2nd(MyPrint(), addNum));
    for_each(v.begin(), v.end(), bind(MyPrint(), addNum, placeholders::_1));
}

struct MyCompare : public binary_function<int, int, bool> {
    bool operator()(int v1, int v2) const {
        return v1 > v2;
    }
};

struct MyPrint02 {
    void operator()(int v) {
        cout << v << ' ';
    }
};

struct MyGreater35 : public unary_function<int, bool> {
    bool operator()(int v) const {
        return v > 35;
    }
};

void test02() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(rand() % 100 + 10);
    }
    for_each(v.begin(), v.end(), MyPrint02());
    cout << endl;
    sort(v.begin(), v.end(), not2(MyCompare()));
    for_each(v.begin(), v.end(), MyPrint02());
    cout << endl;

    auto it = find_if(v.begin(), v.end(), not1(MyGreater35()));
    if (it == v.end()) {
        cout << "not found" << endl;
    } else {
        cout << *it << endl;
    }
}

void MyPrint03(int val, int v) {
    cout << val + v << ' ';
}

void test03() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), bind2nd(ptr_fun(MyPrint03), 10));
}

class Person {
public:
    Person(int age, int id) {
        m_age = age;
        m_id = id;
    }

    void show() {
        cout << "age: " << m_age << ", id: " << m_id << endl;
    }

public:
    int m_age;
    int m_id;
};

void test04() {
    vector<Person> v;
    Person p1(10, 10), p2(20, 20), p3(30, 40), p4(40, 80);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    for_each(v.begin(), v.end(), mem_fun_ref(&Person::show));

    vector<Person *> v1;
    v1.push_back(&p1);
    v1.push_back(&p2);
    v1.push_back(&p3);
    v1.push_back(&p4);
    for_each(v1.begin(), v1.end(), mem_fun(&Person::show));
}

int main() {
//    test01();
//    test02();
//    test03();
    test04();

    return 0;
}
