/*
题目：
数根可以通过把一个数的各个位上的数字加起来得到。如果得到的数是一位数，那么这个数就是数根。如果结果是两位数或者包括更多位的数字，那么再把这些数字加起来。如此进行下去，直到得到是一位数为止。

比如，对于24来说，把2和4相加得到6，由于6是一位数，因此6是24的数根。再比如39，把3和9加起来得到12，由于12不是一位数，因此还得把1和2加起来，最后得到3，这是一个一位数，因此3是39的数根。

Input

一个正整数(小于10?1000)。

Output

一个数字，即输入数字的数根。

Sample Input

24
Sample Output

6
*/

#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
 
char a[1010];
 
int main()
{
    while(~scanf("%s",a))
    {
        int l=strlen(a);
        int sum=0;
        for(int i=0; i<l; i++)
        {
            if(sum+a[i]>'9')
            {
                int s=sum+a[i]-'0';
                sum=s%10+s/10;
            }
            else
                sum+=a[i]-'0';
        }
        printf("%d\n",sum);
    }
    return 0;
}
