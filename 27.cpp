/*
请实现如下接口
public static int findNumberOf1(intnum)
{

return 0;
}譬如：输入5 ，5的二进制为101，输出2

输入
输入一个整数

输出
计算整数二进制中1的个数

样例输入
5

样例输出
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
        num &=num-1;//经典位操作
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
