//��������:��������������A��B��
//�������:���A��B����С��������

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

