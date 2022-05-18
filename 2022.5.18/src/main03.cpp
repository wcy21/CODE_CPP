/********************************************************************************
* @author: 兔子
* @project: 2022_5_18 
* @date: 2022/5/18 14:04
* @version: 1.0
* @description: 容器深拷贝和浅拷贝
********************************************************************************/

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Person {
public:
    Person(char *name, int age) {
        this->p_name = new char[strlen(name) + 1];
        strcpy(this->p_name, name);
        this->m_age = age;
    }

    Person(const Person &p) {
        this->p_name = new char[strlen(p.p_name) + 1];
        strcpy(this->p_name, p.p_name);
        this->m_age = p.m_age;
    }

    Person &operator=(const Person &p) {
        if (this->p_name != NULL) {
            delete[]this->p_name;
        }
        this->p_name = new char[strlen(p.p_name) + 1];
        strcpy(this->p_name, p.p_name);
        this->m_age = p.m_age;
        return *this;
    }

    ~Person() {
        if (this->p_name != NULL) {
            delete[]this->p_name;
        }
    }

public:
    char *p_name;
    int m_age;
};

void test01() {
    vector<Person> vPerson;
    Person p("blue dog", 20);
    vPerson.push_back(p);
}

int main() {
    test01();

    return 0;
}
