/*
小东所在公司要发年终奖，而小东恰好获得了最高福利，
他要在公司年会上参与一个抽奖游戏，游戏在一个6*6的棋盘上进行，
上面放着36个价值不等的礼物，每个小的棋盘上面放置着一个礼物，
他需要从左上角开始游戏，每次只能向下或者向右移动一步，到达右下角停止，
一路上的格子里的礼物小东都能拿到，
请设计一个算法使小东拿到价值最高的礼物。

给定一个6*6的矩阵board，其中每个元素为对应格子的礼物价值,
左上角为[0,0],请返回能获得的最大价值，保证每个礼物价值大于100小于1000。
*/
#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

class Bonus {
public:
    int getMost(vector<vector<int> > board) {
        int sum=0;
        if (board.size() == 1) //行等于1
        {
            for (int i = 0;i < board[0].size();++i)
            {
                sum = accumulate(board[0].begin(),board[0].end(),0);
            }
            return sum;
        }
        if (board[0].size() == 1) //列等于1
        {
            for (int i = 0;i < board.size();++i)
            {
                sum = sum + board[i][0];
            }
            return sum;
        }
        return sum+ max(getMostLowRow( board) , getMostLowCol(board))+ board[0][0];
    }
    
    int getMostLowRow(vector<vector<int> > board) {
        //删除行
        board.erase(board.begin());     
        return getMost(board);
    }

    int getMostLowCol(vector<vector<int> > board) {
        //删除列
        for (int i = 0;i < board.size();++i)
        {
            board[i].erase(board[i].begin());
        }
        return getMost(board);
    }
};

int main()
{
    
    vector<int> vec1 = { 1,2 };
    vector<int> vec2 = { 3,4 };
    vector<vector<int>> vec;
    vec.push_back(vec1);
    vec.push_back(vec2);
    Bonus bo;
    cout<<"所获取的最大值为："<<bo.getMost(vec);
    cout << endl;
    return 0;
}
