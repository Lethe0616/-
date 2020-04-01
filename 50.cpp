/*
给定三条边，请你判断一下能不能组成一个三角形。
Input
输入数据第一行包含一个数M，接下有M行，每行一个实例，包含三个正数A,B,C。其中A,B,C <1000;
Output
对于每个测试实例，如果三条边长A,B,C能组成三角形的话，输出YES，否则NO。
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

