/*
一个袋子里面有n个球，每个球上面都有一个号码(拥有相同号码的球是无区别的)。如果一个袋子是幸运的当且仅当所有球的号码的和大于所有球的号码的积。
例如：如果袋子里面的球的号码是{1, 1, 2, 3}，这个袋子就是幸运的，因为1 + 1 + 2 + 3 > 1 * 1 * 2 * 3
你可以适当从袋子里移除一些球(可以移除0个,但是别移除完)，要使移除后的袋子是幸运的。现在让你编程计算一下你可以获得的多少种不同的幸运的袋子。
*/
 
#include<iostream>
#include<algorithm>
using namespace std;
const int N=1000;
int a[N];
int n;

int getnum(int a[],int pos,long sum,long multi)
{
    int cnt=0;
    for(int i=pos;i<n;i++)
    {
        sum+=a[i];
        multi*=a[i];
        if(sum>multi)
            cnt+=1+getnum(a,i+1,sum,multi);
        else if(a[i]==1)
            cnt+=getnum(a,i+1,sum,multi);
        else
            break;
        sum=sum-a[i];
        multi=multi/a[i];
        for(;i<n-1&&a[i]==a[i+1];i++);
    }
    return cnt;
}
int main()
    {
    while(scanf("%d",&n)>0)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        cout<<getnum(a,0,0,1);
    }
}
