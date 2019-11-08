/*
题目描述
给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数

输入描述:
输入为一行，M(32位整数)、N(2 ≤ N ≤ 16)，以空格隔开。

输出描述:
为每个测试实例输出转换后的数，每个输出占一行。如果N大于9，则对应的数字规则参考16进制（比如，10用A表示，等等）

示例1
输入
7 2

输出
111
*/ 

#include <iostream>
using namespace std;
int main()
{
    string s = "", table = "0123456789ABCDEF";
    int M = 0, N = 0;
    cin >> M >> N;

    if( M == 0) 
    {
        s ="0";
    }

    while( M )
    {
        if( M < 0 )
        {
            M = -M;
            cout << "-";
        }
        s = table[M % N] + s;
        M /= N;
    }
    cout << s << endl;
    return 0;
}
