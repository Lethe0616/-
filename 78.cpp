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
        string num = "22233344455566677778889999";//���㰴�±������ĸ��Ӧ������
        set<string> a;//set������һ�����벻�ظ�����
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
                res += num[str[i] - 'A'];//��ÿ����ĸ����ȥ��һ����ĸA��ascii��ֵ���õ��ľ��������ĸ��A�Ժ�ڼ�����ĸ������ֱ�Ӹ��±��Ӧ����
                count++;
                if(count == 3)
                    res += '-';
            }
            else
                if(str[i] >= '0' && str[i] <= '9')
                {
                    res += str[i];//ֱ�Ӷ����Ӧ�±꼴��
                    count++;
                    if(count == 3)
                    res += '-';
                }
        }
        a.insert(res);//��a�����res
    }
    
    for(auto e : a)//�Զ��ж�����
        cout << e <<endl;
    cout << endl;
    }
    return 0;
}

