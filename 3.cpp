/*
ţţ��������������Ϊһ��������һ��������������,��������������Ƿǵ������߷ǵݼ�����ġ�
ţţ��һ������Ϊn����������A,
��������һ�������ǰ�����A��Ϊ���ɶ�����������,
ţţ��֪�������ٿ��԰���������Ϊ�������������С� 

���ʾ���ȥ������ͼ����Ĳ���Ͳ��ȵĸ������ټ�һ��
�ǵݼ�����a[i]<=a[i+1]���ݼ�����a[i]>a[i+1]
�ǵ�������a[i]>=a[i+1]����������a[i]<a[i+1]
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
		//�ҳ����岨��        
		if ((v[i - 1] < v[i] && v[i] > v[i + 1]) || (v[i - 1] > v[i] && v[i] < v[i + 1]))
		{
			ret++;
			// ��������     
			if (i != n - 3)
				i++;
		}
	}
	cout << ret << endl;
	system("pause");
}
