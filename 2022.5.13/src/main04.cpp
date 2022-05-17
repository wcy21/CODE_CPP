/********************************************************************************
* @author: 兔子
* @project: 2022_5_13 
* @date: 2022/5/13 3:10
* @version: 1.0
* @description: 函数模板案例 -- 不同类型数组排序
********************************************************************************/

#include <iostream>

using namespace std;

template<class T>
void PrintArray(T *arr, int len) {
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

template<class T>
void MySort(T *arr, int len) {
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {  // 从小到大排序
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 2, 6, 1, 4};
    int len = sizeof(arr) / sizeof(int);

    cout << "排序之前：" << endl;
    PrintArray(arr, len);
    MySort(arr, len);
    cout << "排序之后：" << endl;
    PrintArray(arr, len);

    cout << "-------------" << endl;

    char chArr[] = {'l', 'q', 'm', 'd', 's', 'b'};
    int chLen = sizeof(chArr) / sizeof(char);

    cout << "排序之前：" << endl;
    PrintArray(chArr, chLen);
    MySort(chArr, chLen);
    cout << "排序之后：" << endl;
    PrintArray(chArr, chLen);

    return 0;
}
