#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str))//getline����������cin�����ڶ�ȡ������������str�ǽ��������ַ�����string����������
    {
        for(auto a : str)//��str�����е�ÿһ��Ԫ�ش�ǰ����ö�ٳ���������e����ʾ
        {
            if(a >= '0' && a <= '9')
                cout << a;
        }

        cout << endl;
    }
    return 0;
}

