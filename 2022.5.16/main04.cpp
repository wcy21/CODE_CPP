/********************************************************************************
* @author: 兔子
* @project: 2022_5_16 
* @date: 2022/5/16 1:36
* @version: 1.0
* @description: STL hello world 程序
********************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void PrintVector(int v) {
    cout << v << ' ';
}

void test01() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<int>::iterator pBegin = v.begin();
    vector<int>::iterator pEnd = v.end();

    for_each(pBegin, pEnd, PrintVector);
}

class Person {
public:
    Person(int age, int id) : mAge(age), mId(id) {
    }

    void show() {
        cout << "age: " << mAge << ", id: " << mId << endl;
    }

private:
    int mAge;
    int mId;
};

void test02() {
    vector<Person> v;
    Person p1(10, 15), p2(15, 10), p3(20, 20);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        (*it).show();
    }
}

int main() {
//    test01();
    test02();

    return 0;
}