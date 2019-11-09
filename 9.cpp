#include<iostream>
using namespace std;

bool is_reback(string &str)
{
    int begin=0;
    int end=str.size()-1;
    while(begin<end)
    {
        if(str[begin]!=str[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int reback_Count()
{
    string A;
    string B;
    getline(cin,A);
    getline(cin,B);
    int count=0;
    
    for(int i=0;i<=A.size();i++)
    { 
        string str1=A;
        str1.insert(i,s2);
        if(is_reback(str1))
        {
            count++;
        }
    }
    return count;
}
