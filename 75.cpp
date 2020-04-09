#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            continue;
        vector<string> s(n);
        stack<int> st;
        for(int i = 0;i < n;++i){
            cin >> s[i];
        }
        
        for(int i = 0;i < n;++i){
            if(s[i][0] >= '0' && s[i][0] <= '9'){
                st.push(atoi(s[i].data()));//把字符串转化成整形入栈
            }
            else{
                int a = st.top();//取栈顶数字1
                st.pop();//将栈顶数字1出栈
                int b = st.top();//取栈顶数字2
                st.pop();//将栈顶数字2出栈
                switch(s[i][0]){
                    case '+':st.push(b + a);
                        break;
                    case '-':st.push(b - a);
                        break;
                    case '*':st.push(a * b);
                        break;
                    case '/':st.push(b / a);
                        break;
                }
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}


