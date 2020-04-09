#include <iostream>
#include <string>
#include <vector>

using namespace std;

int blackwhite(string table[], char ch, int x, int y)
{
    int maxc = 0;
    int dir[4][2][2] = { {{ -1,0 },{ 1,0 }},{{ 0,-1 },{ 0,1 }},{{ -1,-1 },{ 1,1 }},{{ -1,1 },{ 1,-1 }} };//8��λ�ã����¡����ҡ��������¡��������·���һ����
    for (int i = 0; i < 4; ++i) // ���ַ�����������
    {
        int c = 0;
        for (int j = 0; j < 2; ++j) // ����С�����������¡���������
        {
            int nx = x, ny = y;
            while (nx >= 0 && nx < 20 && ny >= 0 && ny < 20 && table[nx][ny] == ch)//���Ʊ߽磬������������Ӵ��������С�
            {
                nx += dir[i][j][0];//���ϼ�Ⲣ�ۼ�
                ny += dir[i][j][1];//���¼�Ⲣ�ۼ�
                ++c;
            }
        }
        maxc = (maxc > c ? maxc : c);//����һ���������
    }
    return maxc - 1;// ����λ��ͳ�������Σ�����ͳ����ʱ����Ҫ�������ȥ1
}

bool solve(string table[])
{
    for(int i = 0; i < 20; ++i)
    {
        for(int j = 0; j < 20; ++j)
        {
            if(table[i][j] == '*' || table[i][j] == '+')//�ڰ���
            {
                if(blackwhite(table,table[i][j],i,j) >= 5)//ͳ�Ƴ����˶��ٴ�
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


