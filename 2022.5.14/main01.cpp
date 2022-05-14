/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 0:41
* @version: 1.0
* @description: 类模板外部实现
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

template<class T>
class Person;

template<class T>
ostream &operator<<(ostream &out, Person<T> &p);

template<class T>
void PrintPerson(Person<T> &p);

template<class T>
class Person {
    friend ostream &operator<<<T>(ostream &out, Person<T> &p);

    friend void PrintPerson<T>(Person<T> &p);

public:
    Person(T age, T id);

private:
    T mAge;
    T mId;
};

template<class T>
Person<T>::Person(T age, T id) {
    this->mAge = age;
    this->mId = id;
}

template<class T>
ostream &operator<<(ostream &out, Person<T> &p) {
    out << "Age:" << p.mAge << " ID:" << p.mId << endl;
    return out;
}

template<class T>
void PrintPerson(Person<T> &p) {
    cout << "Age:" << p.mAge << " ID:" << p.mId << endl;
}

void test01() {
    Person<int> p(18, 123);
//    cout << p;
    PrintPerson(p);
}

int main() {
    test01();

    return 0;
}

#endif