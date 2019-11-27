/*
计算两个字符串的最大公共字串的长度，字符不区分大小写(要求计算连续最长字串的长度)

首先假设str1的长度为n,str2的长度为m，建立一个n*m的二维数组dp,dp[i][j]表示str1[0...i]和str2[0...j]中连续相等最大字串的长度，并用n记录，当str1[i]!=str2[j],令dp[i][j]==0;

对于数字的第一行和第一列，由于最长的公共字符串长度为1，所以只要出现字符相等，就令n=1。由于是求最大连续字串，所以当str1[i]==str2[j]，dp[i][j]=dp[i-1][j-1]+1;
*/

#include<iostream>
#include<string>
#include<cstring>
using namespace::std;
//按题目要求是连续的相等子序列
//动态规划
int main()
{
	string A;
	
	while (cin >> A)
	{
		string B;
		cin >>B;
		int l1 = A.size();
		int l2 = B.size();
		//生成二维数组
		int** dp = new int*[l1];
		for (int i = 0; i < l1; i++)
		{
			dp[i] = new int[l2];
		}
		for (int i = 0; i < l1; i++)
		{
			for (int j = 0; j < l2; j++)
            {
                dp[i][j]=0;
            }
        }
		int n = 0;
		for (int i = 0; i < l1; i++)
		{
			for (int j = 0; j < l2; j++)
			{
				if (A[i] != B[j])
					dp[i][j] = 0;
				else if (i == 0 || j == 0)//对于第一行和第一列
					{
						dp[i][j] = 1;
						if (n < 1)
							n = dp[i][j];
					}
			   else
				{
				   dp[i][j] = dp[i - 1][j - 1] + 1;
				   if (dp[i][j] > n)
					   n = dp[i][j];
				}
			}
		}
		cout << n << endl;
    }
	return 0;
}
