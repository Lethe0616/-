#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	long d[22] = { 0, 0, 1 };
	// 错排数量，预留第一项为 0 ，配合下文中输入的 n
	long f[22] = { 0, 1, 2 }; 
	// 阶 乘
	for (int i = 3; i < 22; i++){
		d[i] = (i - 1) * (d[i - 1] + d[i - 2]); // 错排的递推公式
		f[i] = i * f[i - 1]; // 阶乘的递推公式
	}

	int n;
	while (cin >> n){
		printf("%.2f%\n", 100.0 * d[n] / f[n]);
		// 用 100.0 来把结果处理成 double ，保留两位小数
	}

	system("pause");
	return 0;
}
