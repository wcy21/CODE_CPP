/********************************************************************************
* @author: 兔子
* @project: 2022_5_21 
* @date: 2022/5/21 14:27
* @version: 1.0
* @description: 遍历算法
********************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct MyPlus {
    int operator()(int val) {
        return val + 100;
    }
};

void MyPrint(int val) {
    cout << val << ' ';
}

void test01() {
    vector<int> v1;
    vector<int> v2;
    v2.resize(10);
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    transform(v1.begin(), v1.end(), v2.begin(), MyPlus());
    for_each(v2.begin(), v2.end(), MyPrint);
    cout << endl;
}

void test02() {
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    auto ret = find(v1.begin(), v1.end(), 5);
    if (ret == v1.end()) {
        cout << "not found 5" << endl;
    } else {
        cout << "found 5" << endl;
    }
}

class Person {
public:
    Person(int age, int id) : m_age(age), m_id(id) {
    }

    bool operator==(const Person &p) const {
        return p.m_id == m_id && p.m_age == m_age;
    }

public:
    int m_age;
    int m_id;
};

void test03() {
    vector<Person> v1;
    Person p1(10, 10), p2(20, 30), p3(40, 60);
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);

    auto ret = find(v1.begin(), v1.end(), p1);
    if (ret == v1.end()) {
        cout << "not found p1" << endl;
    } else {
        cout << "found p1" << endl;
    }
}

bool MySearch(int val) {
    return val > 5;
}

bool MySearch2(int val) {
    return val > 5;
}

void test04() {
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    bool ret = binary_search(v1.begin(), v1.end(), 5);
    if (ret) {
        cout << "找到" << endl;
    } else {
        cout << "没有找到" << endl;
    }

    auto ret2 = adjacent_find(v1.begin(), v1.end());
    if (ret2 != v1.end()) {
        cout << "找到相邻重复元素" << endl;
    } else {
        cout << "没有找到相邻重复元素" << endl;
    }

    auto ret3 = find_if(v1.begin(), v1.end(), MySearch);
    if (ret3 != v1.end()) {
        cout << "找到" << endl;
    } else {
        cout << "没有找到" << endl;
    }

    int num = count(v1.begin(), v1.end(), 9);
    cout << "count(9) = " << num << endl;
    num = count_if(v1.begin(), v1.end(), MySearch2);
    cout << "count(MySearch2) = " << num << endl;
}

int main() {
//    test01();
//    test02();
//    test03();
    test04();

    return 0;
}
