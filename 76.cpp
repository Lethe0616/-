#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str))//getline函数参数：cin是正在读取的输入流，而str是接收输入字符串的string变量的名称
    {
        for(auto a : str)//将str容器中的每一个元素从前往后枚举出来，并用e来表示
        {
            if(a >= '0' && a <= '9')
                cout << a;
        }

        cout << endl;
    }
    return 0;
}

