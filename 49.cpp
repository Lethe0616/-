/*
【题目描述】：一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
【解题思路】：
排列：
每个台阶看成一个位置，除过最后一个位置，其它位置都有两种可能性，
所以总的排列数为2^(n-1)*1=2^(n-1)
*/
int jumpFloorII(int number)
{
	int first = 1;
	int sum = 1;
 
	while (number >1)
	{
		sum += first;
		first = sum;
		number--;
	}
	return sum;
}
