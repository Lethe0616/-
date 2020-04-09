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
                st.push(atoi(s[i].data()));//���ַ���ת����������ջ
            }
            else{
                int a = st.top();//ȡջ������1
                st.pop();//��ջ������1��ջ
                int b = st.top();//ȡջ������2
                st.pop();//��ջ������2��ջ
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


