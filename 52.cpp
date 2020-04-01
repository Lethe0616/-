/*
Problem Description
老猴子辛苦了一辈子，给那群小猴子们留下了一笔巨大的财富——一大堆桃子。老猴子决定把这些桃子分给小猴子。

第一个猴子来了，它把桃子分成五堆，五堆一样多，但还多出一个。它把剩下的一个留给老猴子，自己拿走其中的一堆。

第二个猴子来了，它把桃子分成五堆，五堆一样多，但又多出一个。它把多出的一个留给老猴子，自己拿走其中的一堆。
后来的小猴子都如此照办。最后剩下的桃子全部留给老猴子。

这里有n只小猴子，请你写个程序计算一下在开始时至少有多少个桃子，以及最后老猴子最少能得到几个桃子。

Input
输入包括多组测试数据。
每组测试数据包括一个整数n(1≤n≤10)。
输入以0结束，该行不做处理。

Output
每组测试数据对应一行输出。
包括两个整数a，b。
分别代表开始时最小需要的桃子数，和结束后老猴子最少能得到的桃子数。

Sample Input
5
1
0
Sample Output
3121 1025
*/ 
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
int main()  
{  
    int n;  
    while(scanf("%d",&n)&&n)    //n个小猴子
    {  
        long long int k=1;  
        long long int i;  
        for(i=0; i<n; i++)  
        {  
            k*=5;  
        }  
        k = k-4;  
        long long int q=k;  
        for(i=0; i<n; i++)  
        {  
            q = (q-1)/5 * 4;  
        }  
        q += n;  
        printf("%lld %lld\n",k,q);  
    }  
    return 0;  
}  
