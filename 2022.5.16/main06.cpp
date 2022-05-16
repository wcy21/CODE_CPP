/********************************************************************************
* @author: 兔子
* @project: 2022_5_16 
* @date: 2022/5/16 12:24
* @version: 1.0
* @description: vector容器部分方法
********************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &vec) {
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
}

void test01() {
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
    printVector(v);
}

void test02() {
    int arr[] = {6, 7, 8, 9, 10};
    vector<int> v;
    v.assign(arr, arr + sizeof(arr) / sizeof(int));
    printVector(v);
}

void test03() {  // swap实质是指向储存空间指针的交换
    vector<int> v1(5, 5);
    vector<int> v2(6, 6);

    cout << "v1.front: " << &v1.front() << endl;
    cout << "v2.front: " << &v2.front() << endl;

    v1.swap(v2);

    cout << "after swap:" << endl;
    cout << "v1.front: " << &v1.front() << endl;
    cout << "v2.front: " << &v2.front() << endl;
}

void test04() {  // swap缩减空间
    vector<int> v;
    for (int i = 0; i < 100000; ++i) {
        v.push_back(i);
    }
    cout << "initial:" << endl;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.resize(10);
    cout << endl << "after resize:" << endl;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    vector<int>(v).swap(v);
    cout << endl << "after swap:" << endl;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
}

void test05() {
    int num = 0;
    int *addr = NULL;

    vector<int> v;
    v.reserve(100000);
    for (int i = 0; i < 100000; ++i) {
        v.push_back(i);
        if (addr != &v.front()) {
            addr = &v.front();
            num++;
        }
    }
    cout << num << endl;
}

int main() {
//    test01();
//    test02();
//    test03();
//    test04();
    test05();

    return 0;
}