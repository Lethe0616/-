#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<string> str(n);
        vector<bool> name(n, true);
        for(int i = 0; i < n; i++){
            cin>>str[i];
        }
        sort(str.begin(),str.end());//Ĭ��Ϊ�����������
        
        for(int i = 0; i < str.size() - 1; ++i){//���һ���ַ�������Ƚ�
                if(str[i] == str[i+1]){//�����ַ�����ͬ
                    name[i] = false;
                }
                else if(str[i].size() < str[i + 1].size()//ǰ���Ⱥ󴮵ĳ��ȶ�
                      && str[i] == str[i + 1].substr(0,str[i].size())//ǰ���Ǻ󴮵��Ӵ���substr����������һ������㣬һ���ǳ��ȡ�
                      && str[i + 1][str[i].size()] == '/')//�󴮵ĺ�һλ��/
                       {
                           name[i] = false;
                       }
            }
          
                       for(int i = 0; i < str.size(); ++i){
                           if(name[i]){
                               cout <<  "mkdir -p " << str[i] << endl;
                           }
                       } 
        cout << endl;
    }
    return 0;
}

