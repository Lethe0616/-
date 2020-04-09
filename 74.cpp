#include <iostream>
#include <string>
#include <vector>

using namespace std;

int blackwhite(string table[], char ch, int x, int y)
{
    int maxc = 0;
    int dir[4][2][2] = { {{ -1,0 },{ 1,0 }},{{ 0,-1 },{ 0,1 }},{{ -1,-1 },{ 1,1 }},{{ -1,1 },{ 1,-1 }} };//8个位置，上下、左右、左上右下、右上左下放在一起检测
    for (int i = 0; i < 4; ++i) // 四种方向，上下左右
    {
        int c = 0;
        for (int j = 0; j < 2; ++j) // 两个小方向，左上右下、左下右上
        {
            int nx = x, ny = y;
            while (nx >= 0 && nx < 20 && ny >= 0 && ny < 20 && table[nx][ny] == ch)//控制边界，并将输入的棋子存入数组中。
            {
                nx += dir[i][j][0];//向上检测并累加
                ny += dir[i][j][1];//向下检测并累加
                ++c;
            }
        }
        maxc = (maxc > c ? maxc : c);//连在一起的棋子数
    }
    return maxc - 1;// 中心位置统计了两次，上下统计完时，需要给结果减去1
}

bool solve(string table[])
{
    for(int i = 0; i < 20; ++i)
    {
        for(int j = 0; j < 20; ++j)
        {
            if(table[i][j] == '*' || table[i][j] == '+')//黑白棋
            {
                if(blackwhite(table,table[i][j],i,j) >= 5)//统计出现了多少次
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    string table[20];
    while(cin >> table[0])
    {
        for(int i = 1; i < 20; ++i)
            cin >> table[i];
        cout << (solve(table) ? "Yes" : "No") << endl;
    }
    return 0;
}


