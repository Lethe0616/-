/*
考拉有n个字符串字符串，任意两个字符串长度都是不同的。考拉最近学习到有两种字符串的排序方法： 1.根据字符串的字典序排序。例如：
"car" < "carriage" < "cats" < "doggies < "koala"
2.根据字符串的长度排序。例如：
"car" < "cats" < "koala" < "doggies" < "carriage"
考拉想知道自己的这些字符串排列顺序是否满足这两种排序方法，考拉要忙着吃树叶，所以需要你来帮忙验证。 

输入描述:
输入第一行为字符串个数n(n ≤ 100)
接下来的n行,每行一个字符串,字符串长度均小于100，均由小写字母组成



输出描述:
如果这些字符串是根据字典序排列而不是根据长度排列输出"lexicographically",

如果根据长度排列而不是字典序排列输出"lengths",

如果两种方式都符合输出"both"，否则输出"none"
 

输入例子:
3
a
aa
bbb
 

输出例子:
both

用了两个结构，set，vector，set中输入完成后就按字典排好序了，
在和vector内的string一次比较，判断是否输入为字典顺序
比较vector内的string的size是否递增
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;
bool islex(set<string>st,vector<string>vec)
{
    set<string>::iterator sit=st.begin();
    vector<string>::iterator vit=vec.begin();
    while(sit!=st.end()&&vit!=vec.end())
    {
        if(*sit==*vit)
            {
            sit++;
            vit++;
        }
        else
            return false;
    }
    return true;
}

bool islen(vector<string> vec)
    {
    for(int i=0;i<vec.size()-1;i++)
    {
        if(vec[i].size()>vec[i+1].size())
            return false;
    }
    return true;
}

int main()
    {
    int n;
    while(cin>>n)
   {
        vector<string>vec;
        set<string>st;
        for(int i=0;i<n;i++)
            {
            string str;
            cin>>str;
            vec.push_back(str);
            st.insert(str);
        }
        if(islex(st,vec)&&islen(vec))
            cout<<"both"<<endl;
        else if(islex(st,vec))
            cout<<"lexicographically"<<endl;
        else if(islen(vec))
            cout<<"lengths"<<endl;
        else
            cout<<"none"<<endl;
    }
}
