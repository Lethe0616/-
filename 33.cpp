/*
��һֻ���ӣ��ӳ������3������ÿ���¶���һֻ���ӣ�С���ӳ����������º�ÿ��������һֻ���ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�
*/
#include <stdlib.h>
#include <stdio.h>
int main()
    {
    int month;
    while(scanf("%d", &month) != EOF)
        {
        int i;
        long sum;
        long x, y;
        x = 1;
        y = 1;
        if(month > 2)
        {
            for(i = 3; i <= month; i++)
                {
                sum = x + y;
                x = y;
                y = sum;
                }
        }
        printf("%ld", sum);
        printf("\n");
        }
    return 0;
    }
