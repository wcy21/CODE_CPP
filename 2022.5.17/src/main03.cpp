/********************************************************************************
* @author: 兔子
* @project: 2022_5_17 
* @date: 2022/5/17 10:25
* @version: 1.0
* @description: list容器部分函数
********************************************************************************/

#include <iostream>
#include <list>

using namespace std;

void test01() {
    list<int> list1(5, 5);
    list<int> list2(list1.begin(), list1.end());

    for (int &val: list2) {
        cout << val << ' ';
    }
    cout << endl;
}

void test02() {
    list<int> list1;
    list1.push_back(10);
    list1.push_front(20);

    auto it = list1.begin();
    it++;
    list1.insert(it, 30);
    list1.insert(list1.end(), 40);
    list1.push_back(30);

//    list1.pop_front();
//    list1.pop_back();
//    list1.erase(list1.begin(), list1.end());
    list1.remove(30);

    for (int &val: list1) {
        cout << val << ' ';
    }
    cout << endl;
}

void test03() {
    list<int> list1;
    for (int i = 0; i < 5; ++i) {
        list1.assign(i, i);
    }

    list<int> list2;
    list2.swap(list1);
}

bool myCompare(int v1, int v2) {
    return v1 > v2;
}

void printList(list<int> &mlist) {
    for (int &val: mlist) {
        cout << val << ' ';
    }
    cout << endl;
}

void test04() {
    list<int> list1;
    for (int i = 0; i < 10; ++i) {
        list1.push_back(rand() % 10);
    }
    cout << "list1:" << endl;
    printList(list1);

    cout << "after reverse:" << endl;
    list1.reverse();
    printList(list1);

    cout << "after sort(default):" << endl;
    list1.sort();
    printList(list1);

    cout << "after sort(user-defined):" << endl;
    list1.sort(myCompare);
    printList(list1);
}

int main() {
//    test01();
//    test02();
//    test03();
    test04();

    return 0;
}
