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
                danci += str[i];//������ַ����δ���danci��
            }
            else
            {
                if(danci.size() > 0)
                {
                    v.push_back(danci);//�����������ַ��������
                    danci.clear();//���v�ڴ洢���ַ�
                }
            }
        }
        
        for(int i = v.size() - 1; i > 0; i--)
        {
            cout << v[i] << ' ';//�������Ҫһ���ո�
        }
        cout << v[0] << endl;
    }
    return 0;
}

