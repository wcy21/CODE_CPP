/********************************************************************************
* @author: 兔子
* @project: 2022_5_17 
* @date: 2022/5/17 10:15
* @version: 1.0
* @description: queue容器部分方法
********************************************************************************/

#include <iostream>
#include <queue>

using namespace std;

void test01() {
    queue<int> q;
    for (int i = 0; i < 5; ++i) {
        q.push(i + 16);
        cout << "q.push(" << i + 16 << ")" << endl;
        cout << "(front, back) : (" << q.front() << ", " << q.back() << ")" << endl;
    }

    cout << "q:" << endl;
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
}

int main() {
    test01();

    return 0;
}
