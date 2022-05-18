/********************************************************************************
* @author: 兔子
* @project: 2022_5_18 
* @date: 2022/5/18 9:53
* @version: 1.0
* @description: map容器部分方法
********************************************************************************/

#include <iostream>
#include <map>

using namespace std;

void test01() {
    map<int, int> myMap;

    pair<map<int, int>::iterator, bool> ret;
    ret = myMap.insert(pair<int, int>(10, 10));
    if (ret.second) {
        cout << "(10, 10)插入成功" << endl;
    } else {
        cout << "(10, 10)插入失败" << endl;
    }
    ret = myMap.insert(pair<int, int>(10, 20));
    if (ret.second) {
        cout << "(10, 20)插入成功" << endl;
    } else {
        cout << "(10, 20)插入失败" << endl;
    }

    myMap.insert(make_pair(20, 20));
    myMap.insert(map<int, int>::value_type(30, 30));
    myMap[40] = 40;
    myMap[20] = 200;

    cout << "myMap[60]: " << myMap[60] << endl;
    for (auto &val: myMap) {
        cout << "key: " << val.first << ", value: " << val.second << endl;
    }
    cout << endl;
}

class MyKey {
public:
    MyKey(int index, int id) {
        m_index = index;
        m_ID = id;
    }

public:
    int m_index;
    int m_ID;
};

struct MyCompare {
    bool operator()(const MyKey &key1, const MyKey &key2) {
        return key1.m_index > key2.m_index;
    }
};

void test02() {
    map<MyKey, int, MyCompare> myMap;
    myMap.insert(make_pair(MyKey(1, 2), 10));
    myMap.insert(make_pair(MyKey(2, 4), 20));

    for (auto &it: myMap) {
        cout << "index: " << it.first.m_index << ", id: " << it.first.m_ID << ", value: " << it.second << endl;
    }
}

void test03() {
    map<int, int> myMap;
    myMap.insert(make_pair(1, 2));
    myMap.insert(make_pair(2, 3));
    myMap.insert(make_pair(3, 4));

    pair<map<int, int>::iterator, map<int, int>::iterator> ret = myMap.equal_range(2);
    if (ret.first->second) {
        cout << "找到lower_bound" << endl;
    } else {
        cout << "没有找到lower_bound" << endl;
    }
    if (ret.second->second) {
        cout << "找到upper_bound" << endl;
    } else {
        cout << "没有找到upper_bound" << endl;
    }
}

int main() {
//    test01();
//    test02();
    test03();

    return 0;
}
