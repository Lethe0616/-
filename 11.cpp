/*
Fibonacci��������������ģ�
F[0] = 0
F[1] = 1
for each i �� 2: F[i] = F[i-1] + F[i-2]
��ˣ�Fibonacci���о����磺0, 1, 1, 2, 3, 5, 8, 13, ...����Fibonacci�����е������ǳ�ΪFibonacci��������һ��N�����������Ϊһ��Fibonacci����ÿһ������԰ѵ�ǰ����X��ΪX-1����X+1�����ڸ���һ����N��������Ҫ���ٲ����Ա�ΪFibonacci���� 

��������:
����Ϊһ��������N(1 �� N �� 1,000,000)

�������:
���һ����С�Ĳ�����ΪFibonacci��"
 
��������:
15

�������:
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
