/********************************************************************************
* @author: 兔子
* @project: 2022_5_16 
* @date: 2022/5/16 1:28
* @version: 1.0
* @description: 容器、算法、迭代器分离案例
********************************************************************************/

#include <iostream>

using namespace std;

// 算法 统计某个元素个数
int my_count(int *start, int *end, int val) {
    int num = 0;
    while (start != end) {
        if (*start == val) {
            num++;
        }
        start++;
    }
    return num;
}

int main() {
    // 数组 容器
    int arr[] = {1, 7, 2, 9, 1, 0, 8, 7, 7, 8};
    int *pBegin = arr;  // 迭代器开始位置
    int *pEnd = &arr[sizeof(arr) / sizeof(int)];

    int num = my_count(pBegin, pEnd, 1);
    cout << "num: " << num << endl;

    return 0;
}