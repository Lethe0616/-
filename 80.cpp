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
                res += (char)toupper(str[i]);//toupper()�����ǽ�Сд��ĸת��Ϊ��д��ĸ��charΪת��������͡�
            }
        }
         cout << res << endl;
    }
    return 0;
}

