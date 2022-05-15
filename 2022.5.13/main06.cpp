/********************************************************************************
* @author: 兔子
* @project: 2022_5_13 
* @date: 2022/5/13 3:28
* @version: 1.0
* @description: 类模板派生普通类
********************************************************************************/

#include <iostream>

using namespace std;

template<class T>
class Animal {
public:
    void shout() {
        cout << mAge << "的动物在叫" << endl;
    }

protected:
    T mAge;
};

template<class T>
class Cat : public Animal<T> {
};

int main() {

    return 0;
}
