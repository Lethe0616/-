#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str1[10001] = {0}, str2[10001] = {0};//�������ڵ�ֵȫ����ֵΪ0
    while (cin >> str1 >> str2){
        int table[26] = {0};
        //ͳ���ַ���1�и�����ĸ���ֵĴ���
        for (int i = (int)strlen(str1); i >= 0; --i) {
            table[str1[i] - 'A'] += 1;//��ȥ��һ����ĸ��������ͳ��
        }
        bool flag = true;
        //��һ��ȥ�ַ���2�и����ַ����ֵĴ���
        for (int i = (int)strlen(str2); i >= 0; --i) {
            if (--table[str2[i] - 'A'] < 0) {
                //���ָ�����˵���ַ���2�������ַ���1��δ���ֵ��ַ��������������ַ���1����
                flag = false;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}

