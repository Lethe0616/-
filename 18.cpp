/*
����һ�������ľ��������̣������һ����Ч�㷨�жϵ�ǰ����Ƿ��ʤ��

����һ����ά����board������ǰ���̣�����Ԫ��Ϊ1�Ĵ����ǵ�ǰ��ҵ����ӣ�Ϊ0��ʾû�����ӣ�Ϊ-1�����ǶԷ���ҵ����ӡ�
*/
#include <iostream>
#include <vector>
using namespace std;

/*����������ж�Ϊ���ʤ������������Ϊrow*row
 *1.��ȫΪ1�����к�Ϊrow
 *2.��ȫΪ1�����к�Ϊrow
 *3.���Խ�ȫΪ1�������ԽǺ�Ϊrow
 *4.���Խ�ȫΪ1�������ԽǺ�Ϊrow*/
class Board {
public:
	bool checkWon(vector<vector<int> > board)
	{
		int row = board.size();
		int i, j, sum;
		//�ж��к�Ϊrow
		for (i = 0; i < row; ++i)
		{
			sum = 0;
			for (j = 0; j < row; ++j)
			{
				sum += board[i][j];
			}
			if (row == sum)
				return true;
		}

		//�ж��к�Ϊrow
		for (i = 0; i < row; ++i)
		{
			sum = 0;
			for (j = 0; j < row; ++j)
			{
				sum += board[j][i];
			}
			if (row == sum)
				return true;
		}
		//�ж����ԽǺ�Ϊrow
		sum = 0;
		for (i = 0; i < row; ++i)
		{
			sum += board[i][i];
		}
		if (row == sum)
			return true;
		//�жϷ��ԽǺ�Ϊrow
		sum = 0;
		for (i = 0; i < row; ++i)
		{
			sum += board[i][row - i - 1];
		}
		if (row == sum)
			return true;

		return false;
	}
};

int main()
{
	Board b;
	int n;
	cin >> n;
	vector<vector<int>> a(n,vector<int>(n));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
	}
	if (b.checkWon(a))
		cout << "Won" << endl;
	else
		cout << "No" << endl;
	return 0;
}

