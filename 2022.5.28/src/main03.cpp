/********************************************************************************
* @author: 兔子
* @project: 2022_5_28 
* @date: 2022/5/28 17:35
* @version: 1.0
* @description: 常用算术生成算法
********************************************************************************/

#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;

struct MyPrint01 {
    void operator()(int val) {
        cout << val << ' ';
    }
};

void test01() {
    vector<int> v;
    v.push_back(0);
    v.push_back(6);
    v.push_back(2);
    v.push_back(1);

    int ret = accumulate(v.begin(), v.end(), 0);
    cout << "ret = " << ret << endl;

    vector<int> v2;
    v2.resize(10);
    fill(v2.begin(), v2.end(), 10);
    for_each(v2.begin(), v2.end(), MyPrint01());
    cout << endl;
}

void test02() {
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }

    for (int i = 5; i < 15; ++i) {
        v2.push_back(i);
    }

    vector<int> v3;
    v3.resize(min(v1.size(), v2.size()));

    auto it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), it, MyPrint01());
    cout << endl;

    vector<int> v4;
    v4.resize(v1.size() + v2.size());
    it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());
    for_each(v4.begin(), it, MyPrint01());
    cout << endl;

    vector<int> v5;
    v5.resize(v1.size());
    it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v5.begin());
    for_each(v5.begin(), it, MyPrint01());
    cout << endl;
}

int main() {
//    test01();
    test02();

    return 0;
}
