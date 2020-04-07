#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1,str2;
    while(cin>>str1){
        cin>>str2;
        int len1=str1.size();
        int len2=str2.size();
        int dp[len1+1][len2+1];//建立一个二维数组dp[len1+1][len2+1],两个字符串一个纵对应，一个横向对应。
        if(len1==0 || len2==0)
            return 0;
        for(int j=0;j<=len2;j++)//初始化边界
            dp[0][j]=0;  
        for(int i=0;i<=len1;i++)//初始化边界
            dp[i][0]=0; 
        for(int i=1;i<=len1;i++)
            for(int j=1;j<=len2;j++){
               dp[i][j]=dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1];
               if(str1[i-1]==str2[j-1])//比较两字符串中的字符是否相同
                    dp[i][j]=dp[i][j]>(dp[i-1][j-1]+1)?dp[i][j]:(dp[i-1][j-1]+1);
        }
        cout<<dp[len1][len2]<<endl;
    }
    return 0;
}

