/*
��ʵ�����½ӿ�
public static int findNumberOf1(intnum)
{

return 0;
}Ʃ�磺����5 ��5�Ķ�����Ϊ101�����2

����
����һ������

���
����������������1�ĸ���

��������
5

�������
2
*/
#include<iostream>

using namespace std;

void findNumberOf1(int num)
{    
    int counter = 0;
    while(num)
    {
        counter++;
        num &=num-1;//����λ����
    }
    cout<<counter<<endl;
    return;
}

int main()
{
    int intnum;
    while(cin>>intnum)
    {
        findNumberOf1(intnum);
    }
    return 0;
}
