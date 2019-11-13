/*
������n���ַ����ַ��������������ַ������ȶ��ǲ�ͬ�ġ��������ѧϰ���������ַ��������򷽷��� 1.�����ַ������ֵ����������磺
"car" < "carriage" < "cats" < "doggies < "koala"
2.�����ַ����ĳ����������磺
"car" < "cats" < "koala" < "doggies" < "carriage"
������֪���Լ�����Щ�ַ�������˳���Ƿ��������������򷽷�������Ҫæ�ų���Ҷ��������Ҫ������æ��֤�� 

��������:
�����һ��Ϊ�ַ�������n(n �� 100)
��������n��,ÿ��һ���ַ���,�ַ������Ⱦ�С��100������Сд��ĸ���



�������:
�����Щ�ַ����Ǹ����ֵ������ж����Ǹ��ݳ����������"lexicographically",

������ݳ������ж������ֵ����������"lengths",

������ַ�ʽ���������"both"���������"none"
 

��������:
3
a
aa
bbb
 

�������:
both

���������ṹ��set��vector��set��������ɺ�Ͱ��ֵ��ź����ˣ�
�ں�vector�ڵ�stringһ�αȽϣ��ж��Ƿ�����Ϊ�ֵ�˳��
�Ƚ�vector�ڵ�string��size�Ƿ����
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
