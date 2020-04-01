/*
��ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ���������е������ӣ����������������Լ�����ĺͣ������Ӻ�������ǡ�õ������������磺28������Լ��1��2��4��7��14��28����ȥ������28�⣬����5������ӣ�1+2+4+7+14=28����������count(int n),���ڼ���n����(��n)��ȫ���ĸ��������㷶Χ, 0 < n <= 500000����n������ȫ���ĸ������쳣�������-1

����������

����һ������

���������

�����ȫ���ĸ���

�������ӣ�

1000
������ӣ�

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
