#include<iostream>
#include<vector>
using namespace std;

void put(int n, int m, vector<int>& a, int s)
{
    if(m == 0){//m=0Ϊ�ݹ������������ʱa�п����Ѿ����������ɸ�Ԫ���ˡ�����a�е����ݾ���һ������
        for(int i = 0; i < a.size(); i++){
            if(i == 0)
                cout << a[i];
             else
                 cout << " " << a[i];
        }
        cout << endl;
    }
    for(int i = s; i <= n && i <= m; i++){
        // ���¼��д����ǽ�����Ŀ������ת����Ϊ����i->n�ж���������ͣ���Ϊm�� ������ת��Ϊi+1->n�ж���������ͣ���Ϊm-i
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

