/********************************************************************************
* @author: ����
* @project: 2022_5_13 
* @date: 2022/5/13 3:10
* @version: 1.0
* @description: ����ģ�尸�� -- ��ͬ������������
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
        for (int j = i + 1; j < len; ++j) {  // ��С��������
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

    cout << "����֮ǰ��" << endl;
    PrintArray(arr, len);
    MySort(arr, len);
    cout << "����֮��" << endl;
    PrintArray(arr, len);

    cout << "-------------" << endl;

    char chArr[] = {'l', 'q', 'm', 'd', 's', 'b'};
    int chLen = sizeof(chArr) / sizeof(char);

    cout << "����֮ǰ��" << endl;
    PrintArray(chArr, chLen);
    MySort(chArr, chLen);
    cout << "����֮��" << endl;
    PrintArray(chArr, chLen);

    return 0;
}
