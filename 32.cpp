/*
�����������ڼ�����У�ͨ���һ�������﷨���㷺Ӧ�����ļ����������ݿ⡢������ʽ��������Ҫ���λʵ���ַ���ͨ������㷨��

Ҫ��
ʵ������2��ͨ�����
*��ƥ��0�������ϵ��ַ����ַ���Ӣ����ĸ������0-9��ɣ������ִ�Сд����ͬ��
����ƥ��1���ַ�

��������:
ͨ������ʽ��һ���ַ�����

�������:
����ƥ��Ľ������ȷ���true���������false

ʾ��1��

����
te?t*.*
txt12.xls

���
false

����˼·
�������ͨ���ݹ���⡣
��ǰ�������ƥ�䣺

������ͬ�ַ���������ƶ�һ���ַ���
���ͨ�������?������ƥ�䣬�Զ�����һ���ַ���
���ͨ�������*�������ƥ���������ַ�������0������ʱ����������ѡ��
ƥ��0����ͨ�������ƶ�һ���ַ����ַ���������
ƥ��1����ͨ������ַ���������ƶ�һ���ַ���
ƥ������ͨ����������ַ�������ƶ�һ���ַ���
�ݹ����ֹ������ͨ��������ַ�������\0��������ͬʱ������
*/ 
#include <iostream>
#include <string>
using namespace std;

bool match(const char* pattern, const char *str){
    if (*pattern == '\0' && *str == '\0')    //��ǰ�ַ�����������true
        return true;
    if (*pattern == '\0' || *str == '\0')    //�����ַ�����һ���Ƚ������򷵻�false
        return false;
    
    if (*pattern == '?'){            //����?�ţ�ƥ��һ���ַ���������һ��λ��
        return match(pattern + 1, str + 1);
    }
    else if (*pattern == '*'){
        // ����*�ţ�ƥ��0��(str��Ų��)��1�������߶���ǰŲ��һ���ַ�������(str��ǰŲ��һ���ַ�)
        return match(pattern + 1, str) || match(pattern + 1, str + 1) || match(pattern, str + 1);
    }
    else if (*pattern == *str){    //�����ǰ�ַ���ȣ�ƥ����һ���ַ�
        return match(pattern + 1, str + 1);
    }
    return false;
}
int main(){
    string pattern, str;    //pattern��ʽ�ַ�����strʵ���ַ���
    while (cin >> pattern >> str){
        bool ret = match(pattern.c_str(), str.c_str());
        if (ret)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
