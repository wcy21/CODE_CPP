/********************************************************************************
* @author: 兔子
* @project: 2022_5_17 
* @date: 2022/5/17 11:54
* @version: 1.0
* @description: pair对组
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    pair<int, int> pair1(10, 100);
    cout << pair1.first << ' ' << pair1.second << endl;

    pair<int, string> pair2 = make_pair(20, "student");
    cout << pair2.first << ' ' << pair2.second << endl;

    pair<int, string> pair3 = pair2;
    cout << pair3.first << ' ' << pair3.second << endl;

    return 0;
}
