/********************************************************************************
* @author: 兔子
* @project: 2022_5_28 
* @date: 2022/5/28 17:02
* @version: 1.0
* @description: 常用排序算法
********************************************************************************/

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

struct MyPrint01 {
    void operator()(int val) {
        cout << val << ' ';
    }
};

struct MyCompare01 {
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

void test01() {
    vector<int> v1;
    vector<int> v2;

    srand((unsigned int) time(NULL));

    for (int i = 0; i < 10; ++i) {
        v1.push_back(rand() % 10);
    }

    for (int i = 0; i < 10; ++i) {
        v1.push_back(rand() % 10);
    }

    sort(v1.begin(), v1.end(), MyCompare01());
    sort(v2.begin(), v2.end(), MyCompare01());

    vector<int> v3;
    v3.resize(v1.size() + v2.size());

    // 默认从小到大
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), MyCompare01());
    for_each(v3.begin(), v3.end(), MyPrint01());
}

void test02() {
    vector<int> v;
    for (int i = 0; i < 9; ++i) {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), MyPrint01());
    cout << endl;
    random_shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), MyPrint01());
    cout << endl;
}

void test03() {
    vector<int> v;
    for (int i = 0; i < 9; ++i) {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), MyPrint01());
    cout << endl;
    reverse(v.begin(), v.end());
    for_each(v.begin(), v.end(), MyPrint01());
    cout << endl;
}

int main() {
//    test01();
//    test02();
    test03();

    return 0;
}
