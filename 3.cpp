/*
牛牛定义排序子序列为一个数组中一段连续的子序列,并且这段子序列是非递增或者非递减排序的。
牛牛有一个长度为n的整数数组A,
他现在有一个任务是把数组A分为若干段排序子序列,
牛牛想知道他最少可以把这个数组分为几段排序子序列。 

本质就是去找这里图里面的波峰和波谷的个数，再加一。
非递减就是a[i]<=a[i+1]，递减就是a[i]>a[i+1]
非递增就是a[i]>=a[i+1]，递增就是a[i]<a[i+1]
*/

#include<iostream> 
#include<vector>
#include<stdlib.h>
using namespace std; 
int main() 
{
	int n;    
	cin >> n;    
	vector<int> v;    
	v.resize(n);    
	for (int i = 0; i < n; ++i)        
		cin >> v[i];
	int ret = 1;
	for (int i = 1; i<n - 1; i++)
	{
		//找出波峰波谷        
		if ((v[i - 1] < v[i] && v[i] > v[i + 1]) || (v[i - 1] > v[i] && v[i] < v[i + 1]))
		{
			ret++;
			// 处理特例     
			if (i != n - 3)
				i++;
		}
	}
	cout << ret << endl;
	system("pause");
}
