#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string str;
    int n;
    while(cin >> n)
    {
        string num = "22233344455566677778889999";//方便按下标查找字母对应的数字
        set<string> a;//set创建了一个无须不重复数集
        int count;
        
        for(int i = 0; i < n; ++i)
        {
            string res;
            cin >> str;
            count = 0;
            for(int i =0; i < str.size(); ++i)
            {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                res += num[str[i] - 'A'];//将每个字母都减去第一个字母A的ascii码值，得到的就是这个字母是A以后第几个字母，可以直接跟下标对应起来
                count++;
                if(count == 3)
                    res += '-';
            }
            else
                if(str[i] >= '0' && str[i] <= '9')
                {
                    res += str[i];//直接读入对应下标即可
                    count++;
                    if(count == 3)
                    res += '-';
                }
        }
        a.insert(res);//向a中添加res
    }
    
    for(auto e : a)//自动判断类型
        cout << e <<endl;
    cout << endl;
    }
    return 0;
}

