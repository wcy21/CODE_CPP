/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 10:52
* @version: 1.0
* @description: 强制类型转换
********************************************************************************/
#if 0

#include <iostream>

using namespace std;

class Person {
};

class Animal {
};

class Cat : public Animal {
};

// static_cast
void test01() {
    int a = 97;
    char c = static_cast<char>(a);

    cout << c << endl;

    // 报错
//    int *p = NULL;
//    char *cp = static_cast<char *>(p);

    // 报错
//    Person *p = NULL;
//    Animal *cat = static_cast<Animal *>(p);

    // 父类指针转子类指针
//    Animal *ani = NULL;
//    Cat *cat = static_cast<Cat *>(ani);

    // 子类指针转父类指针
//    Cat *cat = NULL;
//    Animal *ani = static_cast<Animal *>(cat);

    // 引用
    Animal aniobj;
    Animal &aniref = aniobj;
    Cat &cat = static_cast<Cat &>(aniref);

    Cat catobj;
    Cat &catref = catobj;
    Animal &ani = static_cast<Animal &>(catref);
}

// dynamic_cast 转换继承关系的指针或引用
void test02() {
//    int a = 10;
//    char c = dynamic_cast<char>(a);

    // 非继承关系
//    Person *p = NULL;
//    Animal *ani = dynamic_cast<Animal *>(p);

    // 安全检查
//    Animal *ani = NULL;
//    Cat *cat = dynamic_cast<Cat *>(ani);

    Cat *cat = NULL;
    Animal *ani = dynamic_cast<Animal *>(cat);
}

// const_cast 指针、引用或对象指针
void test03() {
    // 基础数据类型
    int a = 10;
    const int &b = a;
    int &c = const_cast<int &>(b);
    c = 5;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // 指针
    const int *p1 = NULL;
    int *p2 = const_cast<int *>(p1);

    int *p3 = NULL;
    const int *p4 = const_cast<const int *>(p3);
}

typedef void(*FUNC1)(int, int);

typedef int(*FUNC2)(int, char *);

// reinterpret_cast 强制类型转换
void test04() {
    // 无关类型转换
    Person *p = NULL;
    Animal *ani = reinterpret_cast<Animal *>(p);

    // 函数指针转换
    FUNC1 func1;
    FUNC2 func2 = reinterpret_cast<FUNC2>(func1);
}

int main() {
    test03();

    return 0;
}

#endif
