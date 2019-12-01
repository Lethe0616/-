/*
С�����ڹ�˾Ҫ�����ս�����С��ǡ�û������߸�����
��Ҫ�ڹ�˾����ϲ���һ���齱��Ϸ����Ϸ��һ��6*6�������Ͻ��У�
�������36����ֵ���ȵ����ÿ��С���������������һ�����
����Ҫ�����Ͻǿ�ʼ��Ϸ��ÿ��ֻ�����»��������ƶ�һ�����������½�ֹͣ��
һ·�ϵĸ����������С�������õ���
�����һ���㷨ʹС���õ���ֵ��ߵ����

����һ��6*6�ľ���board������ÿ��Ԫ��Ϊ��Ӧ���ӵ������ֵ,
���Ͻ�Ϊ[0,0],�뷵���ܻ�õ�����ֵ����֤ÿ�������ֵ����100С��1000��
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
        if (board.size() == 1) //�е���1
        {
            for (int i = 0;i < board[0].size();++i)
            {
                sum = accumulate(board[0].begin(),board[0].end(),0);
            }
            return sum;
        }
        if (board[0].size() == 1) //�е���1
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
        //ɾ����
        board.erase(board.begin());     
        return getMost(board);
    }

    int getMostLowCol(vector<vector<int> > board) {
        //ɾ����
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
    cout<<"����ȡ�����ֵΪ��"<<bo.getMost(vec);
    cout << endl;
    return 0;
}
