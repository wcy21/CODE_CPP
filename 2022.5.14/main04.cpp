/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 10:21
* @version: 1.0
* @description: MyArray模板类
********************************************************************************/

#include <iostream>

using namespace std;

template<class T>
class MyArray {
public:
    MyArray(int capacity) {
        this->mCapacity = capacity;
        this->mSize = 0;

        this->pAddr = new T[this->mCapacity];
    }

    MyArray(const MyArray &arr) {
        this->mCapacity = arr.mCapacity;
        this->mSize = arr.mSize;

        this->pAddr = new T[this->mCapacity];
        for (int i = 0; i < this->mSize; ++i) {
            this->pAdd[i] = arr.pAddr[i];
        }
    }

    T &operator[](int index) {
        return this->pAddr[index];
    }

    MyArray<T> operator=(const MyArray<T> &arr) {
        if (this->pAddr != NULL) {
            delete[] this->pAddr;
        }

        this->mCapacity = arr.mCapacity;
        this->mSize = arr.mSize;

        this->pAddr = new T[this->mCapacity];
        for (int i = 0; i < this->mSize; ++i) {
            this->pAdd[i] = arr.pAddr[i];
        }

        return *this;
    }

    void PushBack(T &data) {
        if (this->mSize >= mCapacity) {
            return;
        }

        this->pAddr[this->mSize] = data;
        this->mSize++;
    }

    void PushBack(T &&data) {
        if (this->mSize >= mCapacity) {
            return;
        }

        // 元素拷贝至数组，值寓意，非引用寓意。可能出现浅拷贝
        this->pAddr[this->mSize] = data;
        this->mSize++;
    }

    ~MyArray() {
        if (this->pAddr != NULL) {
            delete[] this->pAddr;
        }
    }

public:
    int mCapacity;  // 容量
    int mSize;  // 当前元素个数
    T *pAddr;  // 数组首地址
};

void test01() {
    MyArray<int> myArray(20);

    int a = 1, b = 4, c = 10;
    myArray.PushBack(a);
    myArray.PushBack(b);
    myArray.PushBack(c);

    myArray.PushBack(16);
    myArray.PushBack(24);
    myArray.PushBack(31);

    for (int i = 0; i < myArray.mSize; ++i) {
        cout << myArray[i] << ' ';
    }
    cout << endl;
}

class Person {
};

void test02() {
    Person p1, p2;

    MyArray<Person> arr(10);
    arr.PushBack(p1);
    arr.PushBack(p2);
}

int main() {
    test01();

    return 0;
}
