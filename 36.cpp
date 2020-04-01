/*
���������ַ�������󹫹��ִ��ĳ��ȣ��ַ������ִ�Сд(Ҫ�����������ִ��ĳ���)

���ȼ���str1�ĳ���Ϊn,str2�ĳ���Ϊm������һ��n*m�Ķ�ά����dp,dp[i][j]��ʾstr1[0...i]��str2[0...j]�������������ִ��ĳ��ȣ�����n��¼����str1[i]!=str2[j],��dp[i][j]==0;

�������ֵĵ�һ�к͵�һ�У�������Ĺ����ַ�������Ϊ1������ֻҪ�����ַ���ȣ�����n=1������������������ִ������Ե�str1[i]==str2[j]��dp[i][j]=dp[i-1][j-1]+1;
*/

#include<iostream>
#include<string>
#include<cstring>
using namespace::std;
//����ĿҪ�������������������
//��̬�滮
int main()
{
	string A;
	
	while (cin >> A)
	{
		string B;
		cin >>B;
		int l1 = A.size();
		int l2 = B.size();
		//���ɶ�ά����
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
				else if (i == 0 || j == 0)//���ڵ�һ�к͵�һ��
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
