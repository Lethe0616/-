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
        sort(str.begin(),str.end());//默认为升序进行排序
        
        for(int i = 0; i < str.size() - 1; ++i){//最后一个字符串无需比较
                if(str[i] == str[i+1]){//两串字符串相同
                    name[i] = false;
                }
                else if(str[i].size() < str[i + 1].size()//前串比后串的长度短
                      && str[i] == str[i + 1].substr(0,str[i].size())//前串是后串的子串。substr的两个参数一个是起点，一个是长度。
                      && str[i + 1][str[i].size()] == '/')//后串的后一位是/
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

