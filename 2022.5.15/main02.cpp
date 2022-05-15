/********************************************************************************
* @author: 兔子
* @project: 2022_5_15 
* @date: 2022/5/15 12:11
* @version: 1.0
* @description: 标准输出流与格式化输出
********************************************************************************/
#if 1

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void test01() {
    cout << "hello world" << endl;
//    cout.flush();  // 刷新缓冲区
    cout.put('c').put('+').put('+') << endl;
    cout.write("ko ko da yo", strlen("ko ko da yo"));
}

void test02() {  // 格式化输出
    int number = 10;
    cout << number << endl;

    cout.unsetf(ios::dec);  // 卸载默认十进制输出
    cout.setf(ios::oct);  // 设置八进制输出
    cout.setf(ios::showbase);  // 显示八进制前导0
    cout << number << endl;

    cout.unsetf(ios::oct);
    cout.setf(ios::hex);
    cout << number << endl;

    cout.width(10);
    cout.fill('*');  // 默认右对齐
    cout.setf(ios::left); // 左对齐
    cout << number << endl;

    int number2 = 10;
    cout << hex
         << setiosflags(ios::showbase)
         << setw(10)
         << setfill('^')
         << setiosflags(ios::left)
         << number2
         << endl;
}

int main() {
//    test01();
    test02();

    return 0;
}

#endif
