/*
对于一个给定的井字棋棋盘，请设计一个高效算法判断当前玩家是否获胜。

给定一个二维数组board，代表当前棋盘，其中元素为1的代表是当前玩家的棋子，为0表示没有棋子，为-1代表是对方玩家的棋子。
*/
#include <iostream>
#include <vector>
using namespace std;

/*四种情况可判断为玩家胜利，假设棋盘为row*row
 *1.行全为1，即行和为row
 *2.列全为1，即列和为row
 *3.正对角全为1，即正对角和为row
 *4.反对角全为1，即反对角和为row*/
class Board {
public:
	bool checkWon(vector<vector<int> > board)
	{
		int row = board.size();
		int i, j, sum;
		//判断行和为row
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

		//判断列和为row
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
		//判断正对角和为row
		sum = 0;
		for (i = 0; i < row; ++i)
		{
			sum += board[i][i];
		}
		if (row == sum)
			return true;
		//判断反对角和为row
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

