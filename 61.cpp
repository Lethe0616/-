#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    long a[100000];
    a[1]=1;
    a[2]=2;
    while(cin>>n){
        for(int i=3;i<=100000;i++){
            a[i]=(a[i-1]+a[i-2])%1000000;
        }
        if(n<31)
        cout<<a[n]<<endl;
        else
            cout<<setw(6)<<setfill('0')<<a[n]<<endl;
    }
}
