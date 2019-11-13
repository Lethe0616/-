//输入描述:输入两个正整数A和B。
//输出描述:输出A和B的最小公倍数。

#include <iostream>
using namespace std;
int main(){
int A,B;
cin>>A>>B;
for (int i=1;i<=A*B;)
{
if (i>=A && i>=B && i%A==0 && i%B==0)
{
 cout<<i<<endl;
 break;
}
else ++i;
}
return 0;
}

