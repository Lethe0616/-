#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long a, b, c, d;
long long gcd(long long t1, long long t2) {//gcd()是用来求最大公因数的
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

void func(long long m, long long n) {//判断分母或分子中是否有0
    if (m * n == 0) {
        printf("%s", n == 0 ? "Inf" : "0");
        return ;
    }
    
    bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));//分子分母符号是否相同
    m = abs(m); //求m的绝对值
    n = abs(n);//求n的绝对值
    long long x = m / n;//可被提取出来的整数部分
    printf("%s", flag ? "(-" : "");//符号不同加(-
    if (x != 0) 
        printf("%lld", x);//输出整数位
        
    if (m % n == 0) {//可以整除，没有小数位 
        if(flag) 
        printf(")");
        return ;
    }
    
    if (x != 0) 
    printf(" ");//输出空格
    m = m - x * n;//输出小数位的分子
    long long t = gcd(m, n);//求新的分子分母的最大公因式
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

