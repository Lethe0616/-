/*
��Ŀ����
����һ��ż��������2����������2��������ɣ���
��ż����2�������кܶ������������ĿҪ��������ָ��ż��������������ֵ��С�������� 
*/
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n <= 2)
        return true;
    for(int i = 2; i <= sqrt(n);i++){
        if(n % i == 0)
            return false;
    }
    return true;
}


int main(){
    int n;
    
    while(cin >> n){
        if(n % 2 != 0){
            cout << "������ż��" << endl;
            continue;
        }
        int half = n / 2;
        for(int i = 0;i < half;i++){
            if(isPrime(half - i) && isPrime(half + i)){
                cout << half - i << endl; 
                cout << half + i << endl;
                break;
            }
        }       
    }
    return 0;  
}
