/********************************************************************************
* @author: 兔子
* @project: 2022_5_16 
* @date: 2022/5/16 0:35
* @version: 1.0
* @description: 文件读写
********************************************************************************/

#include <iostream>
#include <fstream>

#define SOURCE_FILE "text/source.txt"
#define DEST_FILE "text/target.txt"

using namespace std;

void test01() {
    ifstream ifs(SOURCE_FILE, ios::in);
    ofstream ofs(DEST_FILE, ios::out | ios::app);

    if (!ifs) {
        cout << "文件打开失败" << endl;
        return;
    }

    char ch;
    while (ifs.get(ch)) {
        ofs << ch;
    }

    ifs.close();
    ofs.close();
}

int main() {
    test01();

    return 0;
}