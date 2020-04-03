#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long a, b, c, d;
long long gcd(long long t1, long long t2) {//gcd()�����������������
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

void func(long long m, long long n) {//�жϷ�ĸ��������Ƿ���0
    if (m * n == 0) {
        printf("%s", n == 0 ? "Inf" : "0");
        return ;
    }
    
    bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));//���ӷ�ĸ�����Ƿ���ͬ
    m = abs(m); //��m�ľ���ֵ
    n = abs(n);//��n�ľ���ֵ
    long long x = m / n;//�ɱ���ȡ��������������
    printf("%s", flag ? "(-" : "");//���Ų�ͬ��(-
    if (x != 0) 
        printf("%lld", x);//�������λ
        
    if (m % n == 0) {//����������û��С��λ 
        if(flag) 
        printf(")");
        return ;
    }
    
    if (x != 0) 
    printf(" ");//����ո�
    m = m - x * n;//���С��λ�ķ���
    long long t = gcd(m, n);//���µķ��ӷ�ĸ�������ʽ
    m = m / t; n = n / t;
    printf("%lld/%lld%s", m, n, flag ? ")" : "");
}

int main() {
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + b * c, b * d); printf("\n");
    func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
    func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
    func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c);
    return 0;
}

