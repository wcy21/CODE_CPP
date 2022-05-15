/********************************************************************************
* @author: 兔子
* @project: 2022_5_15 
* @date: 2022/5/15 9:36
* @version: 1.0
* @description: 标准输入流
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

void test01() {
    char ch;
    while ((ch = cin.get()) != EOF) {
        cout << ch << endl;
    }

    char ch2;
    cin.get(ch2);  // 读一个字符
    cout << ch2 << endl;

    char buf[256] = {0};
//    cin.get(buf, 256);  // 读一个字符串
    cin.getline(buf, 256);  // 读取一行数据
    cout << buf << endl;
}

void test02() {
    char ch;

    cin.get(ch);
    cout << ch << endl;

    cin.ignore(10, '\n');  // 忽略n个字符，直到读到delim为止

    cin.get(ch);
    cout << ch << endl;
}

void test03() {
    cout << "输入数字或字符串：";

    char ch;
    ch = cin.peek();  // 查看并返回缓冲区第一个字符

    if (ch >= '0' && ch <= '9') {
        int number;
        cin >> number;
        cout << "您输入的是数字 " << number << endl;
    } else {
        char buf[256] = {0};
        cin >> buf;
        cout << "您输入的是字符串 " << buf << endl;
    }
}

void test04() {
    cout << "输入数字或字符串：";

    char ch;
    ch = cin.get();  // 查看并返回缓冲区第一个字符
    cin.putback(ch);

    if (ch >= '0' && ch <= '9') {
        int number;
        cin >> number;
        cout << "您输入的是数字 " << number << endl;
    } else {
        char buf[256] = {0};
        cin >> buf;
        cout << "您输入的是字符串 " << buf << endl;
    }
}

int main() {
//    test01();
//    test02();
//    test03();
    test04();

    return 0;
}

#endif
