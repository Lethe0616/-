/*
题目描述：
功能: 求一个byte数字对应的二进制数字中1的最大连续数，例如3的二进制为00000011，最大连续2个1

输入描述:
输入一个byte数字

输出描述:
输出转成二进制之后连续1的个数
*/

#include <iostream>
#include <algorithm>
using namespace std;

/*从最低位开始，n&1判断当前位是否为1
 *	如果是1，++count，更新maxsize；
 *	如果是0，count归0；
 *	n向左移位来比较下一位
*/
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0, maxsize = 0;
		while (n)
		{
			if (n & 1)
			{
				count++;
				maxsize = max(maxsize, count);
			}
			else
				count = 0;
			n = n >> 1;
		}

		cout << maxsize << endl;
	}
	return 0;
}
