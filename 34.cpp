/*
���������ַ���a,b�е�������Ӵ������ж��������ڽ϶̴������ȳ��ֵ��Ǹ���

����������

���������ַ���

���������

�����ظ����ֵ��ַ�

�������ӣ�
abcdefghijklmnop
abcsafjklmnopqrstuvw

������ӣ�
jklmnop


��̬�滮������˼·�򵥺ܶࡣ
dp[i][j] ��¼���ַ��� s1 ǰ i ���ַ��ͳ��ַ��� s2 ǰ j ���ַ�����Ӵ��ĳ��ȣ���ʼ������ֵΪ 0����
 s1[i-1] = s2[j-1]ʱ��dp[i][j] = dp[i-1][j-1]+1��
 ע��Ҫʹ��һ�������ֵ start ����¼��Ӵ��ڶ��ַ��� s1 �г��ֵ���ʼλ�ú� maxlen��¼��ǰ��Ӵ��ĳ��ȣ�
 ��dp[i][j] > maxlen ʱ start = i-dp[i][j]��
 ��s1[i-1] != s2[j-1]ʱ����Ҫ�κβ���������dp[i][j]����Ĭ��ֵ 0��

*/
#include <iostream>
#include <string>
using namespace std;

string maxCommonSubstr(string s1, string s2)
{
    string s3 = (s1.length() <= s2.length())?s1:s2;
    string s4 = (s1.length() <= s2.length())?s2:s1;
    int m = s3.length();
    int n = s4.length();
    int **dp = new int*[m+1];
    for(int i = 0; i < m+1; i++)
    {
        dp[i] = new int[n+1];
        for(int j = 0; j < n+1; j++)
            dp[i][j] = 0;
    }
    int start = 0, maxlen = 0;
    for(int i = 1; i < m+1; i++)
    {
        for(int j = 1; j < n+1; j++)
        {
            if(s3[i-1] == s4[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
                if(dp[i][j] > maxlen)
                {
                    maxlen = dp[i][j];
                    start = i - maxlen;
                }
            }
        }
    }
    for(int i = 0; i < m+1; i++)
    {
        delete dp[i];
        dp[i] = 0;
    }
    delete [] dp;
    dp = 0;
    return s3.substr(start, maxlen);
}

void test1()
{
    string s1, s2;
    while(cin >> s1 >> s2)
    {
        cout << maxCommonSubstr(s1, s2) << endl;
    }
}

int main()
{
    test1();
    return 0;
}

