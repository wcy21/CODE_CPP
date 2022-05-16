/********************************************************************************
* @author: 兔子
* @project: 2022_5_16 
* @date: 2022/5/16 11:34
* @version: 1.0
* @description: string容器部分方法
********************************************************************************/

#include <iostream>

using namespace std;

void test01() {
    string s = "hello world";

    try {  // at 越界会抛异常out_of_range
        cout << s.at(17) << endl;
    }
    catch (out_of_range &e) {
        cout << e.what() << endl;
    }
}

void test02() {
    string s = "The breeze brushes your face, but tickles my heart";
    int pos = s.find("he");
    cout << "pos: " << pos << endl;

    pos = s.rfind("he");
    cout << "pos: " << pos << endl;
}

void test03() {
    string s = "he told a sad story";
    s.replace(3, 4, "is");
    cout << s << endl;
}

void test04() {
    string s1 = "you";
    string s2 = "me";

    if (s1.compare(s2) == 0) {
        cout << "s1 = s2" << endl;
    } else if (s1.compare(s2) > 0) {
        cout << "you > me" << endl;
    } else {
        cout << "s1 < s2" << endl;
    }
}

void test05() {
    string s = "layout";
    string substr = s.substr(2, 3);
    cout << substr << endl;
}

void test06() {
    string s = "glove";
    s.insert(5, "r");
    cout << s << endl;

    s.erase(0, 1);
    cout << s << endl;
}

int main() {
//    test01();
//    test02();
//    test03();
//    test04();
//    test05();
    test06();

    return 0;
}