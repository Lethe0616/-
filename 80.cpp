#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        string res;
        for(int i =0; i < str.size(); i++)
        {
            if(str[i] != '_')
                res += str[i];
            else
            {
                i++;
                res += (char)toupper(str[i]);//toupper()函数是将小写字母转换为大写字母。char为转换后的类型。
            }
        }
         cout << res << endl;
    }
    return 0;
}

