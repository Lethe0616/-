/*
题目描述
任意一个偶数（大于2）都可以由2个素数组成，组
成偶数的2个素数有很多种情况，本题目要求输出组成指定偶数的两个素数差值最小的素数对 
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
            cout << "请输入偶数" << endl;
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
