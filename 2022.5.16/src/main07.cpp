/********************************************************************************
* @author: 兔子
* @project: 2022_5_16 
* @date: 2022/5/16 13:24
* @version: 1.0
* @description: deque容器案例 - 打分案例
********************************************************************************/

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

class Player {
public:
    Player() {
    }

    Player(string name, int score) : mName(name), mScore(score) {
    }

public:
    string mName;
    int mScore;
};

void Create_Player(vector<Player> &v) {  // 创建选手
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; ++i) {
        Player p;
        p.mName = "选手";
        p.mName += nameSeed[i];
        p.mScore = 0;

        v.push_back(p);
    }
}

void PrintScore(int val) {
    cout << val << " ";
}

void Set_Score(vector<Player> &v) {  // 打分
    for (auto it = v.begin(); it != v.end(); ++it) {
        deque<int> dScore;
        for (int i = 0; i < 10; ++i) {
            int score = rand() % 41 + 60;
            dScore.push_back(score);
        }

        sort(dScore.begin(), dScore.end());

        dScore.pop_front();
        dScore.pop_back();

        int totalScore = 0;
        for (auto dit = dScore.begin(); dit != dScore.end(); ++dit) {
            totalScore += (*dit);
        }

        int avgScore = totalScore / dScore.size();
        (*it).mScore = avgScore;
    }
}

bool MyCompare(Player &p1, Player &p2) {
    return p1.mScore > p2.mScore || p1.mName < p2.mName;
}

void Print_Rank(vector<Player> &v) {  // 输出排名
    sort(v.begin(), v.end(), MyCompare);

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << "name: " << (*it).mName << ", score: " << (*it).mScore << endl;
    }
}

int main() {
    vector<Player> vPlist;
    Create_Player(vPlist);
    Set_Score(vPlist);
    Print_Rank(vPlist);

    return 0;
}