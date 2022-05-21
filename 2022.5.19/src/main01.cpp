/********************************************************************************
 * @author: 兔子
 * @project: 2022_5_19
 * @date: 2022/5/19 22:36
 * @version: 1.0
 * @description: 函数对象
 ********************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct MyPrint {
    MyPrint()
    {
        m_num = 0;
    }

    void operator()(int val)
    {
        ++m_num;
        cout << val << endl;
    }

public:
    int m_num;
};

void test01()
{
    MyPrint print;
    print(10);
}

int num = 0;

void MyPrint02(int val)
{
    ++num;
    cout << val << endl;
}

void test02()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(70);

    //    MyPrint02(10);
    //    MyPrint02(20);
    //    cout << num << endl;

    //    MyPrint print;
    //    print(10);
    //    print(20);
    //    cout << print.n_num << endl;

    MyPrint print;
    cout << "print 调用次数：" << print.m_num << endl;

    MyPrint print02 = for_each(v.begin(), v.end(), MyPrint());
    cout << "print02 调用次数：" << print02.m_num << endl;
}

int main()
{
    //    test01();
    test02();

    return 0;
}
