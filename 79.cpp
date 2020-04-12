#include<iostream>
#include<vector>
using namespace std;

void put(int n, int m, vector<int>& a, int s)
{
    if(m == 0){//m=0为递归结束条件。此时a中可能已经包含了若干个元素了。并且a中的内容就是一组结果。
        for(int i = 0; i < a.size(); i++){
            if(i == 0)
                cout << a[i];
             else
                 cout << " " << a[i];
        }
        cout << endl;
    }
    for(int i = s; i <= n && i <= m; i++){
        // 以下几行代码是将该题目进行了转换。为了求i->n有多少种情况和，和为m。 把问题转换为i+1->n有多少中情况和，和为m-i
        a.push_back(i);
        put(n, m - i, a, i + 1);
        a.pop_back();
    }
}

int main()
{
    int n,m;
    while(cin >> n >> m){
        vector<int> a;
        put(n, m, a, 1);
    }
}

