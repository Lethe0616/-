#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	long d[22] = { 0, 0, 1 };
	// ����������Ԥ����һ��Ϊ 0 ���������������� n
	long f[22] = { 0, 1, 2 }; 
	// �� ��
	for (int i = 3; i < 22; i++){
		d[i] = (i - 1) * (d[i - 1] + d[i - 2]); // ���ŵĵ��ƹ�ʽ
		f[i] = i * f[i - 1]; // �׳˵ĵ��ƹ�ʽ
	}

	int n;
	while (cin >> n){
		printf("%.2f%\n", 100.0 * d[n] / f[n]);
		// �� 100.0 ���ѽ������� double ��������λС��
	}

	system("pause");
	return 0;
}
