/*
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串
*/

#include <iostream>?
#include <string>
using namespace std;
int main(){
string s ;
cin>>s;
int i=0;
while(s[i]!='\0')
{
i++;
}
while(i-->0){
 cout<<s[i];
}
cout<<endl;
return 0;
}

