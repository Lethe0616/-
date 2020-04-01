/* 
题目：密码按如下规则进行计分，并根据不同的得分为密码进行安全等级划分。

一、密码长度:
5 分: 小于等于4 个字符
10 分: 5 到7 字符
25 分: 大于等于8 个字符
二、字母:
0 分: 没有字母
10 分: 全都是小（大）写字母
20 分: 大小写混合字母
三、数字:
0 分: 没有数字
10 分: 1 个数字
20 分: 大于1 个数字
四、符号:
0 分: 没有符号
10 分: 1 个符号
25 分: 大于1 个符号
五、奖励:
2 分: 字母和数字
3 分: 字母、数字和符号
5 分: 大小写字母、数字和符号
最后的评分标准:
>= 90: 非常安全
>= 80: 安全（Secure）
>= 70: 非常强
>= 60: 强（Strong）
>= 50: 一般（Average）
>= 25: 弱（Weak）
>= 0: 非常弱
对应输出为：
VERY_SECURE,
WEAK,
AVERAGE,
STRONG,
VERY_STRONG,
SECURE,
VERY_WEAK

输入描述:

输入一个自定义密码

输出描述:

输出对应安全等级

示例1

输入

dgsayd$%12

输出

SECURE
设置多个判断或计数变量对上述条件进行一一对应与维护。

*/
#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    //一堆判断条件
    int len = str.size();
    bool upper = false;
    bool lower = false;
    bool onenumber = false;
    bool morenumber = false;
    bool onesymbol = false;
    bool moresymbol = false;
    int score = 0;
    if(len <= 4)
        score += 5;
    else if(len <= 7)
        score += 10;
    else
        score += 25;
    for(int i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            lower = true;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            upper = true;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            if(!onenumber)
                onenumber = true;
            else
                morenumber = true;
        }
        else 
        {
            if(!onesymbol)
                onesymbol = true;
            else
                moresymbol = true;
        }
    }
    if(upper && lower)
        score += 20;
    else if(upper || lower)
        score += 10;
    
    if(morenumber)
        score += 20;
    else if(onenumber)
        score += 10;
    
    if(moresymbol)
        score += 25;
    else if(onesymbol)
        score += 10;
    
    if((upper && lower) && onenumber && onesymbol)
        score += 5;
    else if((upper || lower) && onenumber && onesymbol)
        score += 3;
    else if((upper || lower) && onenumber)
        score += 2;
    
    if(score >= 90)
        cout <<"VERY_SECURE"<< endl;
    else if(score >= 80)
        cout <<"SECURE" << endl;
    else if(score >= 70)
        cout <<"VERY_STRONG" << endl;
    else if(score >= 60)
        cout <<"STRONG" << endl;
    else if(score >= 50)
        cout <<"AVERAGE" << endl;
    else if(score >= 25)
        cout <<"WEAK" << endl;
    else
        cout <<"VERY_WEAK" << endl;
    return 0;
}
