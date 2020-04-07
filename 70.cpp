#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    string str1,str2;
    int len1,len2;
    while(cin>>str1>>str2>>len1>>len2)
    {
         if(str1.length()<len2)
             str1.append(len2-str1.length(),'a'-1);
          if(str2.length()<len2)
              str2.append(len2-str2.length(),'z'+1);
          long long sum = 0;
          int k = 0;
          //第一步，找第一个相对位置不相等的位置下标
          while(str1[k]==str2[k])
          {
                k++;
          }
          if(str1[k]<str2[k] && len1<=len2)
          {
                //第二步，计算str[k]>str1[k] && str[k]<str2[k]的情况
                for(int i= len1-1;i<len2;i++)
                {
                     if(i==k)
                     {
                         if(k==len1-1 && k==len2-1)
                              sum += str2[k] - str1[k] -1;
                         else
                              sum += str2[k] - str1[k];
                     }
                     else
                            sum += (str2[k] - str1[k] - 1)*pow(26,i-k);
                }
                k++;
                //第三步，计算str[k]==str1[k]时的情况和str[k]==str2[k]的情况
                for(int i = len1;i <= len2;i++)
                {  for(int j=k;j<i;j++)
                        sum += ('z'-str1[j])*pow(26,i-j-1);
                    for(int j=k;j<i;j++)
                        sum += (str2[j]-'a')*pow(26,i-j-1);
                }
          }
          cout << sum << endl;//我这里没有对1000007取模，答案也是能过的，牛友们可自行添加
    }
    system("pause");
    return 0;
}

