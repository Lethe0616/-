/*
���������ߣ������ж�һ���ܲ������һ�������Ρ�
Input
�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ����������������A,B,C������A,B,C <1000;
Output
����ÿ������ʵ������������߳�A,B,C����������εĻ������YES������NO��
Sample Input
2
1 2 3
2 2 2
Sample Output
NO
YES
*/
#include<iostream>
using namespace std;
int main()
{
    int M;
    cin >> M; 
    double a[3];
    for (int j = 0; j < M; j++)
    {
        cin >> a[0] >> a[1] >> a[2];
            if (a[0] < 1000&&a[0] >0 && a[1] < 1000 && a[1] >0 && a[2] < 1000 && a[2] >0)
            {
                if ((a[0] + a[1]) > a[2] && (a[0] + a[2]) > a[1] && (a[2] + a[1]) > a[0])cout << "YES"<<endl;
                else cout << "NO"<<endl;
            }
    }
    return 0;
    system("pause");
}

