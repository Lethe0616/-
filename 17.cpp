/* 
��Ŀ�����밴���¹�����мƷ֣������ݲ�ͬ�ĵ÷�Ϊ������а�ȫ�ȼ����֡�

һ�����볤��:
5 ��: С�ڵ���4 ���ַ�
10 ��: 5 ��7 �ַ�
25 ��: ���ڵ���8 ���ַ�
������ĸ:
0 ��: û����ĸ
10 ��: ȫ����С����д��ĸ
20 ��: ��Сд�����ĸ
��������:
0 ��: û������
10 ��: 1 ������
20 ��: ����1 ������
�ġ�����:
0 ��: û�з���
10 ��: 1 ������
25 ��: ����1 ������
�塢����:
2 ��: ��ĸ������
3 ��: ��ĸ�����ֺͷ���
5 ��: ��Сд��ĸ�����ֺͷ���
�������ֱ�׼:
>= 90: �ǳ���ȫ
>= 80: ��ȫ��Secure��
>= 70: �ǳ�ǿ
>= 60: ǿ��Strong��
>= 50: һ�㣨Average��
>= 25: ����Weak��
>= 0: �ǳ���
��Ӧ���Ϊ��
VERY_SECURE,
WEAK,
AVERAGE,
STRONG,
VERY_STRONG,
SECURE,
VERY_WEAK

��������:

����һ���Զ�������

�������:

�����Ӧ��ȫ�ȼ�

ʾ��1

����

dgsayd$%12

���

SECURE
���ö���жϻ����������������������һһ��Ӧ��ά����

*/
#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    //һ���ж�����
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
