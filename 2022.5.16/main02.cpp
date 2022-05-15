/********************************************************************************
* @author: 兔子
* @project: 2022_5_16 
* @date: 2022/5/16 0:53
* @version: 1.0
* @description: 二进制文件读写
********************************************************************************/

#include <iostream>
#include <fstream>

#define BINARY_FILE "text/binary.txt"

using namespace std;

class Person {
public:
    Person() {
    }

    Person(int age, int id) : mAge(age), mId(id) {
    }

    void show() {
        cout << "age: " << mAge << ", id: " << mId << endl;
    }

private:
    int mAge;
    int mId;
};

void test01() {
    ofstream ofs(BINARY_FILE, ios::out | ios::binary);

    Person p1(16, 1001), p2(18, 1007);  // 二进制放入内存
    ofs.write((char *) &p1, sizeof(Person));
    ofs.write((char *) &p2, sizeof(Person));

    ofs.close();
}

void test02() {
    ifstream ifs(BINARY_FILE, ios::in | ios::binary);

    Person p1, p2;
    ifs.read((char *) &p1, sizeof(Person));
    ifs.read((char *) &p2, sizeof(Person));

    p1.show();
    p2.show();

    ifs.close();
}

int main() {
    test01();
    test02();

    return 0;
}