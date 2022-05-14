/********************************************************************************
* @author: 兔子
* @project: 2022_5_14 
* @date: 2022/5/14 19:00
* @version: 1.0
* @description: 继承在异常中的应用
********************************************************************************/
#if 1

#include <iostream>

using namespace std;

class BaseMyException {
public:
    virtual void what() = 0;

    virtual ~BaseMyException() {};
};

class TargetSpaceNullException : public BaseMyException {
public:
    virtual void what() {
        cout << "目标为空" << endl;
    }

    ~TargetSpaceNullException() {};
};

class SourceSpaceNullException : public BaseMyException {
public:
    virtual void what() {
        cout << "源为空" << endl;
    }

    ~SourceSpaceNullException() {};
};

void copy_str(char *dest, char *src) {
    if (dest == NULL) {
        throw TargetSpaceNullException();
    }
    if (src == NULL) {
        throw SourceSpaceNullException();
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
}

int main() {
    char *src = (char *) "hello world";
    char buf[1024] = {0};

    try {
        copy_str(buf, src);
    }
    catch (BaseMyException &ex) {
        ex.what();
    }

    return 0;
}

#endif
