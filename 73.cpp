#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int a[10000],m=0;
        int str[10000]={0};
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        for(int i = 1; i <= n; i++)//�������ݶ�ȡ
            for(int j = 1; j < i; j++)//��Զ��i���������ֺ�һλ
                if(a[i] > a[j])
                    str[i] = max(str[i], str[j] + 1), m = str[i] > m ? str[i] : m;
        cout << m+1 << endl;
    }
    return 0;
}

