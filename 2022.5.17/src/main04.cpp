/********************************************************************************
* @author: 兔子
* @project: 2022_5_17 
* @date: 2022/5/17 11:01
* @version: 1.0
* @description: set/multiset容器部分方法
********************************************************************************/

#include <iostream>
#include <set>

using namespace std;

class MyCompare {
public:
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

void test01() {
    set<int> s1;
    s1.insert(5);
    s1.insert(3);
    s1.insert(2);
    s1.insert(6);
    s1.insert(5);
    s1.insert(1);
    s1.insert(9);
    cout << "s1: ";
    for (int it: s1) {
        cout << it << ' ';
    }
    cout << endl;

    set<int, MyCompare> s2(s1.begin(), s1.end());
    cout << "s2: ";
    for (int it: s2) {
        cout << it << ' ';
    }
    cout << endl;
}

void test02() {
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(7);
    s.insert(1);
    cout << "s: ";
    for (int val: s) {
        cout << val << ' ';
    }
    cout << endl;

    auto ret1 = s.find(3);
    if (ret1 == s.end()) {
        cout << "not found" << endl;
    } else {
        cout << "found " << *ret1 << endl;
    }

    ret1 = s.lower_bound(3);
    cout << "s.lower_bound(3): " << *ret1 << endl;

    ret1 = s.upper_bound(3);
    cout << "s.upper_bound(3): " << *ret1 << endl;

    // equal_range 返回 lower_bound 和 upper_bound
    auto ret2 = s.equal_range(2);
    cout << "s.equal_range(2) {" << endl;
    cout << "  first: ";
    if (ret2.first == s.end()) {
        cout << "not found" << endl;
    } else {
        cout << "found " << *(ret2.first) << endl;
    }
    cout << "  second: ";
    if (ret2.second == s.end()) {
        cout << "not found" << endl;
    } else {
        cout << "found " << *(ret2.second) << endl;
    }
    cout << "}" << endl;
}

class Person {
public:
    Person(int age, int id) : m_age(age), m_id(id) {
    }

public:
    int m_id;
    int m_age;
};

class MyCompare2 {
public:
    bool operator()(const Person &p1, const Person &p2) {
        return p1.m_age > p2.m_age;
    }
};

void test03() {
    set<Person, MyCompare2> sp;
    Person p1(10, 20), p2(70, 80), p3(40, 50);
    sp.insert(p1);
    sp.insert(p2);
    sp.insert(p3);

    for (const auto &p: sp) {
        cout << p.m_id << p.m_age << endl;
    }

    auto ret = sp.find(p2);  // 根据age排序，查找key(age)
    if (ret == sp.end()) {
        cout << "not found" << endl;
    } else {
        cout << "found " << (*ret).m_id << (*ret).m_age << endl;
    }
}

int main() {
//    test01();
//    test02();
    test03();

    return 0;
}
