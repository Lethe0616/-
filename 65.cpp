# include<iostream>
# include<string>

using namespace std;

int arr[21][21];
string a1,a2;
void initArr();

long long Cal(string s1,string s2,int m)
{
    int i,j=0,n=0;
    long long sum=1;
    int len=s1.length();
    s1.erase(s1.begin());//从s1中删除s1.begin()中的元素
    s2=s2.substr(0,s2.length()-1);//指定字符串开始和结尾的位置
    while(s1.length()>j)
    {  
        for(i=j;i<s1.length();i++)
        {
            if(s1[j]==s2[i])
                {
                    sum=sum*Cal(s1.substr(j,i-j+1),s2.substr(j,i-j+1),m);
                j=i+1;
                n++;
                break;
                }
         } 
    }
    sum=sum*arr[n][m];
    return sum;
     
}
void initArr()
{
    int i,j;
    arr[0][1]=arr[1][1]=1;
    for(i=2;i<21;i++)
    {
        arr[0][i]=1;
        for(j=1;j<=i;j++)
        {
            if(j==i)
            arr[j][i]=1;
            else arr[j][i]=arr[j-1][i-1]+arr[j][i-1];
        }
    }
}
 
int main()
{
   int m;
   string  s1,s2;
   long long sum;
   while(cin>>m>>s1>>s2)
   {
      int len=s1.size();
         if (len==0)
        break;
        
      initArr();
        sum=Cal(s1,s2,m);
        cout<<sum<<endl;
    }
   return 0;
}

