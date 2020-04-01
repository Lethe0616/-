/*
Fibonacci数列是这样定义的：
F[0] = 0
F[1] = 1
for each i ≥ 2: F[i] = F[i-1] + F[i-2]
因此，Fibonacci数列就形如：0, 1, 1, 2, 3, 5, 8, 13, ...，在Fibonacci数列中的数我们称为Fibonacci数。给你一个N，你想让其变为一个Fibonacci数，每一步你可以把当前数字X变为X-1或者X+1，现在给你一个数N求最少需要多少步可以变为Fibonacci数。 

输入描述:
输入为一个正整数N(1 ≤ N ≤ 1,000,000)

输出描述:
输出一个最小的步数变为Fibonacci数"
 
输入例子:
15

输出例子:
2
*/
#include<iostream>
#include<algorithm>
using namespace std;
const int N=100000;
int Fbi[N];

int main()
{
    Fbi[0]=1;
    Fbi[1]=1;
    for(int i=2;i<N;i++)
    {
        Fbi[i]=Fbi[i-1]+Fbi[i-2];
    }
    int n;
    while(scanf("%d",&n)>0)
    {
       int i=0; 
       for(;i<N-1;i++)
        {
           if(Fbi[i]<=n&&Fbi[i+1]>=n)
               break;
       }
        int num=min(n-Fbi[i],Fbi[i+1]-n);
        cout<<num<<endl;
    }
    return 0;
}
