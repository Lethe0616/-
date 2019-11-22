/*
完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1+2+4+7+14=28。给定函数count(int n),用于计算n以内(含n)完全数的个数。计算范围, 0 < n <= 500000返回n以内完全数的个数。异常情况返回-1

输入描述：

输入一个数字

输出描述：

输出完全数的个数

输入例子：

1000
输出例子：

3
*/

#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
bool is_completenum(int i)
{
int sum = 0;
for(int j = 1; j <= floor(pow(i, 0.5)); j++)
{
if(j != i && i%j == 0)
{
sum += j;
int temp = i/j;
if(temp != i && temp != j)
{
sum += temp;
}
}
}
if(sum == i)
return true;
return false;
}
void test1()
{
bitset<500000> bs;
bs.reset();
for(int i = 1; i <= 10000; i++)
{
if(is_completenum(i))
bs.set(i-1);
}
int n;
while(cin >> n)
{
int count = 0;
if(n > 10000)
{
for(int i = 10001; i <= n; i++)
{
if(is_completenum(i))
bs.set(i-1);
}
}
for(int i = 0; i < n; i++)
{
if(bs.test(i))
count++;
}
if(count)
cout << count << endl;
else
cout << -1 << endl;
}
}
int main()
{
test1();
return 0;
}
