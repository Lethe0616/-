#include<iostream>

using namespace std;
int main()
{
    long str[21] = { 0, 0, 1};//��һ��0�ͺ��������n��ƥ�䡣D(1) = 0, D(2) = 1.
    int i;
    for(int i = 3; i < 21; i++){
        str[i] = (i - 1)*(str[i - 1] + str[i - 2]);
    }
    
    int n;
    while(cin >> n){
        cout << str[n] <<endl;
    }
    return 0;
}

