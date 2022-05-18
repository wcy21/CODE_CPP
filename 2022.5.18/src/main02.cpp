/********************************************************************************
* @author: 兔子
* @project: 2022_5_18 
* @date: 2022/5/18 13:18
* @version: 1.0
* @description: multimap案例 - 员工分组
********************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <ctime>

#define SALE_DEPARTMENT 1
#define DEVELOP_DEPARTMENT 2
#define FINANCIAL_DEPARTMENT 3

using namespace std;

class Worker {
public:
    string m_name;
    string m_tele;
    int m_age;
    int m_salary;
};

// 创建
void Create_Worker(vector<Worker> &vWorker) {
    string seedName = "ABCDE";
    for (int i = 0; i < 5; ++i) {
        Worker worker;
        worker.m_name = "员工";
        worker.m_name += seedName[i];
        worker.m_age = rand() % 10 + 20;
        worker.m_tele = "888-8888888";
        worker.m_salary = rand() % 10000 + 10000;
        vWorker.push_back(worker);
    }
}

// 分组
void WorkerByGroup(vector<Worker> &vWorker, multimap<int, Worker> &workerGroup) {
    srand(time(NULL));
    for (auto &it: vWorker) {
        int departID = rand() % 3 + 1;
        switch (departID) {
            case SALE_DEPARTMENT:
                workerGroup.insert(make_pair(SALE_DEPARTMENT, it));
                break;
            case DEVELOP_DEPARTMENT:
                workerGroup.insert(make_pair(DEVELOP_DEPARTMENT, it));
                break;
            case FINANCIAL_DEPARTMENT:
                workerGroup.insert(make_pair(FINANCIAL_DEPARTMENT, it));
                break;
            default:
                break;
        }
    }
}

void ShowGroupWorkers(multimap<int, Worker> &workerGroup, int departID) {
    auto it = workerGroup.find(departID);
    int departCount = workerGroup.count(departID);

    int num = 0;
    for (auto pos = it; it != workerGroup.end() && num < departCount; ++pos, ++num) {
        cout << "姓名：" << pos->second.m_name << ", 年龄：" << pos->second.m_age
             << ", 电话：" << pos->second.m_tele << ", 工资：" << pos->second.m_salary << endl;
    }
}

// 打印
void PrintWorkerByGroup(vector<Worker> &vWorker, multimap<int, Worker> &workerGroup) {
    cout << "销售部门：" << endl;
    ShowGroupWorkers(workerGroup, SALE_DEPARTMENT);
    cout << "研发部门：" << endl;
    ShowGroupWorkers(workerGroup, DEVELOP_DEPARTMENT);
    cout << "财务部门：" << endl;
    ShowGroupWorkers(workerGroup, FINANCIAL_DEPARTMENT);
}

int main() {
    vector<Worker> vWorker;
    multimap<int, Worker> workerGroup;

    Create_Worker(vWorker);
    WorkerByGroup(vWorker, workerGroup);
    PrintWorkerByGroup(vWorker, workerGroup);

    return 0;
}
