#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int n;
    while(cin >> n)
    {
        stack<string> str;
        int max = 0;
        for(int i=0; i < n; i++){
            string id,caozuo;
            cin >> id >> caozuo;
            if(caozuo == "connect"){
                str.push(id);
                if(str.size() > max)
                    max = str.size();
            }
             else
                 str.pop();     
            }
        cout << max <<endl;   
    }
    return 0;
}

