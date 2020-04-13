#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        vector<string> v;
        string danci;
        for(int i = 0; i <= str.size(); i++)
        {
            if(((str[i]) >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                danci += str[i];//读入的字符依次存入danci中
            }
            else
            {
                if(danci.size() > 0)
                {
                    v.push_back(danci);//将读入的最后字符依次输出
                    danci.clear();//清空v内存储的字符
                }
            }
        }
        
        for(int i = v.size() - 1; i > 0; i--)
        {
            cout << v[i] << ' ';//输出间需要一个空格
        }
        cout << v[0] << endl;
    }
    return 0;
}

